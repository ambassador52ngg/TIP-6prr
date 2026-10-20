#include <iostream>
using namespace std;

int main() {
    int N, M, W;
    cin >> N >> M;
    cin >> W;

    char a[35][35];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            a[i][j] = '0';
        }
    }

    for (int k = 0; k < W; k++) {
        int x, y;
        cin >> x >> y;
        a[x - 1][y - 1] = '*';
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (a[i][j] == '*') {
            } else {
                int s = 0;

                if (i > 0 && j > 0 && a[i-1][j-1] == '*') s = s + 1;
                if (i > 0 && a[i-1][j] == '*') s = s + 1;
                if (i > 0 && j < M-1 && a[i-1][j+1] == '*') s = s + 1;

                if (j > 0 && a[i][j-1] == '*') s = s + 1;
                if (j < M-1 && a[i][j+1] == '*') s = s + 1;

                if (i < N-1 && j > 0 && a[i+1][j-1] == '*') s = s + 1;
                if (i < N-1 && a[i+1][j] == '*') s = s + 1;
                if (i < N-1 && j < M-1 && a[i+1][j+1] == '*') s = s + 1;

                a[i][j] = '0' + s;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}