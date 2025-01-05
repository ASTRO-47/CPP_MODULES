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
    while (head) 
    {
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

Gar::Gar(const Gar &other)
{
    head = nullptr;
    node* current = other.head;
    while (current) 
    {
        add(current->ptr);  // Using add function to copy the pointer
        current = current->next;
    }
}

Gar& Gar::operator=(const Gar &other)
{
    if (this == &other)
        return *this;
 
    node* current = head;
    while (current) 
    {
        node* temp = current;
        current = current->next;
        delete temp;
    }
    head = NULL;
    current = other.head;
    while (current) 
    {
        add(current->ptr);
        current = current->next;
    }
    return *this;
}
