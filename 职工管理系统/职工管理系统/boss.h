#pragma  once
#include "worker.h"
using namespace std;
#include <iostream>

class Boss:public Worker
{
public:
	Boss(int id,string name,int did);
	~Boss();
	//��ȡ������Ϣ
	void showinof ( ) ;
	//��ȡ��λ��Ϣ
	string getDeptName() ;


protected:

private:
};