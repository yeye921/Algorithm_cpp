// substr하고 대입해주는 작업 필요함, 저절로 안됨
// [1, 2..] 형태로 주어지는 배열을 어떻게 받을지가 포인트임 => 모르겠음..

// 문자열의 마지막 문자 삭제하는 법: str.pop_back(), str.erase(str.end() - 1), str = str.substr(0, str.size() - 1)
// 문자열 숫자를 숫자로 변환하는 법

// R: 배열의 있는 수의 순서를 뒤집음
// D: 첫번째 수를 버림 (배열이 비어있는데 D를 사용하면 에러남)

// 벡터의 몇번째 원소 제거하는법: ???
// reverse() 함수: 배열, 문자열 등의 요소들을 거꾸로 뒤집음
// => 시간 초과남...
#include <bits/stdc++.h>
using namespace std;
int t, n;
string p, arr;
vector<int> a;
vector<int> split(string input, string del){
    vector<int> ret;
    string token;
    long long pos = 0;
    while((pos = input.find(del)) != string::npos){
        token = input.substr(0, pos); // 문자열을 숫자로 변환
        ret.push_back(stoi(token));
        input.erase(0, pos + del.length());
    }
    ret.push_back(stoi(input));
    return ret;
}
int main(){
    cin >> t;
    while(t--){
        bool flag = 0;
        cin >> p;
        cin >> n;
        cin >> arr;

        // 문자열 내 문자 삭제
        arr = arr.substr(1, arr.size() - 2); // 맨 앞/뒤 문자 제거

        // m1) ","로 split함, m2) 입력받은 n이용해서 규칙 찾음 => 숫자가 몇자리일지 몰라서 안될 것 같음
        if(n == 0) flag = 1;
        else a = split(arr, ",");

        // 명령어 처리
        for(char c : p){
            if(c == 'R'){ // 배열 뒤집기
                reverse(a.begin(), a.end());
            }
            else if(c == 'D'){ // 배열의 첫번째 수 버리기
                if(!a.size()){
                    flag = 1;
                    break;
                }
                else a.erase(a.begin());
            }
        }
        if(flag) cout << "error\n";
        else {
            string str = "[";
            for(int i = 0; i < a.size(); i++){
                str += to_string(a[i]);
                if(i != a.size() - 1) str += ",";
            }
            str += "]";
            cout << str << "\n";
        }
    }
}