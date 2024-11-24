#include<iostream>
using namespace std;
int main()
{
	int k = 0;
	int i = k + 1;
	cout << i++ << endl;
	//引入k，并将I改成i
	int l = 1;
	cout << l++ << endl;
	//不能同时给一个变量多次初始化，将i改为l
	cout << "Welcome to C++" << endl;
	return 0;
}
