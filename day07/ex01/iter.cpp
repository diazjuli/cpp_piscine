/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 19:50:07 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/30 19:50:09 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>
void iter(T *arr, size_t len, void (*func)(T const &)) {
    for (size_t i = 0; i < len && arr; i++) {
        func(arr[i]);
    }
}

template <typename T>
void printAny(T const & a) {
    std::cout << a << std::endl;
}

int main() {
    int arrInt[10] = {5, 7, 3, 3, 5, 3, 8, 7, 6, 4};
    iter(arrInt, (size_t)10, printAny);
    std::cout << std::endl;

    std::string arrStr[5] = {"if you're", "reading this", "you're", "an", "idiot"};
    iter(arrStr, (size_t)5, printAny);

    std::cout << std::endl;
    bool boolArr[3] = {true, false, false};
    iter(boolArr, (size_t)3, printAny);
    return 0;
}
