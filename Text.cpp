#include "Text.h"
#include <sstream>

Text::Text(const Point p, const std::string m, const Font f) : location(p), message(m), font(f) {}

std::string Text::ToString() const 
{
    std::stringstream ss;
    ss << "Text: '" << message << "' at " << location << " with " << font;
    return ss.str();
}

Text Text::read(std::istream& is)
{
    Point p;
    std::string m;
    std::cout << "Enter coordinates (x y): ";
    is >> p;
    std::cout << "Enter text: ";
    is.ignore();
    std::getline(is, m);
    return Text(p, m);
}