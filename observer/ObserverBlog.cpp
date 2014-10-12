#include "observer/ObserverBlog.h"
#include <iostream>
void ObserverBlog::Update()
{
    string status = m_blog->getStatus();
    std::cout<<m_name<<"------"<<status<<std::endl;
}
