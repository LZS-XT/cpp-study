//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	int age;
//	Person(int age)
//	{
//		//age = age;//形参age覆盖了成员变量age
//		this->age = age;//this指针指向调用成员函数的对象
//	}
//	Person& add(Person& p)
//	{
//		age += p.age;
//		return *this;
//	}
//};
////1.形参和成员变量同名，成员变量被隐藏了，可以通过this指针访问成员变量
//void test01()
//{
//	Person p(18);
//	cout << p.age << endl;
//}
////2.返回*this指针，可以实现链式编程
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//	p2.add(p1).add(p1).add(p1).add(p1);
//	cout << p2.age << endl;
//}
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}