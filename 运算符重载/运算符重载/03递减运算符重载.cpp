//#include<iostream>
//using namespace std;
//
////µİ¼õÔËËã·ûÖØÔØ
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger& myint);
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//	//Ç°ÖÃµİ¼õ
//	MyInteger& operator--()
//	{
//		m_Num--;
//		return *this;
//	}
//	//ºóÖÃµİ¼õ
//	MyInteger& operator--(int)
//	{
//		MyInteger temp = *this;
//		m_Num--;
//		return temp;
//	}
//
//
//private:
//	int m_Num;
//
//};
//
////×óÒÆÔËËã·ûÖØÔØ
//ostream& operator<<(ostream& cout, MyInteger& myint)
//{
//	cout << "m_Num = " << myint.m_Num;
//	return cout;
//}
//
//void test01()
//{
//	MyInteger myint;
//	cout << --(--myint) << endl;
//	cout << myint << endl;
//
//}
//
//void test02()
//{
//	MyInteger myint;
//	cout << myint-- << endl;
//	cout << myint << endl;
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}