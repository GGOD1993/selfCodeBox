//
//  Singleton.cpp
//  selfCodeBox
//
//  Created by ggod on 2016/11/8.
//  Copyright © 2016年 ggod. All rights reserved.
//

#include "Singleton.hpp"
Singleton* Singleton::m_singleton = nullptr;
Singleton::Singleton()
{
    _singleInt = 0;
    _singleString = "";
}
Singleton::~Singleton()
{
}

Singleton* Singleton::getInstance()
{
    if(nullptr == m_singleton)
    {
        m_singleton = new Singleton();
    }
    return m_singleton;
}

int Singleton::getSingleInt()
{
    return _singleInt;
}

void Singleton::setSingleInt(int singleInt)
{
    _singleInt = singleInt;
}

string Singleton::getSingleString()
{
    return _singleString;
}

void Singleton::setSingleString(string singleString)
{
    _singleString = singleString;
}

