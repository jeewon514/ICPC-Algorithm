//큐 - 10845(Silver4)
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int N;cin>>N;

    queue<int> q;
    string cmd;

    while (N-->0) {
        cin>>cmd;

        if (cmd == "push") {
            int x;cin>>x;
            q.push(x);
        }else if (cmd == "pop") {
            if (q.empty()) cout<<"-1"<<'\n';
            else {
                cout<<q.front()<<'\n';
                q.pop();
            }
        }else if (cmd == "size") {
            cout<<q.size()<<'\n';
        }else if (cmd == "empty") {
            if (q.empty()) cout<<"1"<<'\n';
            else cout<<"0"<<'\n';
        }else if (cmd == "front") {
            if (q.empty()) cout<<"-1"<<'\n';
            else cout<<q.front()<<'\n';
        }else if (cmd == "back") {
            if (q.empty()) cout<<"-1"<<'\n';
            else cout<<q.back()<<'\n';
        }
    }

    return 0;
}