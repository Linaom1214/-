#pragma once
#include <iostream>
#include <string>
using namespace std;

class Worker 
{
public:
	//��ȡ������Ϣ
	virtual void showinof () = 0;
	//��ȡ��λ��Ϣ
	virtual string getDeptName () =0;

	int m_ID;
	string m_Name;
	int m_Deptid ;  //���ű��
protected:
	

private:
};


