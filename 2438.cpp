#include <iostream>

using namespace std;

void cinout() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    cinout();
    int a; cin >> a;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= i; j++) cout << "*";
        cout << "\n";
    }
    return 0;
}