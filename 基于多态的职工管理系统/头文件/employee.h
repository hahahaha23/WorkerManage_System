#pragma once
//��ְͨ���ļ�
#include <iostream>
using namespace std;
#include "worker.h"


class Employee :public Worker
{
public:

	//���캯��
	Employee(int id, string name, int dId);

	//��ʾ������Ϣ
	virtual void ShowInfo();  //virtual �ؼ��� ��ɾ�ɲ�ɾ

	//��ȡ��λ����
	virtual string getDeptName();

};