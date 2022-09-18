#include <iostream>

using namespace std;

void cinout() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    cinout();
    int x, y;
    cin >> x >> y;
    if (x > 0 && y > 0) cout << 1;
    else if (x > 0 && y < 0) cout << 4;
    else if (x < 0 && y < 0) cout << 3;
    else if (x < 0 && y > 0) cout << 2;
    return 0;
}