#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());

    // Inkrementacja wieku dla ka¿dej osoby
    std::for_each(people.begin(), people.end(), [](Human& person) { person.birthday(); });

    // Wype³nianie wektora 'retval' zgodnie z warunkami
    std::transform(people.rbegin(), people.rend(), retval.begin(), [](const Human& person) {
        return person.isMonster() ? 'y' : 'n';
    });

    return retval;
}
