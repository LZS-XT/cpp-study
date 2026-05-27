#include<iostream>
using namespace std;

//标识符命名规则
//1.标识符不可以是关键字
//2.由字母数字下划线构成
//3。开头不能是数字
//4。区分大小写

int main()
{
	//1.标识符不可以是关键字
	//int int = 10;
	//2.由字母数字下划线构成
	int abc = 10;
	int _abc = 20;
	int _123abc = 30;
	//3。开头不能是数字
	//int 123abc = 40;

	//4。区分大小写
	int aaa = 100;
	//cout << AAA << endl; //AAA和aaa不是同一个名称

	//给变量取名，最好见名知意
	int num1 = 10;
	int num2 = 20;
	int sum = num1 + num2;
	cout << sum << endl;

	system("pause");
	return 0;
}