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
    int N; cin >> N;
    vector<pair<int, int>>arr(N, pair<int, int>(0, 0));
    for (int i = 0; i < N; i++) cin >> arr[i].first >> arr[i].second;
    for (int i = 0; i < N; i++) {
        int lank = 1;
        for (int j = 0; j < N; j++) {
            if (i == j) continue;
            if (arr[i].first < arr[j].first && arr[i].second < arr[j].second) lank += 1;
        }
        cout << lank;
        if (i != N - 1) cout << ' ';
    }
    return 0;
}