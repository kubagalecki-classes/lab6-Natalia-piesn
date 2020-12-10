#include <algorithm>
#include <experimental/random>
#include <iostream>
#include <random>
#include <vector>
using namespace std;

class greater_than
{
public:
    greater_than(int tres) : threshold(tres) {}
    bool operator()(int value) const { return value > threshold; }
    int  threshold;
};

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
    cout << count_if(v.begin(), v.end(), greater_than{7}) << endl;
}
