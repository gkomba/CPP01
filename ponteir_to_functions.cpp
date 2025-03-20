/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ponteir_to_functions.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:05:49 by gkomba            #+#    #+#             */
/*   Updated: 2025/03/20 12:42:10 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void    sayHello(void)
{
    std::cout << "Hello World!!" << std::endl;
    return ;
}

void    sayHelloTo(std::string name)
{
    std::cout << "Hello " << name << std::endl;
    return ;
}

int add(int x, int y)
{
    return(x + y);
}

int sub(int a, int b)
{
    return(a - b);
}

int fator(int (*func)(int, int), int (*funct)(int, int), int a, int b)
{
    int     sub;
    int     add;
    
    sub = (*func)(a, b);
    add = (*funct)(b, a);
    return(sub * add);
}

int main(void)
{
    void    (*ptr_sayHello)() = sayHello;
    void    (*ptr_sayHelloTo)(std::string) = sayHelloTo;
    int     (*ptr_add)(int, int) = add;
    int     (*ptr_sub)(int, int) = sub;
    int     (*ptr_mult)(int (*)(int, int), int (*)(int, int), int, int) = fator;
    std::cout << "Resultado: " << ptr_mult(ptr_add, ptr_sub, 18, 2) << std::endl;
    std::cout << "Resultado: " << (*ptr_mult)(ptr_add, ptr_sub, 18, 2) << std::endl;
    return (0);
}