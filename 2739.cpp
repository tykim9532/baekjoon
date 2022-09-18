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
    for (int i = 1; i < 10; i++) cout << a << " * " << i << " = " << a * i << "\n";
    return 0;
}