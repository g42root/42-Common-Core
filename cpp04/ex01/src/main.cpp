/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:07:03 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/15 14:24:12 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/Brain.hpp"
#include "../inc/Colors.hpp"

int	main(void)
{
    std::cout << GREY "\n<<<[TEST SUBJECT]>>>\n" R << std::endl;
    
    int n = 4;
	Animal *animals[n];

	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			animals[i] = new Cat();
			animals[i]->makeSound();
			std::cout << std::endl;
		}
		else
		{
			animals[i] = new Dog();
			animals[i]->makeSound();
			std::cout << std::endl;
		}
	}

	std::cout << std::endl;

	for (int i = 0; i < n; i++)
		delete animals[i];
	
    std::cout << GREY "\n<<<[TEST IDEAS]>>>\n" R << std::endl;
    
    Dog dog;
    Cat cat;
    
    dog.getBrain()->setIdea(0, "human give food");
    std::cout << dog.getBrain()->getIdea(0) << std::endl;
    dog.getBrain()->setIdea(9, "me tired");
    std::cout << dog.getBrain()->getIdea(9) << std::endl;
    dog.getBrain()->setIdea(99, "me want outside");
    std::cout << dog.getBrain()->getIdea(99) << std::endl;
    dog.getBrain()->setIdea(87, "me happy be sunday");
    std::cout << dog.getBrain()->getIdea(87) << std::endl;
    
    cat.getBrain()->setIdea(42, "i am god");
    std::cout << cat.getBrain()->getIdea(42) << std::endl;
    
	std::cout << GREY "\n<<<[TEST ANIMAL]>>>\n" R << std::endl;
    Animal a1;
    std::cout << "Type-> " << a1.getType() << std::endl;
    std::cout << "Sound-> ";
    a1.makeSound();
    std::cout << std::endl;
    
    Animal a2 = a1;
    std::cout << "Type-> " << a2.getType() << std::endl;
    std::cout << "Sound-> ";
    a2.makeSound();
    std::cout << std::endl;

    Animal a3(a1);
    std::cout << "Type-> " << a3.getType() << std::endl;
    std::cout << "Sound-> ";
    a3.makeSound();

    std::cout << GREY "\n<<<[TEST CAT]>>>\n" R << std::endl;
    Cat c1;
    std::cout << "Type-> " << c1.getType() << std::endl;
    std::cout << "Sound-> ";
    c1.makeSound();
    std::cout << std::endl;

    Cat c2 = c1;
    std::cout << "Type-> " << c2.getType() << std::endl;
    std::cout << "Sound-> ";
    c2.makeSound();
    std::cout << std::endl;

    Cat c3(c1);
    std::cout << "Type-> " << c3.getType() << std::endl;
    std::cout << "Sound-> ";
    c3.makeSound();

    std::cout << GREY "\n<<<[TEST DOG]>>>\n" R << std::endl;
    Dog d1;
    std::cout << "Type-> " << d1.getType() << std::endl;
    std::cout << "Sound-> ";
    d1.makeSound();
    std::cout << std::endl;

    Dog d2 = d1;
    std::cout << "Type-> " << d2.getType() << std::endl;
    std::cout << "Sound-> ";
    d2.makeSound();
    std::cout << std::endl;

    Dog d3(d1);
    std::cout << "Type-> " << d3.getType() << std::endl;
    std::cout << "Sound-> ";
    d3.makeSound();

    std::cout << GREY "\n<<<[TEST WRONGANIMAL]>>>\n" R << std::endl;
    WrongAnimal wa1;
    std::cout << "Type-> " << wa1.getType() << std::endl;
    std::cout << "Sound-> ";
    wa1.makeSound();
    std::cout << std::endl;

    WrongAnimal wa2 = wa1;
    std::cout << "Type-> " << wa2.getType() << std::endl;
    std::cout << "Sound-> ";
    wa2.makeSound();
    std::cout << std::endl;

    WrongAnimal wa3(wa1);
    std::cout << "Type-> " << wa3.getType() << std::endl;
    std::cout << "Sound-> ";
    wa3.makeSound();

    std::cout << GREY "\n<<<[TEST WRONGCAT]>>>\n" R << std::endl;
    WrongCat wc1;
    std::cout << "Type-> " << wc1.getType() << std::endl;
    std::cout << "Sound-> ";
    wc1.makeSound();
    std::cout << std::endl;

    WrongCat wc2 = wc1;
    std::cout << "Type-> " << wc2.getType() << std::endl;
    std::cout << "Sound-> ";
    wc2.makeSound();
    std::cout << std::endl;

    WrongCat wc3(wc1);
    std::cout << "Type-> " << wc3.getType() << std::endl;
    std::cout << "Sound-> ";
    wc3.makeSound();
    std::cout << std::endl;
	
	return 0;
}
    