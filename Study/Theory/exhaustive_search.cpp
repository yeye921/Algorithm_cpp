// 3주차: 완전탐색과 백트래킹 개념강의

// dfs할때 중요한 것
// => 함수가 재귀적으로 호출된다고 했을 때, 실행순서는 그 역순이다!

// 백준 14502 연구소 문제 => 코드 참고
// 어떤 프로세스로 풀어야 할까?
// 크게 3가지 로직 => 벽 세움 > 바이러스 퍼짐 > 안전영역 크기 세기
// 벽을 효율적으로 세울 수 

// 완전참색: 모든 경우의 수를 무식하게 탐색하는 것
// 완전탐색은 재귀로만 있는 것이 아니라 for문으로 무식하게 푸는 것도 완전탐색의 한 종류이다

// 백준 1436 영화감독 숌 문제 
// 아것도 n이 10000보다 작으니 무식하게 풀어도 되겠나라고 생각하면 됨
// 반복문을 이용한 완전탐색 문제
int n;
int main(){
    cin >> n;
    int i = 666;
    for(;; i++){
        if(to_string(i).find("666") != string::npos) n--;
        if(n == 0) break;
    }
    cout << i << "\n";
}