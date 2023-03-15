// fig 10.23

#include "Interface.h"
#include "Implementation.h"

Interface::Interface(int v): ptr (new Implementation(v)) 
// initialize ptr to 'point to a new Implementation obj' 
{
// empty body
}

void Interface::setValue(int v){
    ptr->setValue(v);
}

int Interface::getValue() const{
    return ptr->getValue();
}

Interface::~Interface(){
    delete ptr; 
}

