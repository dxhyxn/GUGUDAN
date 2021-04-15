#include <iostream>

using namespace std;

int main()
{
	cout << "gugudan 1~8" << endl;
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
			cout << i << "x" << j << " = " << i * j << " ";
		cout << endl;
	}
}