#include<iostream>
#include "node.hh"

int main()
{
  data* data1{new data(1)};
  data* data2{new data(2)};
  data* data3{new data(3)};
  data* data4{new data(4)};
  data* data5{new data(5)};

  node* node1{new node(data1)};
  node* node2{new node(data2)};
  node* node3{new node(data3)};
  node* node4{new node(data4)};
  node* node5{new node(data5)};

  node1->nextNode = node2;
  node2->nextNode = node3;
  node3->nextNode = node4;
  node4->nextNode = node5;

  node* currentNode{node1};

  while (currentNode)
  {
    std::cout << "Node : " << currentNode->GetData()->GetValue() << std::endl;
    currentNode = currentNode->nextNode;
  }

  //std::cout << "node1: " << node1->GetData()->GetValue() << std::endl;

  //std::cout << "data value: " << data1->GetValue() << std::endl;
  std::cin.get();
  return 0;
}