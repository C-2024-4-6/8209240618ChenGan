#include<iostream>
#include<cstring>
using namespace std;
int parseHex(const char* const hexString)
{
	size_t size = strlen(hexString);
	int* s1 = new int[size];
	for (int i = 0; i < size; i++)
	{
		s1[i] = static_cast<int>(hexString[i])-55;
	}
	int sum=s1[0];
	for (int j = 1; j < size; j++)
	{
		sum += s1[j] * 16 * (10 ^ j);
	}
	return sum;
}
int main()
{
	char hexString[100];
	cout << "请输入以字符串形式表示的一个16进制数：";
	cin >> hexString;
	int sum = parseHex(hexString);
	cout << "转换后的10进制数为："<<sum<<endl;
	system("pause");
}