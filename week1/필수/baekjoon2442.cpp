//별찍기 - 2442(Bronze3)
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        //공백출력
        for (int j = 0; j < N-i; j++) {
            cout << ' ';
        }
        //별 출력
        for (int k = 0; k < 2*i -1; k++) {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}