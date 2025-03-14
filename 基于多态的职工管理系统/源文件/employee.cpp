#include "employee.h"

//构造函数
Employee::Employee(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

//显示个人信息
void Employee::ShowInfo()  //virtual 关键字 可删可不删
{
	cout << "职工编号：" << this->m_Id;
	cout << "\t职工姓名：" << this->m_Name;
	cout << "\t岗位：" << this->getDeptName();
	cout << "\t岗位职责：完成经理交给的任务" << endl;
}

//获取岗位名称
string Employee::getDeptName()
{
	return string("员工");
}