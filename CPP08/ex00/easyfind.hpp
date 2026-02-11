/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 18:19:55 by zatais            #+#    #+#             */
/*   Updated: 2026/02/06 19:24:07 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <string>

template <typename T>

typename T::iterator easyfind(T &container, int val) {
  std::string t("Not Found!");
  typename T::iterator it = find(container.begin(), container.end(), val);
  if (it == container.end())
    throw t;
  return it;
}

#endif
