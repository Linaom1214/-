#include "Addressbooks.h"
#include "Person.h"
#include <iostream>
using namespace std;

int main()
{
	//Person p("����", "120");
	//p.show_info();
	Addressbooks ads;
	int index = -1; //���ܲ���״̬
	while (true)
	{
		ads.show_menu();
		cout << "����ѡ��:" << endl;
		int select = 0;
		cin >> select;
		switch (select)
		{
		case 0:
			//�˳�ϵͳ
			ads.exit_system();
			system("cls");
			break;
		case 1:
			ads.add_Person();
			//���ӳ�Ա
			system("cls");
			break;
		case 2:
			//��ʾ��Ա
			ads.show();
			system("pause");
			system("cls");
			break;
		case 3:
			//ɾ��
			ads.del_person();
			system("pause");
			system("cls");
			break;
		case 4:
			//����
			ads.find();
			system("pause");
			system("cls");
			break;
		case 5:
			//���
			ads.destory();
			system("pause");
			system("cls");
			break;
		case 6:
			break;
		default:
			system("cls");
			break;
		}
	}
}