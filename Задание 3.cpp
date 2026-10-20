#include <iostream>
#include <string>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;

    string s = to_string(x);

    for (int step = 1; step < n; step++) {
        string next = "";
        int i = 0;
        while (i < s.length()) {
            char c = s[i];
            int cnt = 1;
            while (i + 1 < s.length() && s[i + 1] == c) {
                cnt++;
                i++;
            }
            next = next + to_string(cnt) + c;
            i++;
        }
        s = next;
    }

    cout << s << endl;

    return 0;
}