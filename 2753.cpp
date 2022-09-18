#include <iostream>

using namespace std;

void cinout () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    cinout();
    int a;
    cin >> a;
    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0) cout << 1;
    else cout << 0;
    return 0;
}