#include "boss.h"

//���캯��
Boss::Boss(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

//��ʾ������Ϣ
void Boss::ShowInfo()
{
	cout << "ְ����ţ�" << this->m_Id;
	cout << "\tְ��������" << this->m_Name;
	cout << "\t��λ��" << this->getDeptName();
	cout << "\t��λְ�𣺹���˾��������" << endl;
}

//��ȡ��λ����
string Boss::getDeptName()
{
	return string("�ϰ�");
}