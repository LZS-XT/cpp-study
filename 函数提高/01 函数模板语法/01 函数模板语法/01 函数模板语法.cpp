//#include<iostream>
//using namespace std;
//
//void swapint(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//void swapdouble(double& a, double& b)
//{
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
////函数模板用法
//template<typename T>//声明模板，声明通用数据类型T
//void myswap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	//swapint(a, b);
//	//模板语法使用 
//	// 1、编译器自动审查
//	//myswap(a, b);//自动审查T为int类型
//	// 2、自定义模板类型
//	myswap<int>(a, b);
//
//	cout << "a = " << a << "\nb = " << b << endl;
//
//}
//
//int main()
//{
//	test01();
//
//
//	system("pause");
//	return 0;
//}