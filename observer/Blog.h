#ifndef OBSERVER_BLOG_H_
#define OBSERVER_BLOG_H_
#include <string>
#include <list>
using std::string;
using std::list;
class Observer;
class Blog
{
public:
    Blog()
    {
    }
    virtual ~Blog()
    {
    }
    inline void attach(Observer* observer)
    {
        m_observers.push_back(observer);
    }
    inline void remove(Observer* observer)
    {
        m_observers.remove(observer);
    }
    void notify();
    virtual void setStatus(const string& s)
    {
        m_status = s;
    }
    inline virtual string getStatus()
    {
        return m_status;
    }
private:
    list<Observer*> m_observers;
protected:
    string m_status;
};

#endif //OBSERVER_BLOG_H_
