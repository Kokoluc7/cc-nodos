#include "data.hh"

data::data(int value)
{
    this->value = value;
}

data::~data()
{
}

int data::GetValue() const
{
    return value;
}