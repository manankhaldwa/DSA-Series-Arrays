#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 1; i <= 10; ++i) {
        if (i <= 5) {
            for (int j = 1; j <= i; ++j) {
                cout << j * 2;
            }
        } else {
            for (int j = 0; j <= 10 - i; ++j) {
                cout << 7 - j;
            }
        }
        cout << endl;
    }

    return 0;
}