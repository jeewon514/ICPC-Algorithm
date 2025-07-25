//덱 - 10866(Silver4)
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int N;cin>>N;
    deque<int> dq;

    string cmd;

    while (N-->0) {
        cin>>cmd;

        if (cmd == "push_front") {
            int x;cin>>x;
            dq.push_front(x);
        }else if (cmd == "push_back") {
            int x;cin>>x;
            dq.push_back(x);
        }else if (cmd == "pop_front") {
            if (dq.empty()) cout<<"-1"<<'\n';
            else { // 출력하고 제거해야함 !!(덱의 가장 앞에 있는 수를 빼고, 그 수를 출력한다)
                cout<<dq.front()<<'\n';
                dq.pop_front();
            }
        }else if (cmd == "pop_back") {
            if (dq.empty()) cout<<"-1"<<'\n';
            else {
                cout<<dq.back()<<'\n';
                dq.pop_back();
            }
        }else if (cmd == "size") cout<<dq.size()<<'\n';
        else if (cmd == "empty") {
            if (dq.empty()) cout<<"1"<<'\n';
            else cout<<"0"<<'\n';
        }else if (cmd == "front") {
            if (dq.empty()) cout<<"-1"<<'\n';
            else cout<<dq.front()<<'\n';
        }else if (cmd == "back") {
            if (dq.empty()) cout<<"-1"<<'\n';
            else cout<<dq.back()<<'\n';
        }

    }

    return 0;
}