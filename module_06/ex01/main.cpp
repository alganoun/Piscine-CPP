/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanganoun <allanganoun@student.42lyon    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 19:25:54 by allanganoun       #+#    #+#             */
/*   Updated: 2021/04/22 21:16:41 by allanganoun      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct  s_data
{
    std::string s1;
    int n;
    std::string s2;
}               Data;

void    *serialize()
{
    srand(time(NULL));
    char *data = new char[20];
    char c;
    std::cout << "First string : ";
    for (int i = 0 ; i < 8 ; i++)
    {
        c = 0;
        while(!isdigit(c) && !isalpha(c))
            c = rand() % 128;
        std::cout << c;
        data[i] = c;
    }
    std::cout << std::endl;
    int num = rand();
    *reinterpret_cast<int *>(data + 8) = num;
    std::cout << "Int : " << num << std::endl;
    std::cout << "Second string : ";
    for (int i = 0 ; i < 8 ; i++)
    {
        c = 0;
        while(!isdigit(c) && !isalpha(c))
            c = rand() % 128;
        std::cout << c;
        data[i + 12] = c;
    }
    std::cout << std::endl;
    return (data);
}

Data *deserialize(void *raw)
{
    Data *data = new Data;
    data->s1 = std::string(static_cast<char *>(raw), 8);
    data->n = *reinterpret_cast<int *>(static_cast<char *>(raw) + 8);
    data->s2 = std::string(static_cast<char *>(raw) + 12, 8);
    
    return(data);   
}

int main()
{
    void *raw = serialize();
    std::cout << raw << std::endl;
    Data *d = deserialize(raw);
    std::cout << "DATA :"<< std::endl;
    std::cout << d->s1 << std::endl;
    std::cout << d->n << std::endl;
    std::cout << d->s2 << std::endl;
    return (0);
}