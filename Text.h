#pragma once
#include "Figure.h"
#include "Point.h"
#include "Font.h"
#include <string>

class Text : public Figure 
{
private:
    Point location;
    std::string message;
    Font font;

public:
    Text(const Point p = {0, 0}, const std::string m = "", const Font f = Font());

    void setFont(const Font& f) { font = f; }
    std::string ToString() const override;
    
    static Text read(std::istream& is);
};