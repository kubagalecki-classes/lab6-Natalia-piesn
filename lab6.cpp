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
        v.push_back(std::experimental::randint(0, 10));
    }
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
