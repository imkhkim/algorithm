#include <iostream>

using namespace std;

int N, M;
int num[10];
bool chk[10];

void func(int idx) {
    if (idx == M) {
        for (int i = 0; i < M; ++i) {
            cout << num[i] << ' ';
        }    
        cout << '\n';
        return;
    }

    for (int i = 1; i <= N; ++i) {
        if (chk[i]) continue;

        num[idx] = i;
        chk[i] = true;
        func(idx + 1);
        chk[i] = false;
    }
}

int main(int argc, char **argv) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;

    func(0);

    return 0;
}
