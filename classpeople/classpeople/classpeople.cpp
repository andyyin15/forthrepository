// classpeople.cpp : �������̨Ӧ�ó������ڵ㡣
//�ٶ�����Ļ������ݰ������֤�š��������Ա�ͳ������ڣ�
//�������еĳ������ֶ������ݣ����ѧ����ְҵ��
//�������еĵ�Ա�ֶ�һ�����ݣ���Ա���
//��Ҫ���������࣬�ó�������̳о����࣬����Ա��̳г������࣬��Ҫ����ÿ�����ж��ṩ���������������Ĺ��ܡ�


#include "stdafx.h"

#include<string>
#include<iostream>
using namespace std;

/*
*	������
*/
class People
{
private:
    char id[19];	//���֤��
    char name[11];	//����
    char sex[4];	//�Ա�
    char birth[11]; //��������

public:
    void input() {
        cout << "�밴˳�����֤�š��������Ա𡢳�������--�ûس����������������Ϣ��" << endl;
        cin >> id >> name >> sex >> birth;
    }

    void output() {
        cout << id << ' ' << name << ' ' << sex << ' ' << birth << endl;
    }
};

/*
*	������
*/
class Adult : public People {
private:
    char education[11];	//���ѧ��
    char job[11];		//ְҵ
public:
    void input() {
        People::input();
        cout << "���������ѧ����ְҵ���ûس�������:" << endl;
        cin >> education >> job;
    }

    void output() {
        People::output();
        cout << education << ' ' << job << endl;
    }
};

/*
*	��Ա��
*/
class Party : public Adult {
private:
    char parties[15]; //��Ա���
public:
    void input() {
        Adult::input();
        cout << "�����뵳Ա���:" << endl;
        cin >> parties;
    }
    void output() {
        cout << "/n/r�����Ա��Ϣ��" << endl;
        Adult::output();
        cout << parties << endl;
    }
};

// �������
void main()
{
    // ���Ե�Ա�ࣨ���̳й�ϵ����һ����Ծ����ࡢ�����ࣩ
    Party party;
    party.input();
    party.output();
    system("pause");
}
