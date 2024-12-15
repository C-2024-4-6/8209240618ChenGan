#include<iostream>
using namespace std;
int main()
{
	int arr[10] = {};
	cout << "ÇëÊäÈë10¸öÊı£º";
	for (int n = 0; n < 10; n++)
	{
		cin >> arr[n];
	}
	cout << arr[0]<<"  ";
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0;arr[j]!=arr[i]&&j < i;)
		{
			j++;
			if (j == i - 1)
				cout << arr[i] << "  ";
		}
	}
}