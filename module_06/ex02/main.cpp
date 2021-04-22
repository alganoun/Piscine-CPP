/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42lyon    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 16:09:20 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/22 18:51:30 by allanganoun      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base
{
public :
    virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate()
{
    srand(time(NULL));
    int random = rand() % 3;
    if (random == 0)
    {
        std::cout << "Launching a A object will you identify it ?" << std::endl;
        return (new A);
    }
    if (random == 1)
    {
        std::cout << "Launching a B object will you identify it ?" << std::endl;
        return (new B);
    }
    if (random == 2)
    {
        std::cout << "Launching a C object will you identify it ?" << std::endl;
        return (new C);
    }
    return (NULL);
}

void    identify_from_pointer(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Object is type A"<< std::endl;
    if (dynamic_cast<B*>(p))
        std::cout << "Object is type B"<< std::endl;
    if (dynamic_cast<C*>(p))
        std::cout << "Object is type C"<< std::endl;
}

void identify_from_reference(Base &p)
{
    if (dynamic_cast<A *>(&p))
        std::cout << "Object is type A"<< std::endl;
    if (dynamic_cast<B *>(&p))
        std::cout << "Object is type B"<< std::endl;
    if (dynamic_cast<C *>(&p))
        std::cout << "Object is type C"<< std::endl;
}

int main()
{
    Base *ptr = generate();
    Base &ref = *ptr;

    identify_from_pointer(ptr);
    identify_from_reference(ref);
    
    return (0);
}