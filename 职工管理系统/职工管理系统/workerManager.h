#pragma once 
#include <iostream>
#include "worker.h"
#include "employee.h"
#include "boss.h"
#include "manager.h"


#include <fstream>
#define  FILENAME   "empfile.txt"
using namespace std;
class WorkerManager
{
public:
	WorkerManager();
	~WorkerManager();
	//��ʾ�˵�
	void show_Menu() ;
	void ExitSystem();

	//��¼ְ������
	int m_EmpNum;
	//ְ������ָ��
	Worker **m_EmpArray ;
	//��Ӻ���
	void Add_Emp();

	void save();

	//
	bool m_FileisEmpty;

	int getNum( ) ;

	void  init_Emp();


	void show();


	int  isExist(int id);
	//ɾ����ϵ��
	void deleteEmp();

	void Mod_Emp();


	void Find_Emp();

	//ѡ������

	void Sort_Emp();


	void Clear_File();
protected:
	
private:
};

