//친구 - 10864(Bronze2)
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N,M;
    cin>>N>>M;

    int adj[1001][101] = {0};  // 인접 행렬 초기화

    // M개의 친구 관계 입력
    for (int i = 0; i < M; i++) {
        int A,B;
        cin>>A>>B;
        adj[A][B] = 1;
        adj[B][A] = 1; // 친구 관계는 양방향
    }

    // 각 사람의 친구 수 출력
    for (int i = 1; i <= N; i++) {
        int count = 0;
        for (int j = 1; j <= N; j++) {
            if (adj[i][j] == 1) count++;
        }
        cout << i << " " << count << '\n';  // 사람 번호와 친구 수 같이 출력
    }

    return 0;
}
