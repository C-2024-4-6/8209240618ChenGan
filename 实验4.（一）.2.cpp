#include<iostream>
using namespace std;
void swap(double &a, double &b)
{
	int temp = a;
	a = b;
	b = temp;
}
static void Change(double list[],int size)
{
	bool changed = true;
	while (changed)
	{
		changed = false;
		for (int j = 0; j <size-1; j++)
			if (list[j] > list[j + 1])
			{
				swap (list[j] ,list[j + 1]);
				changed = true;
			}
	} ;
}
void printf(const double list[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << list[i] << endl;
	}
}
int main()
{
	const int size = 10;
	double list[size];
	cout << "请输入10个不同数："<<endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> list[i];
	}
	Change(list,size );
	cout << "冒泡排序后：";
	printf(list, size);
}