//#include<iostream>
//using namespace std;
//#include<string>
//
////父类为类模板时，子类继承需要指明父类的模板数据类型
////若需要灵活数据类型，子类需要为类模板
//template <class T>
//class Base
//{
//public:
//	T a;
//};
//
//class Son1 : public Base<int>
//{
//
//};
////父类为类模板时，子类继承需要指明父类的模板数据类型
//void test01()
//{
//	Son1 s1;
//}
//
////若需要灵活数据类型，子类需要为类模板
//template <class T1,class T2>
//class Son2 : public Base<T1>
//{
//public:
//	Son2()
//	{
//		cout << typeid(T1).name() << "\n" << typeid(T2).name() << endl;
//	}
//
//	T2 b;
//};
//
//void test02()
//{
//	Son2 <char,int>s2;
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}