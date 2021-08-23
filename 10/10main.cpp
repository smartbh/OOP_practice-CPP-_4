#include <iostream>
#include <string>
using namespace std;

class Buffer {
private:
	string text;
public:
	Buffer(string text) {
		this->text = text;
	}
	void add(string next) {
		text += next; //text�� next ���ڿ� �����̱�
	}

	void print() {
		cout << text << endl;
	}

};


Buffer& append(Buffer& buf, char *a) {
	int i;

	buf.add(a);
	return buf;

}


int main()
{
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys"); //buf ���ڿ��� "Guys" ������
	temp.print(); //HelloGuys ���
	buf.print(); //HelloGuys ���


	return 0;
}