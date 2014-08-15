//
//  testClass.h
//  CTCI
//
//  Created by Edison on 7/19/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#ifndef __CTCI__testClass__
#define __CTCI__testClass__

class student{
public:
    student();
    student(float weight);
    float getweight() const;
    bool operator>=(const student &other);
    
private:
    float m_weight;
};

#endif /* defined(__CTCI__testClass__) */
