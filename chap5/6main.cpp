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

	char& loc = find(s, 'M', b); //참조

	if (b == false) {
		cout << "M을 발견할 수 없다." << endl;
		return 0;
	}
	loc = 'm'; //참조로 M을 m으로 교체 

	cout << s << endl;

	return 0;
}