//#include<iostream>
//using namespace std;
//
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal 构造函数调用" << endl;
//	}
//	virtual ~Animal() = 0;
//
//	virtual void speak() = 0;
//};
//
//Animal::~Animal()
//{
//	cout << "Animal 纯虚析构函数调用" << endl;
//}
//
//class Cat :public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat 构造函数调用" << endl;
//		m_name = new string(name);
//	}
//	~Cat()
//	{
//		cout << "Cat 析构函数调用" << endl;
//		if (m_name != NULL)
//		{
//			delete m_name;
//			m_name = NULL;
//		}
//	}
//	void speak()
//	{
//		cout <<*m_name<< " cat speak" << endl;
//	}
//	string* m_name;
//};
//
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	delete animal;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}