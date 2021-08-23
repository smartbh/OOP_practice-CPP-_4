#include <iostream>
using namespace std;

class Accumulator {
private :
	int value;
public:
	Accumulator(int value) {
		this->value = value;
	}// �Ű����� value�� ��� value�� �ʱ�ȭ�Ѵ�.
	Accumulator& add(int n) {
		value += n;
		return *this;

	}// value�� n�� ���� ���� �����Ѵ�.
	int get() {
		return value;
	}// ������ �� value�� �����Ѵ�.
};



int main()
{
	Accumulator acc(10);
	acc.add(5).add(6).add(7); // acc�� value ����� 28�� �ȴ�.
	cout << acc.get() <<endl; // 28���

	return 0;
}