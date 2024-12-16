class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void set_value(int Num,const char Name[20], char Sex);
private:
	int num;
	char name[20];
	char sex;
};