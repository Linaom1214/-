#include <iostream>
#include "employee.h"

Employee::Employee(int id,string name,int did)
{
	this-> m_ID= id;
	this->m_Name= name;
	this-> m_Deptid = did ;  //���ű��

}
//��ȡ������Ϣ
void Employee::showinof ( ) 
{

	cout<<"ְ�����"<<this->m_ID 
		<<"\tְ������"<<this->m_Name
		<<"\t��λ"<<this->getDeptName() 
		<<"\t��λְ��Ա��"<<endl;
}
//��ȡ��λ��Ϣ
string Employee::getDeptName() 
{
	return "Ա��";
}