#include <iostream>
using namespace std;
/*
As an incentive to promote the program, the department has introduced a referral system
wherein individuals who refer other students to the Micromasters program receive a 10%
discount for each referred student on their own course registrations.
-> 프로그램을 홍보하기 위한 인센티브로, 학과에서는 추천시스템을 도입했으며,
그 추천 시스템 내에서 다른 학생을 추천하는 사람들은 자신의 수강 등록에 대해 추천 학생 1명당 10% 할인 혜택을 받게 된다.

With each referral, Mina’s list of discounts grows, -> 각 추천마다 미나의 할인 목록이 늘어난다.

given the number of students who are referred by Mina, how many courses can she enroll in for free?
-> 미나가 추천한 학생의 수가 주어질 때, 얼마나 많은 강의를 무료로 등록할 수 있는가?

무료로 강의 하나를 등록하려면 할인율은 100%가 되어야 하며, 이를 위해 10명을 추천해야 한다.
N명 추천 시, 할인율은 10*N%이며 무료로 등록할 수 있는 강의는 (10*N)/100개 이다.
*/
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;    // 0 <= n <= 1000
	cin >> n;

	cout << (10 * n) / 100 << '\n';

	return 0;
}