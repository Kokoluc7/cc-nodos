#pragma once
#include "data.hh"

class node
{
private:
   data* data{nullptr};
public:
    node* nextNodo{nullptr};
    node(Data*& data);
    ~node();
    data* GetData() const;
};


