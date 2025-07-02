#include <functional>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <tuple>

#include "output_container.h"
using namespace std;

int main() {
    set<int> s{1, 1, 1, 2, 3, 4};
    cout << s << endl;

    multiset<int, greater<int>> ms{1, 1, 1, 2, 3, 4};
    cout << ms << endl;

    map<string, int> m{{"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}};
    cout << m << endl;
    m.insert({"four", 4});
    cout << m << endl;
    cout << "mp.find(\"four\") == mp.end(): " << (m.find("four") == m.end() ? "true" : "false")
         << endl;
    cout << "mp.find(\"five\") == mp.end(): " << (m.find("five") == m.end() ? "true" : "false")
         << endl;
    m["five"] = 5;
    cout << m << endl;

    multimap<string, int> mmp{{"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}};
    cout << mmp << endl;
    mmp.insert({"four", -4});
    cout << mmp << endl;

    cout << "m.find(\"four\")->second: " << m.find("four")->second << endl;
    cout << "m.lower_bound(\"four\")->second: " << m.lower_bound("four")->second << endl;
    cout << "(--m.upper_bound(\"four\")->second: " << (--m.upper_bound("four"))->second << endl;

    cout << "mmp.lower_bound(\"four\")->second: " << mmp.lower_bound("four")->second << endl;
    cout << "(--mmp.upper_bound(\"four\")->second: " << (--mmp.upper_bound("four"))->second << endl;

    multimap<string, int>::iterator lower, upper;
    std::tie(lower, upper) = mmp.equal_range("four");
    cout << "lower != upper: " << (lower != upper ? "true" : "false") << endl;
    cout << "lower->second: " << lower->second << endl;
    cout << "(--upper)->second: " << (--upper)->second << endl;

    vector<int> v1{1, 2, 3};

    try {
        v1.at(3);
    } catch (const out_of_range& e) {
        cerr << "Caught out_of_range exception: ";
        cerr << e.what() << endl;
    }
}