#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"worker.h"

class Boss : public Worker
{
public:

	virtual void ShowInfo();


};