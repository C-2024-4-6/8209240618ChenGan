#include<iostream>
using namespace std;
int main()
{
	float ch, num1, num2, sum;
	cout << "加法：1" << "\n" << "减法：2" << "\n" << "乘法：3" << "\n" << "除法：4" << "\n" << "百分化：5" << "\n" << "请选择运算方式所代表的数字：";
	cin >> ch;
	if (ch == 5)
	{
		cout << "请输入百分化的数字：";
			cin >> num1;
			sum = num1 * 100;
			cout << "结果是：" << sum <<"%"<< endl;
	}
	else if (ch != 5)
	{
		cout << "请输入做运算的两个数字：";
		cin >> num1 >> num2;
		if (ch == 1)
		{
			sum = num1 + num2;
			cout << "结果是：" << sum << endl;
		}
		else if (ch == 2)
		{
			sum = num1 - num2;
			cout << "结果是：" << sum << endl;
		}
		else if (ch == 3)
		{
			
			sum = num1 * num2;
			cout << "结果是：" << sum << endl;
		}
		else if (ch == 4)
		{
			if (num2 == 0)
			{
				cout << "错误，除数不能等于0" << endl;
			}
			else if (num2 != 0)
			{
				sum = num1 / num2;
				cout << "结果是：" << sum << endl;
			}
		}
	}
}