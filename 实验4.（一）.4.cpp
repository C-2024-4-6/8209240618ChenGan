#include<iostream>
using namespace std;
void change(int a = 0, int b = 0)
{
	int temp = a;
	a = b;
	b = temp;
}
void merge( int size1,const int list1[], int size2, const int list2[],int size3, int list3[])
{
	size1 < 80;
	size2 < 80;
	list1[size1];
	list2[size2];
	size3 = size1 + size2;
	list3[size3];
	for (int i = size1; i <= size3-1; i++)
	{
		int o = 0;
		list3[i] = list2[o];
		o++;
	}
	while (change)
	{
		for (int n = 0; n < size3 - 2; n++)
		{
			if (list3[n] > list3[n + 1])
				change(list3[n], list3[n + 1]);
		}
	}
}
void print( int size3, int list3[])
{
	for (int i = 0; i < size3 - 1; i++)
	{
		cout << list3[i] << " ";
	}
}
int main()
{
	int size1=0, int size2=0, int size3=0;
	int m; int n;
	cout << "请输入size1：";
	cin>>m;
	cout << "请输入size2：";
	cin >> n;
	size1 = m, size2 = n;
	int* list1 = new int[m];  
	int* list2 = new int[n];
	cout << "请输入数组1：";
	for (int i = 0; i <size1; i++)
	{
		cin >> list1[i];
	}
	cout << "请输入数组2：";
	for (int j = 0; j < size2; j++)
	{
		cin >> list2[j];
	}
	int* list3 = new int[size3];
	merge(size1, list1, size2, list2, size3, list3);
	print(size3, list3);
}