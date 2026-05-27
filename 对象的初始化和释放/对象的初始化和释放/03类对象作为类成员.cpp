#include <iostream>
using namespace std;
#include <string>

class Phone
{
public:

	Phone(string name) :Phone_name(name)
	{
		cout << "Phone的构造函数" << endl;
	}

	~Phone()
	{
		cout << "Phone的析构函数" << endl;
	}
	string Phone_name;

};

class Person03
{
public:
	//Phone P = pn //隐式转换法
	Person03(string name, string pn) :name(name), P(pn)
	{
		cout << "Person的构造函数" << endl;
	}

	~Person03()
	{
		cout << "Person的析构函数" << endl;
	}

	Phone P;
	string name;

};

void test03()
{
	Person03 p1("张三", "华为");
	cout << p1.name << "的手机是" << p1.P.Phone_name << endl;
}


int main03()
{
	test03();


	system("pause");
	return 0;
}