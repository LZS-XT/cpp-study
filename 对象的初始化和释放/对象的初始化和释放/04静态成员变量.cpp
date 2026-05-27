#include<iostream>
using namespace std;
// 静态成员变量
//1.多个对象共享同一份数据
//2.类内声明，类外初始化
//3.编译阶段分配内存，程序结束时释放内存

class Person04
{
public:
	static int m_A;

	//静态成员变量是有访问权限的
private:
	static int m_B;
};

// 类外初始化静态成员变量
int Person04::m_A = 1;
int Person04::m_B = 0;

void test04()
{
	//Person04 p1;
	//Person04 p2;
	//cout << p1.m_A << endl;
	//cout << p2.m_A << endl;
	//p2.m_A = 0;
	//cout << p1.m_A << endl;
	//两种访问方式
	//1.通过对象访问
	Person04 p;
	cout << p.m_A << endl;
	//2.通过类名访问
	cout << Person04::m_A << endl;
	//cout << Person04::m_B << endl; //静态成员变量是有访问权限的，不能通过类名访问私有的静态成员变量
}

int main04()
{
	test04();
	

	system("pause");
	return 0;
}