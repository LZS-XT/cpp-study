#include <iostream>
using namespace std;

// 浅拷贝和深拷贝
// 
// 浅拷贝：默认的拷贝构造函数和赋值运算符会进行浅拷贝，即直接复制对象的成员变量的值。
// 这对于基本数据类型来说是没有问题的，但对于指针类型来说，可能会导致多个对象指向同一块内存，从而引发内存泄漏或双重释放等问题。
// 深拷贝：深拷贝则是为每个对象分配独立的内存，并复制对象的成员变量的值。这样每个对象都有自己的内存空间，避免了浅拷贝带来的问题。

class Person
{
public:
	Person(int Age,int hei)
	{
		cout << "有参构造函数调用" << endl;
		age = Age;
		height = new int(hei);// 为指针成员变量分配内存
	}

	Person(const Person &p)
	{
		cout << "拷贝构造函数调用" << endl;
		age = p.age;
		//height = p.height; // 这里是浅拷贝，多个对象会指向同一块内存
		height = new int(*p.height); // 这里是深拷贝，为每个对象分配独立的内存，并复制值
	}

	~Person()
	{
		cout << "析构函数调用" << endl;
		if (height != nullptr)
		{
			delete height; // 释放内存
			height = nullptr; // 避免悬空指针
		}
	}

	int* height; // 这里是一个指针成员变量，如果使用默认的拷贝构造函数，会导致浅拷贝的问题
	int age;
};

void test01()
{
	Person p1(18,170);
	Person p2(p1);
	cout << "p1的年龄为：" << p1.age <<"身高为  "<< *p1.height << endl;
	cout << "p2的年龄为：" << p2.age << "身高为  " << *p2.height << endl;
}

int main01()
{
	test01();

	system("pause");
	return 0;
}