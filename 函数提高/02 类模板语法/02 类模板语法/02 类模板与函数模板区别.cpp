//#include<iostream>
//#include<string>
//using namespace std;
//
////类模板的参数列表中可以有默认参数
//template <class NameType,class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		m_age = age;
//		m_name = name;
//	}
//
//	void showPerson()
//	{
//		cout << "name is :" << m_name << " age is :" << m_age << endl;
//	}
//
//
//	NameType m_name;
//	AgeType m_age;
//};
//
//void test01()
//{
//	Person<string> p1("孙悟空", 999);
//	p1.showPerson();
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}