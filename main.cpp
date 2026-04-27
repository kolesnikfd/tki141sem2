#include <iostream>
#include "Text.h"

int main() 
{
    try 
    {
        Point p = {10, 20};
        Text myText(p, "Hello, C++!");
        std::cout << "Original: " << myText << std::endl;

        Font newFont("Times New Roman", Color(0, 0, 255), 16);
        myText.setFont(newFont);
        std::cout << "Modified: " << myText << std::endl;

        Text userText = Text::read(std::cin);
        std::cout << "User input result: " << userText << std::endl;

    } catch (const std::exception& e) 
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "\nPress Enter to exit..." << std::endl;
    std::cin.clear(); 
    std::cin.get(); 
    
    return 0;
}