//프린터 큐 - 1966(Silver3)
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int T;cin>>T;
    while(T--) {
        int N,M;cin>>N>>M;

        queue<pair<int,int>> q;
        priority_queue<int> pq;

        for(int i=0;i<N;i++) {
            int x;cin>>x;
            q.push({i,x}); //큐에 {index, priority}저장
            pq.push(x);  // 최대 힙에 중요도만 저장
        }

        int count=0;

        while(!q.empty()) {
            int inx1 = q.front().first; //현재문서 index
            int prior = q.front().second; //현재문서 중요도
            q.pop();

            if(prior==pq.top()) {
                pq.pop();
                count++;

                if (inx1 == M) {
                    cout<<count<<'\n';break;
                }
            }else
                q.push({inx1,prior}); // 중요도가 낮아서 다시 뒤로 보냄
        }
    }

    return 0;
}