//  정렬할 데이터의 범위가 작을 때 아주 효율적으로 사용할 수 있는 "카운팅 정렬" 알고리즘을 이용해야하는 문제
// 입력 처리 + 출력 처리 = N + K(10000회)
// 따라서, 시간복잡도 = O(N+K)
#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[10001] = { 0 };    // 10000보다 작거나 같은 자연수를 N개 입력하므로 입력값의 범위만큼만 선언하여 0 초기화
	int N;
	cin >> N;

	int temp;
	for (int i = 0; i < N; i++) {    // 입력은 N회이며, 10000 이하의 자연수만 입력으로 함
		cin >> temp;
		arr[temp]++;
	}

	for (int cnt = 1; cnt < 10001; cnt++) {    // 정렬할 데이터의 범위 만큼만 반복하며 정렬하는 알고리즘
		while (arr[cnt]-- > 0) {    // arr[cnt]의 값 == "cnt를 반복해서 출력할 횟수"에 해당
			cout << cnt << '\n';
		}
	}
	return 0;
}




/* 원래 작성했던 코드
#include <iostream>
using namespace std;
// 시행착오 1 : 10000000 크기의 고정 배열을 선언하면 40MB이므로 스택 오버플로우 발생
// 지역 변수 배열은 스택 메모리에 잡히며, 스택은 보통 1 ~ 8 MB 정도밖에 안됨
// 따라서, 굳이 10000000 크기의 고정 크기 배열을 선언하겠다면 전역으로 선언할 것
int num[10000000];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	for (int cnt = 0; cnt < N; cnt++)
		cin >> num[cnt];

	// 시행착오 2 : 현재 코드에서 반복 횟수는 대략 N(N-1)/2인데, N은 최대 10000000이므로 5억이 훨씬 넘는 연산횟수 -> 시간 초과 발생함
	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			int temp = num[i];
			if (num[i] > num[j]) {
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}

	for (int cnt = 0; cnt < N; cnt++)
		cout << num[cnt] << '\n';

	return 0;
}
*/