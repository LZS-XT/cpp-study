#pragma once
#include<iostream>
#include<string>
using namespace std;

template<class T>
class MyArray
{
public:
	MyArray(int capacity)
	{
		cout << "有参构造" << endl;
		this->m_Capacity = capacity;
		paddress = new T[m_Capacity];
		m_Size = 0;
	}

	MyArray(const MyArray& arr)
	{
		cout << "拷贝构造" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->paddress = new T[arr.m_Capacity];
		for (int i = 0; i < m_Size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}
	}

	//尾插法
	void Push_Back(const T& t)
	{
		if (m_Size == m_Capacity)
		{
			return;
		}
		paddress[m_Size] = t;
		m_Size++;
	}

	//尾删法
	void Pop_Back()
	{
		if (m_Size == 0)
		{
			return;
		}
		m_Size--;
	}

	//下标
	T& operator[](int index)
	{
		return this->paddress[index];
	}

	int getSize()
	{
		return m_Size;
	}

	int getCapacity()
	{
		return m_Capacity;
	}

	MyArray& operator=(const MyArray& arr)
	{
		cout << "=运算符重载" << endl;
		if (paddress != NULL)
		{
			delete[] paddress;
			paddress = NULL;
			m_Capacity = 0;
			m_Size = 0;
		}
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->paddress = new T[arr.m_Capacity];
		for (int i = 0; i < m_Size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}
		return *this;
	}

	~MyArray()
	{
		cout << "析构" << endl;
		if (paddress != NULL)
		{
			delete[] paddress;
			paddress = NULL;
			m_Capacity = 0;
			m_Size = 0;
		}
	}

private:
	T* paddress;
	int m_Capacity;
	int m_Size;

};