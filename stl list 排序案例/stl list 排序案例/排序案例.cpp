#include<iostream>
using namespace std;
#include<list>
#include<string>

class Person
{
public:
	Person(string name, int age, int height)
	{
		m_Name = name;
		m_Age = age;
		m_Height = height;
	}

	string m_Name;
	int m_Age;
	int m_Height;
};

bool mycompare(Person& p1, Person& p2)
{
	if (p1.m_Age == p2.m_Age)
	{
		return p1.m_Height > p2.m_Height;
	}
		return p1.m_Age < p2.m_Age;
	
}

void test01()
{
	Person p1("孙悟空", 1000, 160);
	Person p2("刘备", 30, 175);
	Person p3("关羽", 30, 180);
	Person p4("张飞", 30, 165);
	Person p5("孙尚香", 20, 165);
	Person p6("妲己", 50, 160);

	list<Person> l;
	l.push_back(p1);
	l.push_back(p2);
	l.push_back(p3);
	l.push_back(p4);
	l.push_back(p5);
	l.push_back(p6);

	cout << "排序前：" << endl;
	for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << "姓名： " << it->m_Name << " 年龄： " << it->m_Age << " 身高： " << it->m_Height << endl;
	}
	cout << "---------------------------------" << endl;
	cout << "排序后：" << endl;

	l.sort(mycompare);
	for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << "姓名： " << it->m_Name << " 年龄： " << it->m_Age << " 身高： " << it->m_Height << endl;
	}
}


int main()
{
	test01();

	system("pause");

	return 0;
}