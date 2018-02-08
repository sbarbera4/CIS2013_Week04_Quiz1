#include <iostream>
using namespace std;

int main() 
{
	int num1 = 1;

	while (num1 < 2001) 
	{
		if ((num1 % 50 == 0) && (num1 % 33 == 0)) 
		{
			cout << num1 << " FOO BAR " << endl;
			++num1;
		}
		else if (num1 % 50 == 0)
		{
			cout << num1 << " FOO " << endl;
			++num1;
		}
		else if (num1 % 33 == 0)
		{
			cout << num1 << " BAR " << endl;
			++num1;

		}
		else
		{
			cout << num1 << endl;
			++num1;
		}


	}

	return 0;

}