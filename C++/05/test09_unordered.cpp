#include <complex>
#include <iostream>
#include <unordered_map>
#include <unordered_set>

#include "output_container.h"

using namespace std;

template <typename T>
struct complex_hash {
    size_t operator()(const complex<T>& v) const noexcept {
        hash<T> h;
        return h(v.real()) + h(v.imag());
    }
};

int main() {
    unordered_set<int> us{3, 1, 4, 1, 5, 9, 2, 6, 5};
    cout << us << endl;

    unordered_map<complex<double>, double, complex_hash<double>> um{{{1.0, 1.0}, 1.4142},
                                                                    {{3.0, 4.0}, 5.0}};

    cout << um << endl;
}