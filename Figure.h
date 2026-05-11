#pragma once
#include <string>
#include <iostream>

class Figure 
{
public:
    virtual ~Figure() = default;
    virtual std::string ToString() const = 0;
    friend std::ostream& operator<<(std::ostream& os, const Figure& f);
};