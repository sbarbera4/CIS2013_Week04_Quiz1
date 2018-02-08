#include <iostream>
using namespace std;

int main() 
{
	int num1 = 1;
	int foos = 0;
	int bars = 0;

	while (num1 < 2001) 
	{
		if ((num1 % 50 == 0) && (num1 % 33 == 0)) 
		{
			cout << num1 << " FOO BAR " << endl;
			++num1;
			++foos;
			++bars;
		}
		else if (num1 % 50 == 0)
		{
			cout << num1 << " FOO " << endl;
			++num1;
			++foos;
		}
		else if (num1 % 33 == 0)
		{
			cout << num1 << " BAR " << endl;
			++num1;
			++bars;
		}
		else
		{
			cout << num1 << endl;
			++num1;
		}

		
	}

	cout << "there are " << foos << " FOO's" << endl;
	cout << "there are " << bars << " BAR's" << endl;

	return 0;

}