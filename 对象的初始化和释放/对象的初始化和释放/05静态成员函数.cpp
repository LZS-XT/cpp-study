#include<iostream>
using namespace std;

class Phone
{
public:
	static void func()
	{
		cout << "Phone的静态成员函数" << m_A <</*m_B <<*/endl; //静态成员函数只能访问静态成员变量，不能访问非静态成员变量

	}

	int static m_A;
	int m_B;
private:
	static void func2()
	{
		cout << "Phone的静态成员函数" << m_A <</*m_B <<*/endl; //静态成员函数只能访问静态成员变量，不能访问非静态成员变量

	}

};
int Phone::m_A = 1;

void test05()
{
	//通过对象访问
	Phone p;
	p.func(); 

	//通过类名访问
	Phone::func();
	//Phone::func2(); //静态成员函数是有访问权限的，不能私有的静态成员函数
}

int main()
{
	test05();

	system("pause");
	return 0;
}