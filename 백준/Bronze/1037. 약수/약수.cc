#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int cnt;    // cnt는 N의 진짜 약수의 개수
	cin >> cnt;

	int temp, min_value = 1000000, max_value = 2;    // 진짜 약수는 2보다 크거나 같고, 100만보다 작거나 같은 자연수
	for (int i = 0; i < cnt; i++) {
		cin >> temp;
		if (min_value > temp) min_value = temp;
		if (max_value < temp) max_value = temp;
	}

	cout << min_value * max_value << '\n';
	
	return 0;
}