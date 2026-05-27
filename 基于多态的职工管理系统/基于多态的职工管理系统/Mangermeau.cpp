#include"Mangermeau.h"

Mangermeau::Mangermeau()
{
	
}

Mangermeau::~Mangermeau()
{

}

//显示菜单
void Mangermeau::Showmeau()
{
	cout << "**************************************" << endl;
	cout << "*********欢迎来到职工管理系统*********" << endl;
	cout << "*************0.退出系统**************" << endl;
	cout << "*************1.添加职工**************" << endl;
	cout << "*************2.显示职工***************" << endl;
	cout << "*************3.删除职工***************" << endl;
	cout << "*************4.查找职工***************" << endl;
	cout << "*************5.修改职工***************" << endl;
	cout << "*************6.排序职工***************" << endl;
	cout << "*************7.清空文件***************" << endl;
	cout << "**************************************" << endl;
}

//退出函数
void Mangermeau::ExitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

//添加职工
void Mangermeau::AddWorker()
{
	int id;
	string name;
	int dId;
	cout << "请输入职工编号:" << endl; 
	cin >> id;
	cout << "请输入职工姓名:" << endl;
	cin >> name;
	cout << "请输入部门编号:" << endl;
	cin >> dId;

}


