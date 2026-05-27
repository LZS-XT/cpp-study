#pragma once
#include<iostream>
using namespace std;
#include<string>

class Worker
{
public:
	virtual void ShowInfo() = 0;//显示职工信息





	string m_Name;//姓名
	int m_Id;//职工编号
	int m_DeptId;//部门编号

};