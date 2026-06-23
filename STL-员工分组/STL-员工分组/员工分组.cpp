#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<map>
#include<ctime>

class Worker
{
public:
	string m_name;
	int m_salary;
};

void setworker(vector<Worker>& v)
{
	string nameseed = "ABCDEFGHJI";
	for (int i = 0; i < 10; i++)
	{
		Worker w;
		w.m_name = "员工";
		w.m_name += nameseed[i];
		w.m_salary = rand() % 10000 + 10000;
		v.push_back(w);
	}
}

void setmap(multimap<int, Worker>& m, vector<Worker>& v)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		int depId;
		depId = rand() % 3;
		m.insert(make_pair(depId,*it));
	}
}

void printmap(multimap<int, Worker>& m)
{
	for (int i = 0; i < 3; i++)
	{
		multimap<int, Worker>::iterator pos = m.find(i);
		int count = m.count(i);
		int index = 0;
		switch (i)
		{
		case 0:
			cout << "美术部门：" << endl;
			break;
		case 1:
			cout << "策划部门：" << endl;
			break;
		case 2:
			cout << "研发部门：" << endl;
			break;
		}
		for (; pos != m.end() && index < count; pos++)
		{
			index++;
			cout << "姓名： " << pos->second.m_name << " 薪水： " << pos->second.m_salary << endl;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	vector<Worker> vWorker;
	setworker(vWorker);

	/*for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
	{
		cout << "姓名： " << it->m_name << " 薪水： " << it->m_salary << endl;
	}*/
	multimap<int, Worker>mWorker;

	setmap(mWorker, vWorker);

	printmap(mWorker);


	system("pause");

	return 0;
}