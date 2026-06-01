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

	//显示菜单
	void Showmeau();

	//退出函数
	void ExitSystem();

	//添加职工
	void AddWorker();

	//保存文件
	void save();


};