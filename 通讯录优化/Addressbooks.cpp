#include "Addressbooks.h"

Addressbooks::Addressbooks()
{
	ifstream ifs;
	ifs.open(File_Name, ios::in);

	char ch; //���ڽ���һ���ַ��ж��ļ��Ƿ�������
	ifs >> ch;
	//�ļ�������
	if (!ifs.is_open())
	{
		cout << " �ļ������� " << endl;
		this->m_num = 0;
		this->p_array = NULL;
		this->file_empty = true;
		ifs.close();
		return;
	}
	else if (ifs.eof())
	{
		cout << "�ļ�����Ϊ��" << endl;
		this->m_num = 0;
		this->p_array = NULL;
		this->file_empty = true;
		ifs.close();
		return;
	}
	else
	{
		//�ļ�����������
		int num = this->get_num();
		//cout << "����Ϊ" << num << endl;
		this->m_num = num;

		this->p_array =  new Person *[num]; //��Ҫ���ٿռ�
		this->init();
		//��ʾ����

		
	}
}

Addressbooks::~Addressbooks()
{
	if (this->p_array != NULL)
	{
		delete[] this->p_array;
		this->p_array = NULL;
	}
}

void Addressbooks::show_menu()
{
	cout << "*********************" << endl;
	cout << "0�˳�" << endl;
	cout << "1����" << endl;
	cout << "2��ʾ" << endl;
	cout << "3ɾ��" << endl;
	cout << "4����" << endl;
	cout << "5���" << endl;
}

void Addressbooks::exit_system()
{
	cout << "�˳�ϵͳ" << endl;
	exit(0);
}
void Addressbooks::save_data()
{
	ofstream ofs;
	ofs.open(File_Name, ios::out);   //д�ļ�
	for (int i = 0;i < this->m_num;i++)
	{
		ofs << this->p_array[i]->name << " " << this->p_array[i]->number << endl;
	}
	ofs.close();
}
void Addressbooks::add_Person()
{
		cout << "����Ҫ��ӵ�����������"<< endl;
		int add_num = 0;
		cin >> add_num;
		
		if (add_num > 0)
		{
			int new_size = this->m_num + add_num; //�¿ռ��С
			//���ٿռ�
			Person** newspace = new Person * [new_size];
			if (this->p_array != NULL)
			{
				for (int i = 0;i < this->m_num;i++)
				{
					newspace[i] = this->p_array[i];
				}
			}
			else
			{
				cout << "array Ϊ��" << endl;
			}

			//�������
			for (int  i = 0; i < add_num; i++)
			{
				string name;
				string number;
				cout << "����������__";
				cin >> name;
				cout << "������ ����__";
				cin >> number;
				Person * p = new Person;
				p->name = name;
				p->number = number;
				newspace[this->m_num+i] = p;
			}
			delete[] this->p_array;
			this->p_array = newspace;
			this->m_num = new_size;
			this->save_data();
			this->file_empty = false;
		}
		else
		{
			cout << "��������" << endl;
		}
}

int Addressbooks::get_num()
{
	ifstream ifs;
	ifs.open(File_Name, ios::in);
	string name;
	string number;
	int num = 0;
	while (ifs>>name&&ifs>>number)
	{
		//
		num++;
	}
	ifs.close();
	return num;
}

void Addressbooks::init()
{
	ifstream ifs;
	ifs.open(File_Name, ios::in);
	string name;
	string number;
	int num = 0;
	while (ifs >> name && ifs >> number)
	{
		//
		Person* p = new Person(name, number);
		this->p_array[num] = p;
		num++;
	}
	ifs.close();
}

void Addressbooks::show()
{
	if (this->file_empty)
	{
		cout << "�ļ�Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_num; i++)
		{
			this->p_array[i]->show_info();
		}
	}
}
int Addressbooks::is_exist()
{
	cout << "��������" << endl;
	string name;
	cin >> name;
	int index = -1;
	for (int i = 0; i < this->m_num; i++)
	{
		if (this->p_array[i]->name == name)
		{
			index = i;
			break;
		}
	}
	return index;
}

void Addressbooks::del_person()
{
	cout << "����ɾ��......" << endl;
	int index = this->is_exist();
	if (index== -1)
	{
		cout << "��ְ�� ������" << endl;
	}
	else
	{
		for (int  i = index; i < this->m_num; i++)
		{
			this->p_array[i] = this->p_array[i + 1];
		}
		this->m_num--;
		this->save_data();
		cout << "ɾ���ɹ�" << endl;
	}
}

void Addressbooks::find()
{
	cout << "���ڲ���......" << endl;
	int index = this->is_exist();
	if (index == -1)
	{
		cout << "��ְ��������" << endl;
	}
	else
	{
		cout << "���ҵ�,��Ϣ���£�" << endl;
		this->p_array[index]->show_info();
	}
}

void Addressbooks::destory()
{
	cout << "��ȷ��ɾ����? Y/N" << endl;
	char select = 'N';
	cin >> select;
	if (select == 'N' || select == 'n')
	{
		cout << "ɾ��ʧ�ܣ����ѡ���ǣ� " << select << endl;
	}
	else if (select == 'Y' || select == 'y')
	{
		delete[] this->p_array;
		for (int i = 0; i < this->m_num; i++)
		{
			this->p_array[i] = NULL;
		}
		this->m_num = 0;
		this->file_empty = true;
		//�ļ�����
		this->save_data();
		cout << "��ճɹ�!" << endl;
	}
	else
	{
		cout << "������������������" << endl;
	}


}