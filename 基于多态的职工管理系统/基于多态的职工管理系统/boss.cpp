#include"boss.h"

void Boss::ShowInfo()
{
	cout << "职工编号:" << m_Id << "\t职工姓名:" << m_Name << "\t部门编号:" << m_DeptId <<
		"\t职工岗位:老板" << endl;
}

Boss::Boss(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}