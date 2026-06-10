//#include<iostream>
//using namespace std;
//
//class Person1
//{
//public:
//	void func1()
//	{
//		cout << "func1 调用" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void func2()
//	{
//		cout << "func2 调用" << endl;
//	}
//};
//
//template<class T>
//class MyClass
//{
//public:
//	void func1()
//	{
//		obj.func1();
//	}
//
//	void func2()
//	{
//		obj.func2();
//	}
//
//	T obj;
//};
//
//void test01()
//{
//	MyClass <Person1>m;
//	//m.func2();
//	m.func1();//类模板中成员函数是调用时才创建的
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}