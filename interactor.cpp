#include "interactor.hpp"
#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Interactor inter(argc, argv);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
        assert(a[i] > 0);
    }
    for (int i=0; i<n; i++) {
        inter.stdin << a[i] << endl;
    }
    inter.stdin << 0 << endl;
    int sum = 0;
    for (int i=0; i<n; i++) {
        sum += a[i];
        int usum;
        inter.stdout >> usum;
        inter.check(sum == usum);
    }
    cout << "ac" << endl;
    return inter.wait();
}
