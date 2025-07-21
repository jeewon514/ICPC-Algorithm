//알고리즘 수업 - 24264(Bronze3)
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // n의 범위가 500,000까지 가능하니까 int는 25,000,000,000 이라서 범위를 초과함.
    long long n;
    cin>>n;
    cout<<n*n<<'\n'<<2<<'\n';

    return 0;
}


