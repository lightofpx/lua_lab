#ifndef OBSERVER_OBSERVERBLOG_
#define OBSERVER_OBSERVERBLOG_
#include "observer/Blog.h"
#include "observer/Observer.h"

class ObserverBlog:public Observer
{
public:
    ObserverBlog(string name,Blog *blog): m_name(name), m_blog(blog) {}  
    ~ObserverBlog() {}  
    void Update();  //获得更新状态  
private:
    string& m_name;
    Blog* m_blog;
};
#endif //OBSERVER_OBSERVERBLOG_
