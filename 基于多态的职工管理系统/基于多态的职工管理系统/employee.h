#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"worker.h"

class Employee : public Worker
{
public:
	
	virtual void ShowInfo();


};