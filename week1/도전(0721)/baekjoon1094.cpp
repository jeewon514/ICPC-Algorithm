//막대기 - 1094(Silver5)
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int X;
    cin>>X;

    //핵심 아이디어: X를 2진수로 바꿔서, 1의 개수를 세기
    //ex. 23 = 10111(2진수) -> 1이 4개 -> 막대 4개 필요
    //이유: 자른 막대기들은 항상 2의 거듭제곱 길이 -> 조합해서 만들 수 있는 모든 길이는 비트 단위로 표현 가능

    //실전 팁: '절반씩 자른다', '2의 배수', '2의 거듭제곱' -> 이진수, 비트, 2의 거듭제곱
    int cnt = 0;
    while(X > 0) {
        if(X % 2 == 1) {
            cnt++;          // 1비트의 개수 세기
        }X /= 2;
    }

    cout<<cnt<<'\n';
    return 0;
}