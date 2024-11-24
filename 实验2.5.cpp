#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	
	int letters = 0, spaces = 0, digits = 0, others = 0;
	char shifts = '\n';
	char c;
	
	cout << "请输入一段字符：" << endl;
	cin >> c;
	while (cin.get(c))
	{
		if (c == '\n')
			break;
		if (isalpha(c))
		{
			letters++;
		}
		if (isspace(c))
		{
			spaces++;
		}
		if (isdigit(c))
		{
			digits++;
		}

		else
		{
			others++;
		}
	}
		cout << "字母有：" << letters << "个" << endl;
		cout << "空格有："<<spaces<<"个" << endl;
		cout << "数字有："<<digits<<"个" << endl;
		cout << "其他字符有："<<others<<"个" << endl;
		return 0;
}