#include "boss.h"

Boss::Boss(int id,string name,int did)
{
	this-> m_ID= id;
	this->m_Name= name;
	this-> m_Deptid = did ;  //���ű��

}
//��ȡ������Ϣ
void Boss::showinof ( ) 
{

	cout<<"ְ�����"<<this->m_ID 
		<<"\tְ������"<<this->m_Name
		<<"\t��λ"<<this->getDeptName() 
		<<"\t��λְ���ϰ�"<<endl;
}
//��ȡ��λ��Ϣ
string Boss::getDeptName() 
{
	return "�ϰ�";
}