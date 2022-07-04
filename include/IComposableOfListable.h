#ifndef ICOMPOSABLEOFLISTABLE_H
#define ICOMPOSABLEOFLISTABLE_H
#include "./IListable.h"

class IComposableOfListable
{
private:
    
public:
   virtual void add(IListable* component) = 0 ;
   virtual void remove(IListable* component) = 0 ;
   ~IComposableOfListable(){};
};



#endif //ICOMPOSABLEOFLISTABLE_H