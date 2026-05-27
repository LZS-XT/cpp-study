#include<iostream>
using namespace std;

class Person02
{
public:
	//Person02(int a ,int b,int c)//传统初始化
	//{
	//	A = a;
	//	B = b;
	//	C = c;
	//}
	Person02(int a, int b, int c) :A(a), B(b), C(c)
	{

	}//初始化列表


	int A;
	int B;
	int C;

};

void test02()
{
	Person02 p1(3,2,1);
	cout << "a = " << p1.A << "\tb = " << p1.B << "\tc =  " << p1.C << endl;
}

int main02()
{
	test02();


	system("pause");
	return 0;
}