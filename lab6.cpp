#include <algorithm>
#include <experimental/random>
#include <iostream>
#include <random>
#include <vector>
using namespace std;

int main()
{
    vector< int > v;
    for (int i = 0; i < 7; i++) {
        v.push_back(std::experimental::randint(1, 10));
    }
    for (const int& e : v) {
        cout << e << " ";
    }
    cout << endl;
    std::sort(v.begin(), v.end());
    for (const int& e : v) {
        cout << e << " ";
    }
}
