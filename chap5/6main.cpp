#include <iostream>
using namespace std;

char& find(char a[], char c, bool& success)
{
	int i;
	
	for (i = 0; a[i] != NULL; i++)
	{
		if (a[i] == c)
		{
			success = true;
			return a[i];
		}
	}
	success = false;
	return a[i];
}

int main()
{
	char s[] = "Mike";
	bool b = false;

	char& loc = find(s, 'M', b); //����

	if (b == false) {
		cout << "M�� �߰��� �� ����." << endl;
		return 0;
	}
	loc = 'm'; //������ M�� m���� ��ü 

	cout << s << endl;

	return 0;
}