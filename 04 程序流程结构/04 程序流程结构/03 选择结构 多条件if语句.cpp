#include<iostream>
using namespace std;

int main3()
{
	//选择结构 多条件if语句
	//输入考试分数，如果分数大于600，输出考上一本大学
	//大于500，输出考上二本大学
	//大于400，输出考上三本大学
	//都没考上，输出未考上大学

	//1.用户输入分数
	int score = 0;
	cout << "请输入一个考试分数： " << endl;
	cin >> score;

	//2.提示用户输入的分数
	cout << "您输入的分数为： " << score << endl;

	//3.判断
	//如果大于600，输出考上一本大学	
	//如果大于500，输出考上二本大学
	//如果大于400，输出考上三本大学
	//如果都没考上，输出未考上大学
	if (score > 600)
	{
		cout << "恭喜您考上一本大学" << endl;
	}
	else if (score > 500)
	{
		cout << "恭喜您考上二本大学" << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜您考上三本大学" << endl;
	}
	else
	{
		cout << "您未考上大学" << endl;
	}



	system("pause");
	return 0;

}