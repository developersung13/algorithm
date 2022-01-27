#include <iostream> // 표준 입-출력 함수의 사용을 위해 iostream 라이브러리를 포함하는 문장
#include <string> // 문자열혈 데이터를 사용하기 위해 사용하는 라이브러리
using namespace std; // std라는 표준 입-출력 함수가 들어있는 이름공간을 대표로써 명시해주는 문장

int l, r;
string numStr;

int main(int argc, const char* argv[]) { // 메인 함수 선언
    ios_base::sync_with_stdio(false); // C언어와의 동기화를 false로 하여 속도를 증가시켜주는 문장
    cin.tie(0); // printf, scanf의 사용 대신 cin, cout함수만 사용하여 컴파일의 속도를 증가시켜주는 문장
    
    cin >> numStr;
    for (int k=0; k < numStr.length(); k++) {
        if (k < numStr.length() / 2) l += numStr[k] - '0';
        else r += numStr[k] - '0';
    } if (l == r) cout << "LUCKY";
    else cout << "READY";
    return 0;
}