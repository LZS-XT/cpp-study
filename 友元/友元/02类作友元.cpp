//#include<iostream>
//using namespace std;
//#include<string>
//
//class Building {
//	friend class GoodGay; // 声明 GoodGay 是 Building 的好朋友, GoodGay 就可以访问 Building 中的私有成员
//public:
//	Building();
//
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//public:
//	~Building()
//	{
//		cout << "房子被拆了" << endl;
//	}
//};
//
//class GoodGay
//{
//public:
//
//	GoodGay(string name);
//
//	string m_Name;
//
//	void visit(Building& building)
//	{
//		cout << m_Name << " 正在访问: " << building.m_SittingRoom << endl;
//		cout << m_Name << " 正在访问: " << building.m_BedRoom << endl;
//	}
//
//	~GoodGay()
//	{
//		cout << m_Name << "走了" << endl;
//	}
//};
//
//Building::Building()
//{
//	cout << "房子建好了" << endl;
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//
//GoodGay::GoodGay(string name)
//{
//	m_Name = name;
//	cout << m_Name << " 进入了房间" << endl;
//}
//
//void test01()
//{
//	Building b;
//	GoodGay gg("傻逼");
//	gg.visit(b);
//}
//
//
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}