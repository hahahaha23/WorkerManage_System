#include "manager.h"

//构造函数
Manager::Manager(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

//显示个人信息
void Manager::ShowInfo()
{
	cout << "职工编号：" << this->m_Id;
	cout << "\t职工姓名：" << this->m_Name;
	cout << "\t岗位：" << this->getDeptName();
	cout << "\t岗位职责：完成老板交给的任务，并下发任务给员工" << endl;
}

//获取岗位名称
string Manager::getDeptName()
{
	return string("经理");
}