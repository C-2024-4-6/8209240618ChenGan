#include<iostream>
using namespace std;

class Grade
{
private:
	int no,score;
public:
	Grade(int n, int s)
	{
		no = n;
		score = s;
	}
	friend int Max(Grade* s1, Grade* s2, Grade* s3, Grade* s4, Grade* s5);
};
int Max(Grade*s1, Grade* s2, Grade* s3, Grade* s4, Grade* s5)
{
	int maxScore = s1->score;
	maxScore = (maxScore > s2->score) ? maxScore : s2->score;
	maxScore = (maxScore > s3->score) ? maxScore : s3->score;
	maxScore = (maxScore > s4->score) ? maxScore : s4->score;
	maxScore = (maxScore > s5->score) ? maxScore : s5->score;
	return maxScore;
};
int main()
{
	Grade stu[5] = {Grade(2401,90),
					Grade(2402,87),
					Grade(2403,95),
					Grade(2404,85),
					Grade(2405,99)};
	Grade* s1 = &stu[0];
	Grade* s2 = &stu[1];
	Grade* s3 = &stu[2];
	Grade* s4 = &stu[3];
	Grade* s5 = &stu[4];
	int maxScore = Max(s1, s2, s3, s4, s5);
	cout << "最高成绩的学生学号为：";
	if (maxScore == 90)
		cout << "2401";
	if (maxScore == 87)
		cout << "2402";
	if (maxScore == 95)
		cout << "2403";
	if (maxScore == 85)
		cout << "2404";
	if (maxScore ==99)
		cout << "2405";
}