//#include<iostream>
//using namespace std;
//#include<fstream>
//#include <string>
//
//void test01()
//{
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败！" << endl;
//		return;
//	}
//	////第一种读取方式
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//
//	////第二种读取方式
//	//char buf[1024] = { 0 };
//	//while(ifs.getline(buf,sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	////第三种读取方式
//	//string buf;
//	//while(getline(ifs,buf))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//第四种读取方式
//	char c;
//	while ((c = ifs.get()) != EOF)
//	{
//		cout << c;
//	}
//		
//
//
//	ifs.close();
//
//
//}
//
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}