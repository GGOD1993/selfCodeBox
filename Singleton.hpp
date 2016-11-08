//
//  Singleton.hpp
//  selfCodeBox
//
//  Created by ggod on 2016/11/8.
//  Copyright © 2016年 ggod. All rights reserved.
//

#ifndef Singleton_hpp
#define Singleton_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Singleton
{
public:
    static Singleton* getInstance();
    int getSingleInt();
    void setSingleInt(int singleInt);
    string getSingleString();
    void setSingleString(string singleString);
private:
    Singleton();
    ~Singleton();
    static Singleton* m_singleton;
    int      _singleInt;
    string   _singleString;
};

#endif /* Singleton_hpp */
