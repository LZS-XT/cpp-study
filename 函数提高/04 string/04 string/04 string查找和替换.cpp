#include<iostream>
#include<string>
using namespace std;

//find rfind
void test01()
{
	string s1 = "abcdefgde";
	int pos = s1.find("de");
	cout << pos << endl;
	int pos2 = s1.rfind("de");
	cout << pos2 << endl;

}

//replace
void test02()
{
	string s1 = "abcdefgde";
	cout << s1 << endl;
	s1.replace(3, 2, "1234");
	cout << s1 << endl;
}

int main()
{
	//test01();

	test02();

	system("pause");

	return 0;
}
