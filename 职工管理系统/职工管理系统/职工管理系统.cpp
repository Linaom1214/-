#include <iostream>
#include <string>
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
 using namespace std;
int main()
{
	////ʵ��������
	//Worker *worker = NULL;
	//worker = new Boss(1,"����",1);
	//worker->showinof();
	WorkerManager  wm;
	

	int choice = 0;
 
	while (true)
	{
		wm.show_Menu();
		cout<<"�������ѡ��"<<endl;
		cin>>choice;
		
		switch (choice)
		{
		case 0:  //�˳�
			{
				wm.ExitSystem();
				break;
			}
		case 1: //����    ������Ϣ���ļ�
			wm.Add_Emp();
			break;
		case 2: //��ʾ
			wm.show();
			break; 
		case 3: //ɾ��
		{
			wm.deleteEmp();
			//cout<<"����Ҫ��ְ��ְ�����"<<endl;
			//int  id = 0;
			//cin >>id;
			//cout<<((wm.isExist(id) ==-1)?"������ ":"����")<<endl;
			break;
		}
		case 4: //�޸�
			wm.Mod_Emp();
			break;
		case 5: //����
			wm.Find_Emp();
			break;
		case 6://����
			wm.Sort_Emp();
			break;
		case 7: //���
			wm.Clear_File();
			break;
		default:
			system("CLS");
			break;
		}
	}
	return 0;
}

