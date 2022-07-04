#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <IListable.h>

class File : public IListable
{
private:
    std::string m_nodeName;
public:
    File(std::string nodename);
    void list(int depth);
    ~File();
};

#endif //FILE_H