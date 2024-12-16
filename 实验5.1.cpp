#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:             // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void setTime(int H, int M, int S)
	{
		hour = H, minute = M, sec = S;
	}
	void showTime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1; //定义t1为Time类对象
	t1.showTime();
	t1.setTime(9,30,0);
	t1.showTime();
	return 0;
}