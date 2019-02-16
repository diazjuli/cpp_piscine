/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 22:15:06 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/30 22:31:48 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
	Array<int> a(5);
    Array<float> b(5);

    for (int i = 0; i < 5; i++) {
        a[i] = i + 0.5;
        b[i] = static_cast<float>(i) + .5;
    }
    for (size_t i = 0; i < a.size(); i++) {
        std::cout << a[i] << std::endl;
    }
    for (size_t i = 0; i < b.size(); i++) {
        std::cout << b[i] << std::endl;
    }

    try {
        std::cout << a[5] << std::endl;
    }
    catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }
	   
    try {
        Array<std::string> c;
        std::cout << c[0] << std::endl;
    }
    catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }

        

	return 0;
}