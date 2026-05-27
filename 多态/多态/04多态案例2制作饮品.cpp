//#include<iostream>
//using namespace std;
//
//class Abstractcook
//{
//public:
//	//取原材料
//	virtual void YCL() = 0;
//	//制作
//	virtual void ZZ() = 0;
//	//上菜
//	virtual void SC() = 0;
//	void Cook()
//	{
//		YCL();
//		ZZ();
//		SC();
//	}
//};
//
////做菜
//class cook :public Abstractcook
//{
//	public:
//	void YCL()
//	{
//		cout << "取原材料" << endl;
//	}
//	void ZZ()
//	{
//		cout << "制作" << endl;
//	}
//	void SC()
//	{
//		cout << "上菜" << endl;
//	}
//};
//
////冰毒
//class bingdu :public Abstractcook
//{
//	public:
//	void YCL()
//	{
//		cout << "取冰毒原材料" << endl;
//	}
//	void ZZ()
//	{
//		cout << "制作冰毒" << endl;
//	}
//	void SC()
//	{
//		cout << "上菜冰毒" << endl;
//	}
//};
//
//void dowork(Abstractcook* abc)
//{
//	abc->Cook();
//	delete  abc;
//}
//
//void test01()
//{
//	dowork(new cook);
//	cout << "------------------"		 << endl;
//	dowork(new bingdu);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}