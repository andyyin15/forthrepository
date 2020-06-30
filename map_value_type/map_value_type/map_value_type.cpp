// map_value_type.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"



#include <iostream>
#include <map>

int main()
{
    using u_map = std::map<char, int>;
    u_map m;
    m.emplace('x', 64);

    u_map::key_type key;
    u_map::mapped_type mapped;
    u_map::value_type value;

    return 0;
}


