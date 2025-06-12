/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:32:55 by gude-cas          #+#    #+#             */
/*   Updated: 2025/05/10 11:27:00 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/////////////////////////////// DATE ///////////////////////////////////////////

Date::Date()
{
    this->tm_sec = 0;   // tm_sec: seconds after the minute (0-60)
    this->tm_min = 0;   // tm_min: minutes after the hour (0-59)
    this->tm_hour = 0;  // tm_hour: hours since midnight (0-23)
    this->tm_mday = 1;  // tm_mday: day of the month (1-31)
    this->tm_mon = 0;   // tm_mon: months since January (0-11). January = 0, December = 11
    this->tm_year = 0;  // tm_year: years since 1900, for example, 2025 is stored as 125
    this->tm_wday = 0;  // tm_wday: days since sunday (0-6). Sunday = 0, Monday = 1
    this->tm_yday = 0;  // tm_yday: days since January 1 (0-365). January 1 = 0
    this->tm_isdst = 0; // tm_isdst: daylight saving time flas. Positive = in effect, 0 = not in effect, negative = unkown
}

Date::Date(Date const &obj)
{
    this->tm_sec = obj.tm_sec;
    this->tm_min = obj.tm_min;
    this->tm_hour = obj.tm_hour;
    this->tm_mday = obj.tm_mday;
    this->tm_mon = obj.tm_mon;
    this->tm_year = obj.tm_year;
    this->tm_wday = obj.tm_wday;
    this->tm_yday = obj.tm_yday;
    this->tm_isdst = obj.tm_isdst;
}

Date &Date::operator=(Date const &obj)
{
    this->tm_sec = obj.tm_sec;
    this->tm_min = obj.tm_min;
    this->tm_hour = obj.tm_hour;
    this->tm_mday = obj.tm_mday;
    this->tm_mon = obj.tm_mon;
    this->tm_year = obj.tm_year;
    this->tm_wday = obj.tm_wday;
    this->tm_yday = obj.tm_yday;
    this->tm_isdst = obj.tm_isdst;
    
    return (*this);
}

Date::~Date() {}

Date::Date(long long year, long long month, long long day)
{
    if (year < 0 || year > 3000000000LL)
        throw (InvalidDateFormat());
    if (month < 1 || month > 12)
        throw (InvalidDateFormat());
    if (day < 1 || day > 31)
        throw (InvalidDateFormat());
        
    this->tm_sec = 0;
    this->tm_min = 0;
    this->tm_hour = 0;
    this->tm_mday = static_cast<int>(day);
    this->tm_mon = static_cast<int>(month - 1);
    this->tm_year = static_cast<int>(year - 1900);
    this->tm_wday = 0;
    this->tm_yday = 0;
    this->tm_isdst = 0;
    
    if (!this->isValid())
        throw (InvalidDateFormat());
}

bool Date::isValid()
{
    Date copy = *this;
    
    return (std::mktime(&copy) > 0 && copy == *this);
}

bool Date::operator==(Date const &obj) const
{
    return (this->tm_year == obj.tm_year &&
            this->tm_mon == obj.tm_mon &&
            this->tm_mday == obj.tm_mday);
}

bool Date::operator<(Date const &obj) const
{
    if (this->tm_year != obj.tm_year)
        return (this->tm_year < obj.tm_year);
    else if (this->tm_mon != obj.tm_mon)
        return (this->tm_mon < obj.tm_mon);
    else
        return (this->tm_mday < obj.tm_mday);
}

std::ostream &operator<<(std::ostream &out, Date const &date)
{
    std::string zero_mon;
    std::string zero_day;
    if (date.tm_mon < 9)
        zero_mon = "0";
    if (date.tm_mday < 10)
        zero_day = "0";
        
    out << date.tm_year + 1900 << "-" << zero_mon << date.tm_mon + 1 << "-" << zero_day << date.tm_mday;
    return (out);
}

const char *Date::InvalidDateFormat::what() const throw()
{
    return ("bad input => ");
}

////////////////////////////////////////////////////////////////////////////////



/////////////////////////////// BITCOINEXCHANGE ////////////////////////////////

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &obj) : data(obj.data) {}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &obj)
{
    this->data = obj.data;
    return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

static bool digitInString(std::string const &str)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]))
            return (true);
    }
    return (false);
}

static long long getValue(char const *line, int &i, char c, bool space)
{
    if (!isdigit(line[i]))
        throw (std::invalid_argument(NULL));
        
    char *endPtr = NULL;
    long long value = std::strtoll(line + i, &endPtr, 10);
    
    i = endPtr - line;
    
    if (space)
        while (isspace(line[i])) i++;
        
    if (line[i] != c)
        throw (std::invalid_argument(NULL));
        
    i++;
    
    if (space)
        while (isspace(line[i])) i++;
        
    return (value);
}

static bool toMap(char const *line, std::map<Date, float> &map)
{
    int i = 0;
    int year = 0, month = 0, day = 0;
    double value = 0;
    char *endPtr = NULL;
    
    for (; isspace(line[i]); i++);
    try
    {
        year = getValue(line, i, '-', false);
        month = getValue(line, i, '-', false);
        day = getValue(line, i, ',', false);
        
        value = strtod(line + i, &endPtr);
        if (line + i == endPtr)
            throw (std::invalid_argument(NULL));
            
        for (; isspace(*endPtr); endPtr++);
        if (*endPtr != '\0')
            throw (std::invalid_argument(NULL));
            
        Date inmap(year, month, day);
        map[inmap] = value;
    }
    catch (std::exception &e)
    {
        std::cerr << "Error: Incorrect input in .csv file!" << std::endl;
        return (false);
    }
    
    return (true);
}

bool BitcoinExchange::setData(std::string const &fileName)
{
    bool fileIsOk = true;
    
    std::ifstream file;
    file.open(fileName.c_str());
    
    if (!file.is_open())
    {
        std::cerr << "Error: could not open file." << std::endl;
        return (false);
    }
    
    for (std::string line; std::getline(file, line);)
        if (digitInString(std::string(line)) && !toMap(line.c_str(), this->data))
            fileIsOk = false;
            
    file.close();
    return (fileIsOk);
}

static void getInfo(char const *line, int &year, int &month, int &day, double &amount)
{
    int i = 0;
    char *endPtr = NULL;
    
    for (; isspace(line[i]); i++);
    try
    {
        long long y = getValue(line, i, '-', false);
        long long m = getValue(line, i, '-', false);
        long long d = getValue(line, i, '|', true);
        
        if (y < 0 || y > 3000000000LL)
            throw (Date::InvalidDateFormat());
        if (m < 1 || m > 12)
            throw (Date::InvalidDateFormat());
        if (d < 1 || d > 31)
            throw (Date::InvalidDateFormat());
            
        year = static_cast<int>(y);
        month = static_cast<int>(m);
        day = static_cast<int>(d);
    }
    catch (std::exception &e)
    {
        throw (Date::InvalidDateFormat());
    }
    
    amount = strtod(line + i, &endPtr);
    if (line + i == endPtr)
        throw (Date::InvalidDateFormat());
        
    for (; isspace(*endPtr); endPtr++);
    
    if (*endPtr != '\0')
        throw (Date::InvalidDateFormat());
    if (amount < 0)
        throw (BitcoinExchange::NegativeNumber());
    if (amount > 1000)
        throw (BitcoinExchange::TooLargeNumber());
}

void BitcoinExchange::convertValue(std::string const &fileName)
{
    std::ifstream infile;
    infile.open(fileName.c_str());
    if (!infile.is_open())
    {
        std::cerr << "Error: could not open file." << std::endl;
        return ;
    }
    
    for (std::string line; std::getline(infile, line);)
    {
        if (!digitInString(line))
            continue ;
        try
        {
            int year = 0;
            int month = 0;
            int day = 0;
            double amount = 0;
            
            getInfo(line.c_str(), year, month, day, amount);
            Date date(year, month, day);
            std::cout << date << " => " << amount << " = " << amount * this->findClosest(date) << std::endl;
        }
        catch (Date::InvalidDateFormat &e)
        {
            std::cerr << "Error: " << e.what() << line << std::endl;
        }
        catch (std::exception &e)
        {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }
    
    infile.close();
}

float BitcoinExchange::findClosest(Date const &node) const
{
    std::map<Date, float>::const_iterator it = this->data.begin();
    float value = 0;
    
    while (it != this->data.end())
    {
        if (node < it->first)
            break ;
        value = it->second;
        it++;
    }
    return (value);
}

const char *BitcoinExchange::NegativeNumber::what() const throw()
{
    return ("not a positive number.");
}

const char *BitcoinExchange::TooLargeNumber::what() const throw()
{
    return ("too large a number.");
}

////////////////////////////////////////////////////////////////////////////////