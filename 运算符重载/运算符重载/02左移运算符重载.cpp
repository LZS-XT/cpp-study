//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p);
//	friend void test01();
//public:
//	// 成员函数重载左移运算符
//	//void operator<<(Person& p)
//	//{
//	//	cout << "p.m_A = " << p.m_A << endl;
//	//	cout << "p.m_B = " << p.m_B << endl;
//	//}//不可取，因为左边必须是p，没办法是cout，要求是cout <<p;，这种是p<<p;,所以只能全局函数重载
//private:
//	int m_A ;
//	int m_B ;
//
//};
//
//// 全局函数重载左移运算符
//ostream& operator<<(ostream &cout,Person& p)
//{
//	cout << "p.m_A = " << p.m_A ;
//	cout << " p.m_B = " << p.m_B ;
//	return cout;
//}
//
//void test01()
//{
//	Person p;
//	p.m_A = 10;
//	p.m_B = 10;
//	/*cout << "p.m_A = " << p.m_A << endl;
//	cout << "p.m_B = " << p.m_B << endl;*/
//	//p << p;
//	cout << p << "哈哈啊哈" << endl; // 等价于 operator<<(cout, p);//链式编程
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}