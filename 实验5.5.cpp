#include<iostream>
using namespace std;
class point
{
private:
	int x, y;
public:
	point(int X, int Y)
	{
		x = X, y = Y;
	}
	void setpoint(int i, int j)
	{
		x = i + x;
		y = j + y;
	}
	void display()
	{
		cout << "×ø±êÖµÎª£º" << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	point p1(60, 80);
	p1.setpoint(100, 500);
	p1.display();
}