#include"employee.h"

void Employee::ShowInfo()
{
	cout << "职工编号:" << m_Id << "\t职工姓名:" << m_Name << "\t部门编号:" << m_DeptId <<
	 "职工岗位:普通职工" << endl;
}