// fstreamTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <fstream>   
using namespace std;
int main()
{
    ofstream myfile("c://1.txt", ios::out | ios::trunc);
    myfile << "U love C++" << endl;
    myfile.close();
    system("pause");
    return 0;
}

//#include <iostream>  
//#include <fstream>  
//using namespace std;
//int main()
//{
//    ofstream myfile("e://1.txt", ofstream::app);
//    if (myfile.fail())
//    {
//        cout << "文件创建失败！" << endl;
//        exit(-1);
//    }
//    myfile << " Cobing" << endl;
//    myfile.close();
//    system("pause");
//    return 0;
//}