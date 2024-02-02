#include<iostream>
using namespace std;

int main()
{
	// 1 найти факториал введенного числа!
	int a;
	cin >> a;
	int fact = 1;
	while (a > 0)
	{
		fact *= a;
		a--;
	}
	cout << fact << endl;

}