//#include<iostream>
//using namespace std;
//
//class Building
//{
//	friend void goodGay(Building& building);// 声明 goodGay 是 Building 的好朋友, goodGay 就可以访问 Building 中的私有成员
//public:
//	Building()
//	{
//		m_SittingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
//
//void goodGay(Building& building)
//{
//	cout<< "好基友正在访问: " << building.m_SittingRoom << endl;
//	cout << "好基友正在访问: " << building.m_BedRoom << endl; // 访问不到
//}
//
//void test01()
//{
//	Building b;
//	goodGay(b);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}