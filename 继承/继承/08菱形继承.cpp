#include<iostream>
using namespace std;

class Animal
{
public:
	int m_age;
};
//采用虚继承
class Sheep :virtual public Animal{};

class Tuo :virtual public Animal {};

class SheepTuo :public Sheep, public Tuo {};

void test01()
{
	SheepTuo st;
	st.Sheep::m_age = 100;
	st.Tuo::m_age = 200;
	st.m_age = 10;
	// 由于菱形继承，导致 SheepTuo 中有两个 m_age 成员变量，必须加作用域区分，这种情况会导致二义性问题，造成资源浪费
	cout << "st.Sheep::m_age = " << st.Sheep::m_age << endl;
	cout << "st.Tuo::m_age = " << st.Tuo::m_age << endl;
	cout << "st.m_age = " << st.m_age << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}