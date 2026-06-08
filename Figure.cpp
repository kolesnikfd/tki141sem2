#include "Figure.h"

std::ostream& operator<<(std::ostream& os, const Figure& f) 
{
    os << f.ToString();
    return os;
}