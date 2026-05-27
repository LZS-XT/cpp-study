//#include<iostream>
//using namespace std;
//
//class Base1
//{
//public:
//	Base1()
//	{
//		m_A = 100;
//	}
//	int m_A;
//};
//
//class Base2
//{
//	public:
//	Base2()
//	{
//		m_A = 200;
//	}
//	int m_A;
//};
//
//class Son :public Base1, public Base2
//{
//	public:
//	Son()
//	{
//		m_A = 300;
//	}
//	int m_A;
//};
//
//void test01()
//{
//	Son s;
//	cout << "Son жа m_A = " << s.m_A << endl;
//	cout << "Base1 жа m_A = " << s.Base1::m_A << endl;
//	cout << "Base2 жа m_A = " << s.Base2::m_A << endl;
//	cout << "sizeof(Son) = " << sizeof(Son) << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}