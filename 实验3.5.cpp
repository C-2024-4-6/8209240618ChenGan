#include<iostream>
using namespace std;
unsigned long long peaches(unsigned int day) {
	if (day == 10)
	{
		return 1;
	}
	else
	{
		return(peaches(day + 1) + 1) * 2;
	}
}
int main()
{
	int sum = 0;
	int day = 1;
	sum = peaches(day);
	cout << "桃子总数为：" << sum << endl;
}