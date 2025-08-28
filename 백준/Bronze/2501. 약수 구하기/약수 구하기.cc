// 약수 구하기 tip
// - 방법1 : 1부터 N까지 for문을 이용하여 약수를 구한다 ==> 시간복잡도는 O(N)
// - 방법2 : 1부터 루트N까지 for문을 이용하여 약수를 구한다 (약수는 짝으로 나옴) ==> 시간복잡도는 O(N)
// 방법1의 경우에는 오름차순으로 약수를 구할 수 있으나 방법2에 비해 시간복잡도가 큼
// 따라서, 방법2를 사용하며 vector를 이용하여 짝으로 나오는 약수들을 모두 넣고 sort()를 통해 정렬하면 해결 가능


// 1. 시간복잡도가 O(N)인 코드
#include <iostream>
using namespace std;
int main() {
	int N, K;    // 1 <= N <= 10000, 1 <= K <= N
	cin >> N >> K;

	int cnt = 0, res;
	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			res = i;
			cnt++;
		}
		if (cnt == K) {
			cout << res << '\n';
			break;
		}
	}
	if (cnt < K)
		cout << "0\n";
	
	return 0;
}


/* 2. 시간복잡도가 O(√N)인 코드
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, K;
	vector<int> divisors;    // divisor : 약수
	
	cin >> N >> K;
	for (int i = 1; i * i <= N; i++) {    // i값은 1부터 루트 N까지 반복
		if (N % i == 0) {
			divisors.push_back(i);
			if (i != N / i)    // 약수는 짝으로 존재하며, i값은 루트 N 이하의 자연수까지만 반복하므로 i값과 N/i값이 같지만 않으면 N/i값 또한 저장
				divisors.push_back(N / i);
		}
	}
	
	sort(divisors.begin(), divisors.end());

	if (K <= divisors.size())
		cout << divisors[K - 1] << '\n';
	else
		cout << "0\n";
	return 0;
}
*/