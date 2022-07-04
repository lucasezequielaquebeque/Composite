#include <Folder.h>

Folder::Folder(std::string node_name)
{
    m_nodeName = node_name;
}

Folder::~Folder(){}

void Folder:: list(int depth){
    std::string newStr(depth, '-');
    std::cout << newStr << m_nodeName << "depth: "<< depth <<std::endl;

    for (IListable* currentChild : m_children)
    {
        if(currentChild !=0)
        {
            currentChild->list(depth + 1);
        }
    }
    
}

void Folder::add(IListable*component)
{
    m_children.push_back(component);
}

void Folder::remove(IListable*component)
{
    m_children.erase(std::remove(m_children.begin(),m_children.end(),component),m_children.end());
}

