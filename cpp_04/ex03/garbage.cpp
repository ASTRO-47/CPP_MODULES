#include "garbage.hpp"

void Gar::add(AMateria* ptr) 
{
    node* newnode = new node;
    newnode->ptr = ptr;
    newnode->next = head;
    head = newnode;
}

void Gar::clear() 
{
    while (head) {
        node* temp = head;
        delete head->ptr; 
        head = head->next;
        delete temp; 
    }
}

Gar::~Gar()
{
    this->clear();
}

Gar::Gar()
{
    this->head = NULL;
}

//the copy const and the copy assign