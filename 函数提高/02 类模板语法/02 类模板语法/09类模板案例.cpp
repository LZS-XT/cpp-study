#include"MyArray.hpp"

template <class T1, class T2>
class Person
{
public:
	Person(){}
	Person(T1 name, T2 age);
	void showPerson();
	T1 m_Name;
	T2 m_Age;
};

template <class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) :m_Name(name), m_Age(age) {}

template <class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << this->m_Name << "\t" << this->m_Age << endl;
}


template<class T>
void PrintArray(MyArray<T> & arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}


void PrintArray(MyArray<Person<string,int>> & arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		arr[i].showPerson();
	}
}

void test01()
{
	MyArray <int>arr1(5);
	MyArray arr2(arr1);
	MyArray <int>arr3(6);
	arr3 = arr1;
}

void test02()
{
	MyArray <int>arr1(5);
	for (int i = 0; i < 5; i++)
	{
		arr1.Push_Back(i);
	}
	PrintArray(arr1);
	arr1.Pop_Back();
	PrintArray(arr1);

}

void test03()
{
	Person<string, int> p1("¬Ì≥¨", 24);
	Person<string, int> p2("–°««", 20);
	Person<string, int> p3("ÀÔ…–œ„", 21);
	Person<string, int> p4("’≈∑…", 40);
	Person<string, int> p5("æµ", 17);
	MyArray <Person<string,int>>arr(10);
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);
	PrintArray(arr);
}

int main()
{
	//test01();

	//test02();

	test03();

	system("pause");

	return 0;
}