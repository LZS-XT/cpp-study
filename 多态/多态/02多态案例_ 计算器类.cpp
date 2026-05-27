//#include<iostream>
//#include<string>
//using namespace std;
//
//class Caculator
//{
//public:
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-")
//		{
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*")
//		{
//			return m_Num1 * m_Num2;
//		}
//		else if (oper == "/")
//		{
//			return m_Num1 / m_Num2;
//		}
//		return 0;
//	}
//	 int m_Num1;
//	int m_Num2;
//};
//
//void test01()
//{
//	Caculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//	cout << c.getResult("+") << endl;
//	cout << c.getResult("-") << endl;
//	cout << c.getResult("*") << endl;
//	cout << c.getResult("/") << endl;
//}
//
////使用多态实现计算器
//class AbstractCaculator
//{
//public:
//	virtual int getResult()
//	{
//		return 0;
//	}
//	static int m_Num1;
//	static int m_Num2;
//};
//int AbstractCaculator::m_Num1 = 20;
//int AbstractCaculator::m_Num2 = 10;
////加法计算器
//class AddCaculator :public AbstractCaculator
//{
//	public:
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
////减法计算器
//class SubCaculator :public AbstractCaculator
//{
//	public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
////乘法计算器
//class MulCaculator :public AbstractCaculator
//{
//	public:
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
////除法计算器
//class DivCaculator :public AbstractCaculator
//{
//	public:
//	int getResult()
//	{
//		return m_Num1 / m_Num2;
//	}
//};
//
//void test02()
//{
//	AbstractCaculator* abc = new AddCaculator;
//	cout << abc->getResult() << endl;
//	delete abc;
//	abc = new SubCaculator;
//	cout << abc->getResult() << endl;
//	delete abc;
//	abc = new MulCaculator;
//
//	cout << (*abc).getResult() << endl;
//	delete abc;
//	abc = new DivCaculator;
//	cout << (*abc).getResult() << endl;
//	delete abc;
//
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}