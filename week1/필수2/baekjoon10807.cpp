//개수 세기 - 10807(Bronze5)
#include <bits/stdc++.h>    //모든 헤더를 한 번에 포함하는 "편의용" 헤더
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int N;cin>>N;

    vector<int> arr(N);
    for(int i=0;i<N;i++) {
        cin>>arr[i];
    }

    int v;cin>>v;
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] == v) cnt++;
    }cout<<cnt<<'\n';

    return 0;
}
