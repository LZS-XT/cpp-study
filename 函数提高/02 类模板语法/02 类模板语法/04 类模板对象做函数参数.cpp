//#include<iostream>
//#include<string>
//using namespace std;
//
//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name , T2 age):m_Name(name),m_Age(age){}
//	
//	void showPerson()
//		{
//			cout << "name is :" << m_Name << " age is :" << m_Age << endl;
//		}
//	T1 m_Name;
//	T2 m_Age;
//};
//
////1.指定类型对象
//void showPerson1(Person<string, int> &p)
//{
//	p.showPerson();
//}
//
//void test01()
//{
//	Person<string, int> p("孙悟空", 1000);
//	showPerson1(p);
//}
//
////2.参数模板化
//template<class T1, class T2>
//void showPerson2(Person<T1, T2>& p)
//{
//	p.showPerson();
//	cout << "T1的数据类型为： " << typeid(T1).name() << endl;
//	cout << "T2的数据类型为： " << typeid(T2).name() << endl;
//}
//
//void test02()
//{
//	Person<string, int> p("猪八戒", 1000);
//	showPerson2(p);
//}
//
////3.类模板化
//template<class T>
//void showPerson3(T& p)
//{
//	p.showPerson();
//}
//
//void test03()
//{
//	Person<string, int> p("唐僧", 1000);
//	showPerson3(p);
//}
//
//int main()
//{
//	//test01();
//	test02();
//	test03();
//
//	system("pause");
//
//	return 0;
//}