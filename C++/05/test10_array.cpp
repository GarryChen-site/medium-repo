#include <array>
#include <iostream>
#include <map>

#include "output_container.h"

using namespace std;

typedef array<char, 8> char8_t;

int main() {
    map<char8_t, int> mp;

    char8_t a{"hello"};
    mp[a] = 5;
    cout << mp << endl;
}