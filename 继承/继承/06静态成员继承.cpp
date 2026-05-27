//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	static int m_A;
//	static void func(int a)
//	{
//		cout << " Base的静态成员函数func(int a)调用" << endl;
//	}
//};
//
//int Base::m_A = 100;
//
//class Son :public Base
//{
//public:
//	static int m_A;
//	static void func()
//	{
//		cout << " Son的静态成员函数调用" << endl;
//	}
//};
//
//int Son::m_A = 200;
//
//void test01()
//{
//	cout << "通过对象访问静态成员" << endl;
//	Son s;
//	cout << "Son 中 m_A = " << s.m_A << endl;
//	cout << "Base 中 m_A = " << s.Base::m_A << endl;
//
//	cout << "通过类名访问静态成员" << endl;
//	cout << "Son 中 m_A = " << Son::m_A << endl;
//	cout << "Base 中 m_A = " << Son::Base::m_A << endl;
//}
//
//void test02()
//{
//	cout << "通过对象访问静态成员函数" << endl;
//	Son s;
//	s.func();
//	s.Base::func(10);
//	cout << "通过类名访问静态成员函数" << endl;
//	Son::func();
//	Son::Base::func(10);
//}
//
//int main()
//{
//	//test01();
//
//	test02();
//	system("pause");
//	return 0;
//}