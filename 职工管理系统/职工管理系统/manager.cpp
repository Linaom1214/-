#include "manager.h"

Manager::Manager(int id,string name,int did)
{
	this-> m_ID= id;
	this->m_Name= name;
	this-> m_Deptid = did ;  //���ű��

}
//��ȡ������Ϣ
void Manager::showinof ( ) 
{

	cout<<"ְ�����"<<this->m_ID 
		<<"\tְ������"<<this->m_Name
		<<"\t��λ"<<this->getDeptName() 
		<<"\t��λְ�𣺾���"<<endl;
}
//��ȡ��λ��Ϣ
string Manager::getDeptName() 
{
	return "����";
}