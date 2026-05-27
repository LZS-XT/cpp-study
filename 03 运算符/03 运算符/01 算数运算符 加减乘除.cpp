#include<iostream>
using namespace std;



int main1()
{
	//加减乘除
	int a1 = 10;
	int b1 = 3;
	cout << a1 + b1 << endl; //13
	cout << a1 - b1 << endl; //7
	cout << a1 * b1 << endl; //30
	cout << a1 / b1 << endl; //3两个整数相除 ，结果还是整数，取整数部分，舍弃小数部分

	int a2 = 10;
	int b2 = 20;
	cout << a2 / b2 << endl; //0

	int a3 = 10;
	int b3 = 0;
	//cout << a3 / b3 << endl; //错误！	除数不能为0，运行时报错	

	//两个小数可以相除吗？
	double d1 = 0.5;
	double d2 = 0.22;
	cout << d1 / d2 << endl;//运算的结果也可以是小数



	system("pause");
	return 0;
}