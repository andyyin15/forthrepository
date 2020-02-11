// classpeople.cpp : 定义控制台应用程序的入口点。
//假定居民的基本数据包括身份证号、姓名、性别和出生日期，
//而居民中的成年人又多项数据：最高学历和职业，
//成年人中的党员又多一项数据：党员类别。
//现要求建立三个类，让成年人类继承居民类，而党员类继承成年人类，并要求在每个类中都提供有数据输入和输出的功能。


#include "stdafx.h"

#include<string>
#include<iostream>
using namespace std;

/*
*	居民类
*/
class People
{
private:
    char id[19];	//身份证号
    char name[11];	//姓名
    char sex[4];	//性别
    char birth[11]; //出生日期

public:
    void input() {
        cout << "请按顺序（身份证号、姓名、性别、出生日期--用回车隔开）输入居民信息：" << endl;
        cin >> id >> name >> sex >> birth;
    }

    void output() {
        cout << id << ' ' << name << ' ' << sex << ' ' << birth << endl;
    }
};

/*
*	成人类
*/
class Adult : public People {
private:
    char education[11];	//最高学历
    char job[11];		//职业
public:
    void input() {
        People::input();
        cout << "请输入最高学历和职业（用回车隔开）:" << endl;
        cin >> education >> job;
    }

    void output() {
        People::output();
        cout << education << ' ' << job << endl;
    }
};

/*
*	党员类
*/
class Party : public Adult {
private:
    char parties[15]; //党员类别
public:
    void input() {
        Adult::input();
        cout << "请输入党员类别:" << endl;
        cin >> parties;
    }
    void output() {
        cout << "/n/r输出党员信息：" << endl;
        Adult::output();
        cout << parties << endl;
    }
};

// 程序入口
void main()
{
    // 测试党员类（按继承关系可以一起测试居民类、成人类）
    Party party;
    party.input();
    party.output();
    system("pause");
}
