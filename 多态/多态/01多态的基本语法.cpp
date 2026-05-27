//#include<iostream>
//using namespace std;
//
//class Animal
//{
//public:
//	//虚函数：在父类中加上virtual关键字修饰的函数叫做虚函数
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "猫在说话" << endl;
//	}
//};
//
////多态的使用：父类的指针或者引用指向子类对象
//// 子类重写父类的虚函数，执行的时候就会调用子类重写以后的函数
////地址早绑定：编译阶段就确定函数地址
////地址晚绑定：运行阶段才确定函数地址
//void doSpeak(Animal &animal)
//{
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}