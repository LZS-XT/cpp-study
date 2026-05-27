//#include<iostream>
//using namespace std;
//
//class Base
//{
//	public:
//		Base()
//		{
//			m_A = 100;
//		}
//		void func()
//		{
//			cout << " Base的成员函数调用" << endl;
//		}
//		void func(int a)
//		{
//			cout << " Base的成员函数func(int a)调用" << endl;
//		}
//
//		int m_A;
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//	void func()
//	{
//		cout << " Son的成员函数调用" << endl;
//	}
//	int m_A;
//};
////同名成员属性
//void test01()
//{
//	Son s;
//	cout << "Son 中 m_A = " << s.m_A << endl;
//	cout << "Base 中 m_A = " << s.Base::m_A << endl;
//}
////同名成员函数,当子类和父类有同名成员函数时，不加作用域直接调用会隐藏掉父类所有重名成员函数
//void test02()
//{
//	Son s;
//	s.func();
//	s.Base::func(1);
//	
//}
//
//int main()
//{
//	//test01();
//	test02();
//	
//	system("pause");
//	return 0;
//}