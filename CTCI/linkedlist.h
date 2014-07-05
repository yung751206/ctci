//
//  linkedlist.h
//  CTCI
//
//  Created by Edison on 6/29/14.
//  Copyright (c) 2014 Edison. All rights reserved.
//

#ifndef CTCI_linkedlist_h
#define CTCI_linkedlist_h

class linkedlist{
public:
    linkedlist(){
        m_data = 0;
        m_root = nullptr;
    }
    ~linkedlist(){
        delete m_root;
    }
    int getData();
    void setData(int data);
    linkedlist* getRoot();
private:
    int m_data;
    linkedlist *m_root;
    
};


#endif
