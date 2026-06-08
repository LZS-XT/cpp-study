//#include<iostream>
//using namespace std;
//
////1.如果函数模板和普通函数都可以实现，优先调用普通函数
//// 2.可以通过空模板参数列表来强制调用函数模板
////3.函数模板也可以发生重载
////4.如果函数模板可以产生更好的匹配, 优先调用函数模板
//void myprint(int a, int b)
//{
//	cout << "调用的普通函数" << endl;
//}
//
//template<class T>
//void myprint(T a, T b)
//{
//	cout << "调用的模板" << endl;
//}
//
//template<class T>
//void myprint(T a, T b, T c)
//{
//	cout << "调用的重载模板" << endl;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	//1.如果函数模板和普通函数都可以实现，优先调用普通函数
//	//myprint(a, b);
//
//	// 2.可以通过空模板参数列表来强制调用函数模板
//	//myprint<>(a, b);
//
//	//3.函数模板也可以发生重载
//	myprint(a, b, 10);
//
//	//4.如果函数模板可以产生更好的匹配, 优先调用函数模板
//	char c1 = 'a';
//	char c2 = 'b';
//	myprint(c1, c2);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}