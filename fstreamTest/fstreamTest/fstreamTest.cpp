// fstreamTest.cpp : �������̨Ӧ�ó������ڵ㡣
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
//        cout << "�ļ�����ʧ�ܣ�" << endl;
//        exit(-1);
//    }
//    myfile << " Cobing" << endl;
//    myfile.close();
//    system("pause");
//    return 0;
//}