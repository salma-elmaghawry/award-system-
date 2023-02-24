#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "enter the number you received \n";
	cin >> num;
	switch (num)
	{
	case 100:
	case 200:
		cout << "congratz for The iphone ";
		break;
	case 300:
		cout << "congratz for the ipad ";
		break;
	default:
		cout << "No award for this number ";
		break;
	}
}
