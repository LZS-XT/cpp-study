#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<deque>
#include<algorithm>
#include<ctime>

class Person
{
public:
	Person(string name,int score):m_name(name),m_score(score){}

	string m_name;
	int m_score;
};

void personPush(vector<Person>& v)
{
	string add_name = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += add_name[i];
		Person p(name, 0);
		v.push_back(p);
	}
}

void printVector(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "选手： " << it->m_name << " 分数： " << it->m_score << endl;
	}
}

void setScore(vector<Person>& v)
{
	
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;
			d.push_back(score);
		}
		cout << "评委给" << it->m_name << "的打分为：";
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
		}
		cout << endl;
		cout << "求平均为： ";
		int sum = 0;
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}
		int avg = sum / d.size();
		it->m_score = avg;

		cout << avg << endl;
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	vector<Person> v;
	personPush(v);
	cout << "初始化选手和分数："<<endl;
	printVector(v);
	setScore(v);
	printVector(v);


	system("pause");

	return 0;
}