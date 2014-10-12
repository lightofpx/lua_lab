#include "observer/Blog.h"
#include "observer/Observer.h"

void Blog::notify()
{
    for(list<Observer*>::iterator iter = m_observers.begin(); iter != m_observers.end(); ++iter)
	(*iter)->Update();
}
