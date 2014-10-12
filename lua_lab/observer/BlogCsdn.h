#ifndef OBSERVSER_BLOGCSDN_H_
#define OBSERVSER_BLOGCSDN_H_
#include "observer/Blog.h"

class BlogCsdn:public Blog
{
public:
    BlogCsdn(const string name):m_name(name)
    {
    }
    ~BlogCsdn()
    {
    }
    void setStatus(const string& s);
    string getStatus()
    {
       return m_status;
    }
private:
    string m_name;
};
#endif //OBSERVSER_BLOGCSDN_H_
