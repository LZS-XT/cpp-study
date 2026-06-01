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
			man.AddWorker();
			break;
		case 2:
			man.ShowEmp();
			break;
		case 3:
			man.DelEmp();
			break;
		case 4:
			man.FindEmp();
			break;
		case 5:
			man.ChangeEmp();
			break;
		case 6:
			man.PaixuEmp();
			break;
		case 7:
			man.CleanFile();
			break;
		default:
			cout << "输入有误，请重新输入" << endl;
			system("pause");
			system("cls");
		}
	}

	system("pause"); 
	return 0;
}