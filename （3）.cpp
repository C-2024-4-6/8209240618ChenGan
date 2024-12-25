#include<iostream>
using namespace std;

void strChange(int* s, const int num)
{
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (s[j] > s[i])
			{
				int temp = s[j];
				s[j] = s[i];
				s[i] = temp;
			}
		}
	}
	for (int i = 0; i < num; i++)
	{
		cout << s[i]<<" ";
	}
}
int main()
{
	int num;
	cout << "请输入数组的元素个数：";
	cin >> num;
	int* s = new int[num];
	cout << "请输入数组的元素：";
	for (int i = 0; i < num; i++)
	{
		cin >> s[i];
	}
	strChange(s, num);
	delete[] s;
}