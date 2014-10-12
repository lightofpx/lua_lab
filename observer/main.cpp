#include "observer/ObserverBlog.h"
#include "BlogCsdn.h"

int main()
{
         //   Blog *blog = new BlogCSDN("wuzhekai1985"); 
    Blog* blog = new BlogCsdn("lightofpx");
    Observer* observer1 = new ObserverBlog("sxj", blog);
    blog->attach(observer1);
    blog->setStatus("write code observer");
    blog->notify();
    delete blog;
    delete observer1;
    return 0;
}
