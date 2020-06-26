#include <iostream>
#include <string> 
#define MAX 1000
using namespace std;

struct Person   //��ϵ�˽ṹ��
{
	string name;
	int gender; // 1 ��  2 Ů
	string number; 
	int age;
	string address;
};

struct Addressbooks  //ͨѶ¼�ṹ��
{
	//������ϵ������
	struct Person personarr[MAX];
	//ͨѶ¼�е���ϵ�˸���
	int size ;   
};
void showMenu()
{
		cout<<"*****1.�����ϵ��***********"<<endl;
		cout<<"*****2.��ʾ��ϵ��***********"<<endl;
		cout<<"*****3.ɾ����ϵ��**********"<<endl;
		cout<<"*****4.������ϵ��**********"<<endl;
		cout<<"*****5.�޸���ϵ��**********"<<endl;
		cout<<"*****6.���ͨѶ¼**********"<<endl;
		cout<<"*****0.�˳�ͨѶ¼**********"<<endl;
}
void addperson(Addressbooks *abs)
{
	//�ж�
	if (abs->size == MAX)
	{
		cout<<"ͨѶ¼����"<<endl;
	}
	else 
	{	
		cout<<"����������"<<endl;
		string  name;
		cin>>name;
		abs->personarr[abs->size].name =name;
		while(1)
		{
			int gender =0;
			cout<<"�����Ա�\n1----��    2----Ů"<<endl;
			cin>>gender;
			if (gender==1||gender==2)
			{
				abs->personarr[abs->size].gender =gender;
				break;
			}
			else 
				cout<<"��������"<<endl;
		}
		cout<<"�������ֻ���"<<endl;
		string number;
		cin>>number;
		abs->personarr[abs->size].number = number;

		cout<<"����������"<<endl;
		int age;
		cin>>age;
		abs->personarr[abs->size].age = age;

		cout<<"������סַ"<<endl;
		string address;
		cin>>address;
		abs->personarr[abs->size].address = address;

		abs->size++;
		cout<<"��ӳɹ�"<<endl;
		//����
		system("pause");
		system("cls");
	}
}
void display(Addressbooks *abs,int size)    //Ϊ�˽�ʡ�ڴ�
{
	if (size != 0)
	{
		for (int i = 0; i < size ;i++)
		{
			cout<<" ������"<<abs->personarr[i].name<<" �Ա�"<<(abs->personarr[i].gender==1?"��":"Ů")<<" ��ϵ��ʽ��"<<abs->personarr[i].number
			<<" סַ��"<<abs->personarr[i].address<<" ���䣺"<<abs->personarr[i].age<<endl;
		}
	}
	else 
		cout<<"��¼Ϊ��"<<endl;

	system("pause");
	system("cls"); //����
}
//�����ϵ���Ƿ����  ���ڷ���λ�� ���򷵻� -1

int isExist(Addressbooks *abs , string name)
{
	for (int i = 0; i<abs->size;i++)
	{
		if (abs->personarr[i].name == name)   
			return i;		
	}
	return -1;
}

//ɾ����ϵ��
void deleteperson(Addressbooks *abs )
{
	cout<<"����Ҫɾ������ϵ��"<<endl;
	string name;
	 cin >>name;
	 int index  = isExist(abs,name);  //�����abs ����ָ��
	 if (index != -1)
	 {
		for (int i =index;i<abs->size;i++)
		{
			abs->personarr[i] = abs->personarr[i+1];   //�߼�ɾ�� ����ǰ��
		}
		abs->size--;   //�������鳤��
		cout<<"ɾ���ɹ�"<<endl;
	 }
	 else 
		  cout<<"���޴���"<<endl;

	 system("pause");
	system("cls"); //����

}
void findperson (Addressbooks  *abs )   //������ϵ��
{
	cout<<"����Ҫ���ҵ���ϵ��"<<endl;
	string name;
	cin>>name;
	int index  = isExist(abs ,name);
	if (index !=-1)
				cout<<" ������"<<abs->personarr[index].name<<" �Ա�"<<(abs->personarr[index].gender==1?"��":"Ů")<<" ��ϵ��ʽ��"<<abs->personarr[index].number
			<<" סַ��"<<abs->personarr[index].address<<" ���䣺"<<abs->personarr[index].age<<endl;
	else
		cout<<"���޴���"<<endl;
	
	system("pause");
	system("cls"); //����
}
//�޸���ϵ��
void modifyperson (Addressbooks *abs )
{
	cout<<"����Ҫ�޸ĵ���ϵ������"<<endl;

	string name ;
	cin >> name ;
	int index  = isExist(abs,name);
	if (index != -1)
	{
		cout<<"��ǰ��Ϣ:"<<endl;
		cout<<"*********************************************************\t"<<endl;
		cout<<" ������"<<abs->personarr[index].name<<" �Ա�"<<(abs->personarr[index].gender==1?"��":"Ů")<<" ��ϵ��ʽ��"<<abs->personarr[index].number
			<<" סַ��"<<abs->personarr[index].address<<" ���䣺"<<abs->personarr[index].age<<endl;
		cout<<"*********************************************************\t"<<endl;
		cout<<"����������"<<endl;
		string  name;
		cin>>name;
		abs->personarr[index].name =name;
		while(1)
		{
			int gender =0;
			cout<<"�����Ա�\n1----��    2----Ů"<<endl;
			cin>>gender;
			if (gender==1||gender==2)
			{
				abs->personarr[index].gender =gender;
				break;
			}
			else 
				cout<<"��������"<<endl;
		}
		cout<<"�������ֻ���"<<endl;
		string number;
		cin>>number;
		abs->personarr[index].number = number;

		cout<<"����������"<<endl;
		int age;
		cin>>age;
		abs->personarr[index].age = age;

		cout<<"������סַ"<<endl;
		string address;
		cin>>address;
		abs->personarr[index].address = address;

		cout<<"�޸ĳɹ�"<<endl;


	}
	else
		cout<<"���޴���"<<endl;

	system("pause");
	system("cls"); //����
}
//�����ϵ��
void clearPerson(Addressbooks *abs)
{
	cout<<"�Ƿ�ȷ�������ϵ�ˡ�Y/N��"<<endl;
	char str;
	cin >>str;
	if (str =='Y' || str =='y')
		{
			abs->size =0;
			cout<<"ͨѶ¼�����"<<endl;
		}	
	else 
		cout<<"ɾ��ʧ��"<<endl;

	system("pause");
	system("cls"); //����
}



int main( )
{
	Addressbooks abs;
	abs.size = 0;
	int x = 0;
	while(1)
	{
		showMenu();
	
		cin>>x;

		switch(x)
		{
			case 1: //���
				addperson(&abs); //��ַ����
				break;
			case 2: // ��ʾ
				display(&abs,abs.size);
				break;
			case 3: //ɾ��
				{
					//cout <<"����Ҫɾ������ϵ��"<<endl;
					//string name;
					//cin >> name;
					// if (isExist(&abs,name)==-1)
					// {
					//	 cout<<"���޴���"<<endl;
					// }
					// else 
					// {
					//	 cout<<"�ҵ���ϵ��"<<endl;
					// }
					deleteperson(&abs);
					break;
				}
			case 4: //����
				findperson(&abs);
				break;
			case 5://�޸�
				modifyperson(&abs);
				break;
			case 6: //���
				clearPerson(&abs);
				break;
			case 0:
					cout<<"�˳�ϵͳ�ɹ�"<<endl;
					system("pause");
					return 0;
					break;
			default:
				cout<<"�������"<<endl;
			}
		}
		return 0;
}