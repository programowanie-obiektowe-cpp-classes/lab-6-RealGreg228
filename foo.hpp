#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());

    // Twoja implementacja tutaj
    std::transform(people.rbegin(), people.rend(), retval.begin(),
                   [](Human& person) -> char {
                       person.birthday();
                       return person.isMonster() ? 'n' : 'y';
                   });

    return retval;
}
