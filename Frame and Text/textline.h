#ifndef TEXTLINE_H__
#define TEXTLINE_H__
#include "characterstyle.h"
#include <string>
#include <list>
#include <map>

class TextLine{
/*A line should have a bunch of characters and length and height
*If one line’s length is wider than the width of frame, create a new line
*/
private:
    //Every index of char in string should have a characterStyle
    std::string lineStyle;
    std::list<char> lineContent;//The list contains whole text content
    double width;
    double height;
public:
    TextLine();
    void insert(char *s);//insert a string with same style
    void insert(char& c);//inset a character
    void insertSpace(); // insert a space
    bool isFull(double);
    void deleteCharacter(int i);//Delete Character at index i


};

#endif // TEXTLINE_H
