//반전 요세푸스- 20301(Silver3)
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int N,K,M; cin>>N>>K>>M;
    //양방향 큐(앞뒤로 회전 가능)
    deque<int> dq;
    //1~N까지 deque에 넣음
    for(int i=1;i<=N;i++) dq.push_back(i);
    //true: 시계 방향, false: 반시계 방향
    bool forward = true;
    int cnt = 0; // 제거한 사람 수 카운트

    // 사람 수가 1명 남을 때까지 반복
    while(dq.size()>1) {
        if (forward) {
            // 시계 방향: 앞에서 K-1번 회전
            for (int i=0;i<K-1;i++) {
                dq.push_back(dq.front());// 앞 사람을 뒤로 보냄
                dq.pop_front();// 앞 사람 제거
            }
            // K번째 사람 제거 및 출력
            cout<<dq.front()<<'\n';
            dq.pop_front();
        }else {
            // 반시계 방향: 뒤에서 K-1번 회전
            for (int i=0;i<K-1;i++) {
                dq.push_front(dq.back());// 뒤 사람을 앞으로 보냄
                dq.pop_back();// 뒤 사람 제거
            }
            // K번째 사람 제거 및 출력 (반시계 방향은 back이 제거 대상)
            cout << dq.back() <<'\n';
            dq.pop_back();
        }
        cnt++; // 제거된 사람 수 증가

        // M번째 제거되었을 경우 방향 반전
        if (cnt==M) {
            forward = !forward;  // 방향 반전
            cnt = 0;       // 카운터 초기화
        }
    }

    // 마지막 남은 한 사람 출력
    cout<<dq.front()<<'\n';

    return 0;
}