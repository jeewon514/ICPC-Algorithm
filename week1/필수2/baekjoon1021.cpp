//회전하는 큐 - 1021(Silver3)
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int N,M;cin>>N>>M;

    deque<int> dq;
    for(int i=1;i<=N;i++) {
        dq.push_back(i);
    }

    int total=0;
    while(M--) {
        int tmp;cin>>tmp;

        int idx = 0;
        for(auto it=dq.begin();it!=dq.end();it++,idx++) {
            if(*it==tmp) break;
        }

        if (idx <= dq.size()/2) {
            while (idx--) {
                dq.push_back(dq.front());
                dq.pop_front();
                total++;
            }
        }else {
            int cnt = dq.size()-idx;
            while (cnt--) {
                dq.push_front(dq.back());
                dq.pop_back();
                total++;
            }
        }

        // 맨 앞에서 제거
        dq.pop_front();
    }

    cout<<total<<'\n';
    return 0;

}
