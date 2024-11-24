#include<iostream>
using namespace std;
int main() 
{
	float x, y;
	cout << "ÇëÊäÈëxµÄÖµ£º";
	cin >> x;
	
	if (0 < x&&x < 1)
	{
			y = 3 - x*2;
			cout << y << endl;
	}
	else if (x >= 1 && x < 5)
	{
		y = 2 / (4 * x) + 1;
		cout << y << endl;
	}
	else if(x>=5&&x<10)
	{
		y = x * x;
		cout << y<<endl;
	}
	return 0;
}