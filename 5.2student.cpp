//student.cpp                     在此文件中进行函数的定义
#include <iostream>
#include"student.h"  
using namespace std;//不要漏写此行，否则编译通不过
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num <<endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}
void Student::set_value(int Num,const char Name[20], char Sex)
{
    num = Num,sex = Sex;
    for (int i = 0; i < 20; i++)
    {
        this->name[i] = Name[i];
    }
}