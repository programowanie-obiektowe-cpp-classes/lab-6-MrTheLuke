#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

char uOperation(const Human& h)
{
    if (h.isMonster())
        return 'n';
    else
        return 'y';
}
std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());

    // Twoja implementacja tutaj
    std::for_each(people.begin(), people.end(), [](Human& h) { h.birthday(); });

    std::transform(people.rbegin(), people.rend(), retval.begin(), uOperation);

    return retval;
}