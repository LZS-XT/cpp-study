#include<iostream>
using namespace std;
#include"Mangermeau.h"

int main()
{
	Mangermeau man;
	while (true)
	{
		man.Showmeau();
		int select;
		cin >> select;
		switch (select)
		{
		case 0:
			man.ExitSystem();
			break;
		case 1:
			cout << "添加职工" << endl;
			break;
		case 2:
			cout << "显示职工" << endl;
			break;
		case 3:
			cout << "删除职工" << endl;
			break;
		case 4:
			cout << "查找职工" << endl;
			break;
		case 5:
			cout << "修改职工" << endl;
			break;
		case 6:
			cout << "排序职工" << endl;
			break;
		case 7:
			cout << "清空文件" << endl;
			break;
		default:
			cout << "输入有误，请重新输入" << endl;
		}
	}

	system("pause"); 
	return 0;
}