#include "employee.h"

//���캯��
Employee::Employee(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

//��ʾ������Ϣ
void Employee::ShowInfo()  //virtual �ؼ��� ��ɾ�ɲ�ɾ
{
	cout << "ְ����ţ�" << this->m_Id;
	cout << "\tְ��������" << this->m_Name;
	cout << "\t��λ��" << this->getDeptName();
	cout << "\t��λְ����ɾ�����������" << endl;
}

//��ȡ��λ����
string Employee::getDeptName()
{
	return string("Ա��");
}