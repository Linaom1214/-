#pragma  once
#include "worker.h"
using namespace std;
#include <iostream>

class Manager:public Worker
{
public:
	Manager(int id,string name,int did);
	~Manager();
	//��ȡ������Ϣ
	void showinof ( ) ;
	//��ȡ��λ��Ϣ
	string getDeptName() ;


protected:
	
private:
};