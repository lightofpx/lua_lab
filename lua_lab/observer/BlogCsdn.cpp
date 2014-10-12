#include "observer/BlogCsdn.h"

void BlogCsdn::setStatus(const string& s)
{
    m_status = "CSDN notity" + m_name + s;
}
