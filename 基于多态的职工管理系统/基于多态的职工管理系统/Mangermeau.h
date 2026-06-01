#pragma once	
#include <iostream>
using namespace std;
#include"worker.h"
#include"boss.h"
#include"manager.h"
#include"employee.h"
#include<fstream>

#define FILENAME "empfile.txt"

class Mangermeau
{
public:
	Mangermeau();

	~Mangermeau();

	int m_empNum;//职工人数

	Worker** m_empArray;//职工数组指针

	bool m_fileempty;

	//显示菜单
	void Showmeau();

	//退出函数
	void ExitSystem();

	//添加职工
	void AddWorker();

	//保存文件
	void save();

	//获得职工人数
	int get_EmpNum();

	//初始化职工
	void init_Emp();

	//显示职工
	void ShowEmp();

	//判断职工是否存在
	bool is_exist(int id);

	//删除职工
	void DelEmp();

	// 查找职工
	void FindEmp();

	//修改职工
	void ChangeEmp();

	//排序职工
	void PaixuEmp();

	//清空文件
	void CleanFile();
};