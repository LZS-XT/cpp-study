//#include<iostream>
//using namespace std;
//
////继承方式：public、protected、private
//
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son1 : public Base1
//{
//public:
//	void func()
//	{
//		m_A = 100; //父类中public权限的成员，在子类中依然是public权限
//		m_B = 100; //父类中protected权限的成员，在子类中依然是protected权限
//		//m_C = 100; //父类中private权限的成员，在子类中无法访问
//	}
//};
//
//void test01()
//{
//	Son1 s;
//	s.m_A = 100; //父类中public权限的成员，在子类外部依然是public权限
//	//s.m_B = 100; //父类中protected权限的成员，在子类外部无法访问
//}
//
//class Base2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son2 : protected Base2
//{
//	public:
//	void func()
//	{
//		m_A = 100; //父类中public权限的成员，在子类中变成了protected权限
//		m_B = 100; //父类中protected权限的成员，在子类中依然是protected权限
//		//m_C = 100; //父类中private权限的成员，在子类中无法访问
//	}
//};
//
//void test02()
//{
//	Son2 s;
//	//s.m_A = 100; //保护权限，类外无法访问
//	//s.m_B = 100; //保护权限，类外无法访问
//}
//
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son3 : private Base3
//{
//	public:
//	void func()
//	{
//		m_A = 100; //父类中public权限的成员，在子类中变成了private权限
//		m_B = 100; //父类中protected权限的成员，在子类中变成了private权限
//		//m_C = 100; //父类中private权限的成员，在子类中无法访问
//	}
//};
//
//class GrandSon3 : public Son3
//{
//	public:
//	void func()
//	{
//		//m_A = 100; //父类中public权限的成员，在子类中变成了private权限，孙子类无法访问
//		//m_B = 100; //父类中protected权限的成员，在子类中变成了private权限，孙子类无法访问
//	}
//};
//
//void test03()
//{
//	Son3 s;
//	//s.m_A = 100; //私有权限，类外无法访问
//	//s.m_B = 100; //私有权限，类外无法访问
//}
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}