//#include<iostream>
//using namespace std;
//
////抽象类：包含纯虚函数的类叫做抽象类
////纯虚函数：在虚函数的基础上使用=0进行修饰，叫做纯虚函数
////抽象类的特点：无法实例化对象，抽象类中可以有成员函数和成员变量，纯虚函数必须被子类重写，否则子类也是抽象类
//
//class Base
//{
//public:
//	virtual void func() = 0;//纯虚函数
//
//};
//
//class Son :public Base
//{
//public:
//	void func()
//	{
//		cout << "func函数被调用" << endl;
//	}
//};
//
//void test01()
//{
//	//Base b;//抽象类无法实例化对象
//	//new Base;//抽象类无法实例化对象
//	Base* b = new Son;//父类的指针指向子类对象
//	b->func();
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}