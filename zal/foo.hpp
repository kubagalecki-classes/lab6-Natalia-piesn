#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());
    std::transform(people.begin(), people.end(), ret_v.rbegin(), [&](Human& a) {
        if (a.isMonster() == true) {
            return 'n';
        }
        else {
            return 'y';
        }
    });
    std::for_each(people.rbegin(), people.rend(), [&](Human& a){a.birthday();});
    return ret_v;
}