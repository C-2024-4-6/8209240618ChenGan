#include<iostream>
using namespace std;
int main()
{
	int x = 2;
	double sum=0;
	int day=0;
	int pingguo = 0;
	for (x;pingguo<100;x = x * 2)
	{
		for (int y=1; y <= x; y++)
		{
			sum +=0.8;
			pingguo++;
		}
		
		day++;
	}
	cout << "每天平均花钱" << (sum / day) << "元" << endl;
}