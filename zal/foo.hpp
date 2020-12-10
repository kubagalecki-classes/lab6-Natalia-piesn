#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());
    transform(people.begin(), people.end(), ret_v.rbegin(), [&](Human& a) {
        if (a.isMonster() == true) {
            ret_v.emplace_back('n');
        }
        else {
            ret_v.emplace_back('y');
        }
    });
    for_each(people.rbegin(), people.rend(), [&](Human& a){a.birthday();});
    return ret_v;
}