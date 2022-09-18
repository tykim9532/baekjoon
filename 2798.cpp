#include <iostream>
#include <vector>

using namespace std;

void cinout() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    cinout();
    int N, M; cin >> N >> M;
    vector<int>arr(N, 0);
    for (int i = 0; i < N; i++) cin >> arr[i];
    int result = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j == i) continue;
            for (int k = 0; k < N; k++) {
                if (k == i || k == j) continue;
                if (arr[i] + arr[j] + arr[k] <= M) 
                    result = result > (arr[i] + arr[j] + arr[k]) ? result : (arr[i] + arr[j] + arr[k]);
            }
        }
    }
    cout << result;
    return 0;
}