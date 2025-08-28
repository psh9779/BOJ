#include <iostream>
using namespace std;

// 도형의 안으로 굽어진 부분들을 피면 해당 도형을 감싸는 최소한의 크기의 정사각형이 됨
// 주어진 도형의 둘레는 해당 정사각형의 둘레와 동일함
int main() {
	long long n;    // n은 도형의 가장 아랫부분의 정사각형 개수이며, 1이상 10억 이하의 정수
	
	cin >> n;
	cout << 4 * n << '\n';    // n이 최댓값인 10억일 경우 4*n의 값은 40억이므로 int 범위를 넘기에 n을 long long형으로 선언
	
	return 0;
}