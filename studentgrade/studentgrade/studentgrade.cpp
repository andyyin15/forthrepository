// studentgrade.cpp : 定义控制台应用程序的入口点。
//有6个学生，每个学生的数据包括学号、姓名、三门课成绩，从键盘输入5个学生的数据，要求计算并输出。

//1）  每个学生三门课的总成绩

//2）  三门课每门课程的平均成绩

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
        cout << "请输入学号" << endl;
        cin >> stu[i].num;
        //stu[i].num = num;
        cout << "请输入姓名" << endl;
        cin >> stu[i].name;
        //stu[i].name = name;
        cout << "请输入语文成绩" << endl;
        cin >> stu[i].chinese;
        //stu[i].chinese = chinese;
        cout << "请输入数学成绩" << endl;
        cin >> stu[i].math;
        //stu[i].math = math;
        cout << "请输入英语成绩" << endl;
        cin >> stu[i].english;
        //stu[i].english = english;
        CHI = CHI + stu[i].chinese;
        MAT = MAT + stu[i].math;
        ENG = ENG + stu[i].math;
    }
    cout << "语文平均成绩" <<CHI/5<< endl;
    cout << "数学平均成绩" << MAT/5<<endl;
    cout << "英语平均成绩" << ENG/5<<endl;
    return 0;


}


int main()
{
    StuData();
    for (int i = 0; i <= 5; i++)
    {
        cout << "学生" << stu[i].name << "三门课的总成绩" << stu[i].chinese + stu[i].math + stu[i].english << endl;
        
    }
    system("pause");
    return 0;
}

