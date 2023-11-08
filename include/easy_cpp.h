//EasyCpp
//Created by KikoMira

#pragma once

#include <iostream>
#include <string>

using namespace std;

namespace Easy_Cpp
{
    void print(const string& value)
    {
        cout << value << endl;
    }

    auto var(int value)
    {
        return value;
    }

    auto tvar(string value)
    {
        return value;
    }

}
