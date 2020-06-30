// strblob.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include <string>
using namespace std;

typedef shared_ptr<vector<string>> blob_type;

class StrBlob
{
public:
    StrBlob();
    //StrBlob() :data(make_shared<vector<string>>()) {};
    //StrBlob(blob_type li) :data(make_shared<vector<string>>(li)) {};
    string front();
    string &back();
    void pushback(string t);
    ~StrBlob();


private:
    shared_ptr<vector<string>> data;
};


string StrBlob::front()
{
    return data->front();
}

string& StrBlob::back()
{
    return data->back();
}

void StrBlob::pushback(string t)
{
    data->push_back(t);
}

StrBlob::~StrBlob()
{
    
}

StrBlob::StrBlob()
{
     data = make_shared<vector<string>>();
}


int main()
{

    StrBlob bob;
    bob.pushback("qwe");
    cout << bob.front() << endl;;
    system("pause");
    return 0;
}

