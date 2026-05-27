#include<iostream>
using namespace std;

int main2()

{
	//取模运算本质 就是取余数
	int a1 = 10;
	int b1 = 3;

	cout << a1 % b1 << endl; //1 取模运算符，取余数


	int a2 = 10;
	int b2 = 20;
	cout << a2 % b2 << endl; //10 10除以20 商0 余10

	int a3 = 10;
	int b3 = 0;
	//cout << a3 % b3 << endl; //错误！ 取模运算时，除数不能为0，运行时报错

	//两个小数不能取模
	double d1 = 3.14;
	double d2 = 1.1;
	//cout << d1 % d2 << endl;


	system("pause");
	return 0;
}