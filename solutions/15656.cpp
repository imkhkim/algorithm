#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int input[10];
int num[10];

void func(int idx) {
    if (idx == M) {
        for (int i = 0; i < M; ++i) {
            cout << num[i] << ' ';
        }    
        cout << '\n';
        return;
    }

    for (int i = 0; i < N; ++i) {
        num[idx] = input[i];
        func(idx + 1);
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
