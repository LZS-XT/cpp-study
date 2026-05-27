//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	int m_age;
//	void func()
//	{
//		cout << "func调用了" << endl;//空指针可以调用成员函数
//	}
//	void func2()
//	{
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << "func2调用了,age = " <<this-> m_age << endl;//但是如果有this指针，就不能调用了
//	}
//};
//
//void test01()
//{
//	Person *p = NULL;
//	p->func();
//	p->func2();
//
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}