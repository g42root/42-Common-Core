/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:32:28 by gude-cas          #+#    #+#             */
/*   Updated: 2025/05/10 11:27:04 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <map>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <iostream>

class Date : public std::tm
{
    public:
        Date();
        Date(Date const &obj);
        Date &operator=(Date const &obj);
        ~Date();
        
        Date(long long year, long long month, long long day);
        
        bool isValid();
        
        bool operator<(Date const &obj) const;
        bool operator==(Date const &obj) const;
        
        class InvalidDateFormat : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

class BitcoinExchange
{
    protected:
        std::map<Date, float> data;
        float findClosest(Date const &node) const;
        
    public:
        BitcoinExchange();
        BitcoinExchange(BitcoinExchange const &obj);
        BitcoinExchange &operator=(BitcoinExchange const &obj);
        ~BitcoinExchange();
        
        void convertValue(std::string const &fileName);
        
        bool setData(std::string const &fileName);
        
        class NegativeNumber : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        
        class TooLargeNumber : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, Date const &date);
