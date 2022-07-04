#ifndef ILISTABLE_H
#include ILISTABLE_H

#include <IComposableOfListable.h>

class IListable : public IComposableOfListable
{
private:
    /* data */
public:
    IListable(/* args */);
    ~IListable();
};

#endif // ILISTABLE_H