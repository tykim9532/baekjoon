#include <iostream>
#include <string>

using namespace std;

void cinout() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    cinout();
    int M; cin >> M;
    for (int i = 1, result = 0; i < 1000001; i++) {
        string str = to_string(i);
        int sum = i;
        for (int j = 0; j < str.length(); j++) sum += str[j] - 48;
        if (sum == M) {
            cout << sum;
            return 0;
        }
    }
    cout << 0;
    return 0;
}