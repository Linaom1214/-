#pragma once  //��ֹͷ�ļ��ظ�
#include <iostream>
#include "Person.h"
#include <fstream>
#define File_Name  "data.txt"
using namespace std;
class Addressbooks
{
public:
	Addressbooks();
	~Addressbooks();
	void show_menu();
	void exit_system();
	//��¼���� ����
	Person** p_array;
	//��¼����
	int m_num;
	//������ݺ���
	void add_Person();
	//д�뱾������
	void save_data();
	//��¼�ļ�״̬
	bool file_empty;
	//��ȡ�ļ��е�������
	int get_num();
	//��ʼ��
	void init();
	//��ʾ
	void show();
	//ɾ����Ϣ
	void del_person();
	//����ְ��
	int is_exist();
	//������ʾ
	void find();
	//���
	void destory();
private:

};


