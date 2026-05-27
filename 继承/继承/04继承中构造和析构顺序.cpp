//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base的构造函数调用" << endl;
//	}
//	~Base()
//	{
//		cout << "Base的析构函数调用" << endl;
//	}
//};
//
//class Son : public Base
//{
//public:
//	Son()
//	{
//		cout << "Son的构造函数调用" << endl;
//	}
//	~Son()
//	{
//		cout << "Son的析构函数调用" << endl;
//	}
//};
//
//void test01()
//{
//	Son s;
//}
//
//int main()
//{
//	//构造函数调用顺序：先调用父类的构造函数，再调用子类的构造函数
//	test01();
//
//	system("pause");
//	return 0;
//}