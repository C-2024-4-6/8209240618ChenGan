#include<iostream>
using namespace std;
int main()
{
	float F = 0;
	float C = 0;
	cout << "请输入华氏温度：";
	cin >> F;
	C = (F - 32) * 5 / 9;
	cout << "摄氏温度是："<<C << endl;
	printf("%.2f\n", C);
	return 0;
}