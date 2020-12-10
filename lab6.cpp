#include "make_random_vector.hpp"
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#include "zal/include/Human.hpp"
#include <list>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > petl;
    auto                fun = [&petl](Human a) {
        a.birthday();
        if (a.isMonster() == true) {
            petl.push_back('n');
        }
        else {
            petl.push_back('y');
        }
    };
    for_each(people.rbegin(), people.rend(), fun);
    return {petl};
}

int main()
{}
/*
int main()
{
    vector v = make_random_vector(10, 0, 10);
    for (const int& e : v) {
        cout << e << " ";
    }
    cout << endl;
    sort(v.begin(), v.end(), greater< int >());
    for (const int& e : v) {
        cout << e << " ";
    }
    cout << endl;

    int tres;
    cin >> tres;
    auto threshold = [&](double x) { return x > tres; };
    cout << count_if(v.begin(), v.end(), threshold) << endl;
}
*/