//
//  main.cpp
//  selfCodeBox
//
//  Created by ggod on 2016/11/8.
//  Copyright © 2016年 ggod. All rights reserved.
//

#include <iostream>
#include "Singleton.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    Singleton* SingletonInstance = Singleton::getInstance();
    SingletonInstance->setSingleInt(5);
    SingletonInstance->setSingleString("string");
    int intValue = SingletonInstance->getSingleInt();
    string stringValue = SingletonInstance->getSingleString();
    cout << intValue << stringValue << endl;
    return 0;
}
