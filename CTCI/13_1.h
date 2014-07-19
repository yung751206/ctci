//
//  13_1.h
//  CTCI
//
//  Created by Edison on 7/19/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#ifndef __CTCI___3_1__
#define __CTCI___3_1__

#include <fstream>
#include <vector>
#include <string>


class readFile{
public:
    readFile();
    ~readFile();
    void outputLastKLines(int k);
private:
    std::ifstream output;
    std::ofstream file;
    std::vector<std::string> lines;
};
#endif /* defined(__CTCI___3_1__) */
