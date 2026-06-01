#include"Mangermeau.h"

Mangermeau::Mangermeau()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		m_empArray = NULL;
		m_empNum = 0;
		m_fileempty = true;
		ifs.close();
		return;
	}
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "文件为空" << endl;
		m_empArray = NULL;
		m_empNum = 0;
		m_fileempty = true;
		ifs.close();
		return;
	}
	m_empNum = get_EmpNum();
	m_empArray = new Worker * [m_empNum];
	init_Emp();
}

Mangermeau::~Mangermeau()
{
	delete[] m_empArray;
	m_empArray = NULL;
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
	cout << "退出成功，欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

//添加职工
void Mangermeau::AddWorker()
{
	int id;
	string name;
	int dId;
	int addnum;
	cout << "请输入添加的职工数量" << endl;
	cin >> addnum;
	if (addnum > 0)
	{
		int newsize = m_empNum + addnum;
		Worker** newspace = new Worker * [newsize];
		if (m_empNum != 0)
		{
			for (int i = 0; i < m_empNum; i++)
			{
				newspace[i] = m_empArray[i];
			}
		}
		for (int i = 0; i < addnum; i++)
		{
			cout << "请输入加入的第" << i + 1 << "位职工的编号:" << endl;
			cin >> id;
			
			cout << "请输入加入的第" << i + 1 << "位职工的姓名:" << endl;
			cin >> name;
			
			cout << "请输入加入的第" << i + 1 << "位职工的部门编号:" << endl;
			cout << "1、老板\n2、经理\n3、普通员工\n" ;
			
			do 
			{
				cin >> dId;
				switch (dId)
				{
				case 1:
					newspace[m_empNum + i] = new Boss(id, name, dId);
					break;
				case 2:
					newspace[m_empNum + i] = new Manager(id, name, dId);
					break;
				case 3:
					newspace[m_empNum + i] = new Employee(id, name, dId);
					break;
				default:
					cout << "输入有误，请重新输入" << endl;
				}
			} while (dId != 1 && dId != 2 && dId != 3);
		}
		
			delete[] m_empArray;
			m_empNum = newsize;
			m_empArray = newspace;
		
		cout << "添加成功！" << endl;
		this->m_fileempty = false;
		this->save();
	}
	else
	{
		cout << "输入有误" << endl;
	}   
	system("pause");
	system("cls");
}

//保存文件
void Mangermeau::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	for (int i = 0; i < m_empNum; i++)
	{
		ofs << m_empArray[i]->m_Id << " " << m_empArray[i]->m_Name << " " << m_empArray[i]->m_DeptId << endl;
	}
	ofs.close();
}

//获得职工人数
int Mangermeau::get_EmpNum()
{
	int id;
	string name;
	int dId;
	int num=0;
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		num++;
	}
	ifs.close();
	return num;
}

//初始化职工
void Mangermeau::init_Emp()
{
	int id;
	string name;
	int dId;
	int index = 0;
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		switch (dId)
		{
		case 1:
			m_empArray[index] = new Boss(id, name, dId);
			break;
		case 2:
			m_empArray[index] = new Manager(id, name, dId);
			break;
		case 3:
			m_empArray[index] = new Employee(id, name, dId);
			break;
		}
		index++;
	}
	ifs.close();
}

//显示职工
void Mangermeau::ShowEmp()
{
	for (int i = 0; i < m_empNum; i++)
	{
		m_empArray[i]->ShowInfo();
	}
	system("pause");
	system("cls");
}

//判断职工是否存在
bool Mangermeau::is_exist(int id)
{
	for (int i = 0; i < m_empNum; i++)
	{
		if (m_empArray[i]->m_Id == id)
		{
			return true;
		}
	}
	return false;
}

//删除职工
void Mangermeau::DelEmp()
{
	int id;
	cout << "请输入删除职工的编号：" << endl;
	cin >> id;
	if (!is_exist(id))
	{
		cout << "该职工不存在" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0; i < m_empNum; i++)
	{
		if (m_empArray[i]->m_Id == id)
		{
			for (int j = i; j < m_empNum; j++)
			{
				m_empArray[j] = m_empArray[j + 1];
			}
			m_empNum--;
			i--;
		}
	}
	cout << "删除成功" << endl;
	this->save();
	system("pause");
	system("cls");
}

// 查找职工
void Mangermeau::FindEmp()
{
	int id;
	cout << "请输入查找职工的编号：" << endl;
	cin >> id;
	if (!is_exist(id))
	{
		cout << "该职工不存在" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0; i < m_empNum; i++)
	{
		if (m_empArray[i]->m_Id == id)
		{
			m_empArray[i]->ShowInfo();
		}
	}
	system("pause");
	system("cls");
}

//修改职工
void Mangermeau::ChangeEmp()
{
	int id;
	int c_id;
	string c_name;
	int c_dId;
	cout << "请输入修改职工的编号：" << endl;
	cin >> id;
	if (!is_exist(id))
	{
		cout << "该职工不存在" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0; i < m_empNum; i++)
	{
		if (m_empArray[i]->m_Id == id)
		{
			m_empArray[i]->ShowInfo();
			delete m_empArray[i];
			m_empArray[i] = NULL;
			cout << "请输入修改后的职工的编号:" << endl;
			cin >> c_id;

			cout << "请输入修改后的职工的姓名:" << endl;
			cin >> c_name;

			cout << "请输入修改后的职工的部门编号:" << endl;
			cout << "1、老板\n2、经理\n3、普通员工\n";

			do
			{
				cin >> c_dId;
				switch (c_dId)
				{
				case 1:
					m_empArray[i] = new Boss(c_id, c_name, c_dId);
					break;
				case 2:
					m_empArray[i] = new Manager(c_id, c_name, c_dId);
					break;
				case 3:
					m_empArray[i] = new Employee(c_id, c_name, c_dId);
					break;
				default:
					cout << "输入有误，请重新输入" << endl;
				}
			} while (c_dId != 1 && c_dId != 2 && c_dId != 3);
		}
	}
	cout << "修改成功" << endl;
	save();
	system("pause");
	system("cls");
}

//排序职工
void Mangermeau::PaixuEmp()
{
	int P;
	cout << "请选择排序方式：\n1、升序\n2、降序\n";
	cin >> P;
	if (P == 1)
	{
		//冒泡排序
		cout << "您选择的是升序" << endl;
		for (int i = 0; i < m_empNum-1; i++)
		{
			for (int j = 0; j < m_empNum - 1 - i; j++)
			{
				if (m_empArray[j]->m_Id >= m_empArray[j + 1]->m_Id)
				{
					Worker* temp = m_empArray[j];
					m_empArray[j] = m_empArray[j + 1];
					m_empArray[j + 1] = temp;
				}
			}
		}
	}
	else if (P == 2)
	{
		//选择排序
		cout << "您选择的是降序" << endl;
		int max;
		for (int i = 0; i < m_empNum; i++)
		{
			max = i;
			for (int j = i + 1; j < m_empNum; j++)
			{
				if (m_empArray[max]->m_Id <= m_empArray[j]->m_Id)
				{
					max = j;
				}
			}
			if (max != i)
			{
				Worker* temp = m_empArray[i];
				m_empArray[i] = m_empArray[max];
				m_empArray[max] = temp;
			}
		}
	}
	else
	{
		cout << "输入有误" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "排序成功" << endl;
	save();
	system("pause");
	system("cls");
}

//清空文件
void Mangermeau::CleanFile()
{
	cout << "您确定要清空文件吗？\n1、确定\n2、取消 \n";
	int select;
	cin >> select;
	if (select == 1)
	{
		ofstream ofs;
		ofs.open(FILENAME, ios::trunc);
		for (int i = 0; i < m_empNum; i++)
		{
			if (m_empArray[i] != NULL)
			{
				delete m_empArray[i];
				m_empArray[i] = NULL;
			}
		}
		delete[]m_empArray;
		m_empArray = NULL;
		m_empNum = 0;
		m_fileempty = true;
		cout << "清空成功" << endl;
		system("pause");
		system("cls");
	}
	else if (select == 2)
	{
		
		system("cls");
		return;
	}
	else
	{
		cout << "输入有误" << endl;
		system("pause");
		system("cls");
		return;
	}
}