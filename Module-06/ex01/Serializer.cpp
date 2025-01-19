#include "Serializer.hpp"

// for the canonical form

Serializer::Serializer() {}
Serializer::Serializer(const Serializer &other) 
{
    (void) other;
}

Serializer & Serializer::operator=(const Serializer &other) { 
    (void) other;
    return *this;
}

Serializer::~Serializer() {}