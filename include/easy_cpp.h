//EasyCpp
//Created by KikoMira

#pragma once

#include <iostream>
#include <string>
#include <math.h>
#include <cmath>

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

    bool And(bool a, bool b) {
    return a && b;
    }

    std::string TableConcat(const std::vector<std::string>& elements, const std::string& separator) {
    std::ostringstream result;
    for (const auto& element : elements) {
        result << element << separator;
    }
    return result.str();
    }


}
