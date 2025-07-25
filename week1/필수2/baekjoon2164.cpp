//카드2 - 2164(Silver4)
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int N;cin>>N;

    queue<int> q;
    //1~N까지 큐에 넣기
    for(int i=1;i<=N;i++) {
        q.push(i);
    }

    while(q.size()>1) {
        q.pop();
        q.push(q.front());
        q.pop();
    }cout<<q.front()<<'\n';

    return 0;
}
