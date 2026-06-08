//#include<iostream>
//using namespace std;
//
//int add(int a, int b)
//{
//	return a + b;
//}
//
//template<class T>
//T myadd(T a, T b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	//普通函数可以进行隐式类型转换
//	cout << add(a, c) << endl;
//	
//	//函数模板不能进行隐式类型准换
//	//cout << myadd(a, c) << endl;
//
//	//指定类型的函数模板可以进行隐式类型转换
//	cout << myadd<int>(a, c) << endl;
//
//
//
//	system("pause");
//
//	return 0;
//}