//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	//this指针的本质是指针常量，不可改变指针指向
//	// Person *const this;//指针常量，指向不可改变
//	//const Person *const this;//指向不可改变，指针指向的内容也不可改变
//	//函数后面加const,为常函数，让this指针指向的内容不可改变
//	//1.常函数
//	void func() const //函数后面加const,为常函数，不能修改成员变量
//	{
//		//m_A = 100;//不能修改成员变量
//		m_B = 100; //可以修改
//		cout << "func调用了" << endl;
//	}
//	void func2()
//	{
//		m_A = 100;//可以修改
//		m_B = 100; //可以修改
//		cout << "func2调用了" << endl;
//	}
//
//	int m_A;
//	mutable int m_B;//mutable修饰的成员变量在常函数中也可以修改
//};
//
//void test01()
//{
//	//2.常对象，常对象的成员变量不能修改，常对象只能调用常函数
//	const Person p;
//	//p.func2();//常对象只能调用常函数
//	p.func();
//	cout << "p.m_B = " << p.m_B << endl;
//	
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}