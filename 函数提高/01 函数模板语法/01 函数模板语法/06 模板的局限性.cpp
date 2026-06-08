#include<iostream>
using namespace std;
#include<string>

class Person
{
public:
	Person(string name, int age)
	{
		m_name = name;
		m_age = age;
	}
	string m_name;
	int m_age;
};

template<class T>
bool mycompare(T& a,T& b)
{
	if (a == b)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

template<> bool mycompare(Person& p1, Person& p2)
{
	if (p1.m_age == p2.m_age && p1.m_name == p2.m_name)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void test01()
{
	int a = 10;
	int b = 10;
	bool ret = mycompare(a, b);
	if (ret)
	{
		cout << "a = b" << endl;
	}
	else
	{
		cout << "a != b" << endl;
	}
}

void test02()
{
	Person p1("张三", 10);
	Person p2 = p1;
	p2.m_name = "李四";
	bool ret = mycompare(p1, p2);
	if (ret)
	{
		cout << "p1 = p2" << endl;
	}
	else
	{
		cout << "p1 != p2" << endl;
	}
	
}

int main()
{
	test02();

	system("pause");
	return 0;
}