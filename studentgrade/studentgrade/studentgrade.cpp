// studentgrade.cpp : �������̨Ӧ�ó������ڵ㡣
//��6��ѧ����ÿ��ѧ�������ݰ���ѧ�š����������ſγɼ����Ӽ�������5��ѧ�������ݣ�Ҫ����㲢�����

//1��  ÿ��ѧ�����ſε��ܳɼ�

//2��  ���ſ�ÿ�ſγ̵�ƽ���ɼ�

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<vector>
#include<string>

typedef struct
{
    string num;
    string name;
    int chinese;
    int math;
    int english;

}student;

student stu[5];

int StuData()
{
    int CHI=0, MAT=0, ENG=0;
    for (int i = 0; i <= 5; i++)
    {
        cout << "������ѧ��" << endl;
        cin >> stu[i].num;
        //stu[i].num = num;
        cout << "����������" << endl;
        cin >> stu[i].name;
        //stu[i].name = name;
        cout << "���������ĳɼ�" << endl;
        cin >> stu[i].chinese;
        //stu[i].chinese = chinese;
        cout << "��������ѧ�ɼ�" << endl;
        cin >> stu[i].math;
        //stu[i].math = math;
        cout << "������Ӣ��ɼ�" << endl;
        cin >> stu[i].english;
        //stu[i].english = english;
        CHI = CHI + stu[i].chinese;
        MAT = MAT + stu[i].math;
        ENG = ENG + stu[i].math;
    }
    cout << "����ƽ���ɼ�" <<CHI/5<< endl;
    cout << "��ѧƽ���ɼ�" << MAT/5<<endl;
    cout << "Ӣ��ƽ���ɼ�" << ENG/5<<endl;
    return 0;


}


int main()
{
    StuData();
    for (int i = 0; i <= 5; i++)
    {
        cout << "ѧ��" << stu[i].name << "���ſε��ܳɼ�" << stu[i].chinese + stu[i].math + stu[i].english << endl;
        
    }
    system("pause");
    return 0;
}

