//윤년 - 2753(Bronze5)
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int y;
    cin>>y;
    if((y%4==0 && y%100!=0) || y%400==0) {
        cout<<"1"<<'\n';
    }else {
        cout<<"0"<<'\n';
    }

    return 0;
}
