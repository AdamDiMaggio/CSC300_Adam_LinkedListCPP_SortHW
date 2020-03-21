#include "LinkedList.hpp"
#include <iostream>
#include <ctime>

int main()
{
    std::srand(std::time(nullptr)); //use current time as seed for rng
    LinkedList* ll = new  LinkedList();
    for(int i = 0; i< 4; i++)
    {
       ll->addEnd(std::rand() % 1000);
    }
    
    ll->sort();
    

 
    
}