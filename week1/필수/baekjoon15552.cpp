//빠른 A+B - 15552(Bronze4)
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T,A,B;
    cin>>T;
    for(int i=0;i<T;i++) {
        cin>>A>>B;
        cout<<A+B<<'\n';            //endl 하면 시간초과남
    }

    return 0;
}
