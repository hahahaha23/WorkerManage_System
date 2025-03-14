#pragma once
//普通职工文件
#include <iostream>
using namespace std;
#include "worker.h"


class Employee :public Worker
{
public:

	//构造函数
	Employee(int id, string name, int dId);

	//显示个人信息
	virtual void ShowInfo();  //virtual 关键字 可删可不删

	//获取岗位名称
	virtual string getDeptName();

};