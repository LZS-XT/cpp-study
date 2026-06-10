//#include<iostream>
//using namespace std;
//#include<string>
//
//template <class T1, class T2>
//class Person;
//
//template <class T1, class T2>
//void showPerson2(Person<T1, T2>& p)
//{
//	cout << p.m_Name << "\t" << p.m_Age << endl;
//}
//
//template <class T1, class T2>
//class Person
//{
//	friend void showPerson1(Person<T1,T2> & p)
//	{
//		cout << p.m_Name << "\t" << p.m_Age << endl;
//	}
//
//	friend void showPerson2<>(Person<T1, T2>& p);
//public:
//	Person(T1 name,T2 age):m_Name(name),m_Age(age){}
//
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//
//
////类内实现全局函数
//void test01()
//{
//	Person p("Tom", 18);
//	showPerson1(p);
//}
//
//void test02()
//{
//	Person p("Tom", 18);
//	showPerson2(p);
//}
//
//int main()
//{
//	//test01();
//
//	test02();
//
//	system("pause");
//
//	return 0;
//}