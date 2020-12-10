#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());
    auto                fun = [&ret_v](Human a) {
        a.birthday();
        if (a.isMonster() == true) {
            ret_v.emplace_back('n');
        }
        else {
            ret_v.emplace_back('y');
        }
    };
    for_each(people.rbegin(), people.rend(), fun);

    return ret_v;
}