#include<iostream>
using namespace std;

class Building;

class GoodGay
{
public:
	GoodGay(string name1, string name2) : m_Name1(name1), m_Name2(name2) {}
	void visit(Building& building);
	void visit2(Building& building);
	string m_Name1;
	string m_Name2;
};

class Building
{
	friend void GoodGay::visit(Building& building);// 声明 GoodGay 的成员函数 visit 是 Building 的好朋友, visit 就可以访问 Building 中的私有成员
	//friend class GoodGay; 
public:
	Building();
	string m_SittingRoom;
private:
	string m_BedRoom;
};


Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

void GoodGay::visit(Building& building)
{
	cout << m_Name1<<"正在访问: " << building.m_SittingRoom << endl;
	cout <<m_Name1 <<"正在访问: " << building.m_BedRoom << endl; // 访问不到
}

void GoodGay::visit2(Building& building)
{
	cout << m_Name2 << "正在访问: " << building.m_SittingRoom << endl;
	//cout << m_Name2 << "正在访问: " << building.m_BedRoom << endl; // 访问不到
}

void test01()
{
	Building b;
	GoodGay gg("宝宝","傻逼");
	gg.visit(b);
	gg.visit2(b);
}

int main()
{
	test01();
	system("pause");
	return 0;
}