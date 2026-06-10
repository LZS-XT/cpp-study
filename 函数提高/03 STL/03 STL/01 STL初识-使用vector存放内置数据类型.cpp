#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

void print(int val)
{
	cout << val << endl;
}

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	///第一种遍历
	//vector<int>::iterator itBegin = v.begin();
	//vector<int>::iterator itEnd = v.end(); //最后一个数据的下一个地址
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	////第二种便利
	//for (vector<int>::iterator itBegin = v.begin(); itBegin!= v.end(); itBegin++)
	//{
	//	cout << *itBegin << endl;
	//	
	//}

	//第三种遍历
	for_each(v.begin(),v.end(),print);


	system("pause");

	return 0;
}