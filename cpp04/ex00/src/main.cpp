/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:07:03 by gude-cas          #+#    #+#             */
/*   Updated: 2024/04/15 14:24:23 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/Colors.hpp"

int main(void) 
{
    std::cout << GREY "\n<<<[TEST POLYMORPHISM]>>>\n" R << std::endl;

    const Animal *a = new Animal();
    const Animal *d = new Dog();
    const Animal *c = new Cat();
    const WrongAnimal *wa = new WrongAnimal();
    const WrongAnimal *wc = new WrongCat();
    
    std::cout << a->getType() << std::endl;
    std::cout << d->getType() << std::endl;
    std::cout << c->getType() << std::endl;
    std::cout << wa->getType() << std::endl;
    std::cout << wc->getType() << std::endl;
    
    a->makeSound();
    d->makeSound();
    c->makeSound();
    wa->makeSound();
    wc->makeSound();
    
    delete a;
    delete d;
    delete c;
    delete wa;
    delete wc;

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
