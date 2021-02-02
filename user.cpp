#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> a;
    while (true) {
        int x;
        cin >> x;
        if (x == 0) break;
        a.push_back(x);
    }
    int ans = 0;
    int n = a.size();
    for (int i=0; i<n; i++) {
        ans += a[i];
        cout << ans << endl;
    }
    return 0;
}
