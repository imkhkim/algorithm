#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int input[10];
int num[10];
int chk[10];

void func(int idx) {
    if (idx == M) {
        for (int i = 0; i < M; ++i) {
            cout << num[i] << ' ';
        }    
        cout << '\n';
        return;
    }

    int prev = 0;

    for (int i = 0; i < N; ++i) {
        if (chk[i]) continue;
        if (prev == input[i]) continue;

        num[idx] = input[i];
        prev = num[idx];
        chk[i] = true;
        func(idx + 1);
        chk[i] = false;
    }
}

int main(int argc, char **argv) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        cin >> input[i];
    }

    sort(input, input + N);

    func(0);

    return 0;
}
