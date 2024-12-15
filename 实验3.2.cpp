#include<iostream>
using namespace std;
static bool is_prime(int num)
{
	int n = 1, m = 0;
	int times = 0;
	for (; n < num + 1; n++)
	{
		if (num % n == 0)
		{
			m = n;
			times++;
		}		
	}
	if (times == 2)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int x = 0, y = 0;
	int time = 0;
		for (x; x <= 200; x++)
		{
			y = is_prime(x);
			if (y == 1)
			{

				cout << x << "\ ";
				time++;
			}
			if (time%10==0)
			{
				cout << "\n";
			}
		}
}
