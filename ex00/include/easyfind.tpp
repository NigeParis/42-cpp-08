/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:42:15 by nrobinso          #+#    #+#             */
/*   Updated: 2025/04/23 11:29:37 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "easyfind.hpp"

template <typename T>
std::vector<int>::iterator easyfind(T &array, int value) {

    std::vector<int>::iterator it = std::find(array.begin(), array.end(), value);
    if (it != array.end())
        return it;
    throw std::runtime_error("does not exist in the array");
}