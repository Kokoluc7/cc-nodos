#include "node.hh"

node::node(data*& data)
{
    this->data = data;
}

node::~node()
{
};

data* node::GetData() const
{
    return data;
}