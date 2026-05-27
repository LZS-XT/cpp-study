#include<iostream>
using namespace  std;
int main4()
{
	//1.字符型变量创建方式
	char ch = 'A';
	cout << ch << endl;
	//2.字符型变量所占内存大小
	cout << "char所占：" << sizeof(char) << endl;

	//3.字符型变量常见错误
	//char ch2 = ""b";  双引号不行，要用单引号
	//char ch2 ='abcdfgr' ;//创建字符 型变量时候，单引号内只有一个字符

	
	//4.字符型变量对于ascII编码
	//a 97
	//A 65
	cout << (int)ch << endl;
	

	system("pause");
	return 0;
}