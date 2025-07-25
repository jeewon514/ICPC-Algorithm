//스택 - 10828(Silver4)
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int N;cin>>N;

    stack <int> s;
    string cmd;

    while(N-- > 0) {
        cin>>cmd;

        if(cmd == "push") {
            int x;cin>>x;
            s.push(x);
        }else if(cmd == "pop") {
            if(s.empty()) cout<<"-1"<<'\n';
            else {
                cout<<s.top()<<'\n';
                s.pop();
            }
        }else if(cmd == "size") {
            cout<<s.size()<<'\n';
        }else if(cmd == "empty") {
            if(s.empty()) cout<<"1"<<'\n';
            else cout<<"0"<<'\n';
        }else if(cmd == "top") {
            if(s.empty()) cout<<"-1"<<'\n';
            else cout<<s.top()<<'\n';
        }

    }

    return 0;
}

