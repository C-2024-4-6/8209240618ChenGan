#include<iostream>
using namespace std;
class cuboid
{
private:
	int length;
	int width;
	int height;
	int volumn;
public:
		void set(int l, int w, int h)
		{
			length = l, width = w, height = h;
		}
		void compute()
		{
			volumn = length * width * height;
		}
		void showVolumn()
		{
			cout << "该长方体的体积为：" << volumn << endl;
		}
};
int main()
{
	cuboid c1;
	cuboid c2;
	cuboid c3;
	c1.set(1, 2, 3);
	c1.compute();
	c1.showVolumn();
	c2.set(4, 5, 6);
	c2.compute();
	c2.showVolumn();
	c3.set(66, 99,88);
	c3.compute();
	c3.showVolumn();
}