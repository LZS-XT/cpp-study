//#include<iostream>
//using namespace std;
//
//template<typename T>//typename 可以替换为class
//void myswap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	myswap(a, b);//正确
//	 //1、自动审查时需要确定模板类型才可以用
//	//myswap(a, c);//错误
//
//	cout << "a = " << a << "\nb = " << b << endl;
//}
//
//// 2、当模板类型不能确定时，不能使用
//template<typename T>
//void func()
//{
//	cout << "func 功能调用" << endl;
//}
//
//
//int main()
//{
//
//	//test01();
//	// 2、当模板类型不能确定时，不能使用
//	//func();//不能用
//	func<int>();
//
//
//	system("pause");
//
//	return 0;
//}