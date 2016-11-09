#include "textline.h"
#include <QString>
#include <QFontMetrics>

TextLine::TextLine():lineStyle("LeftAlign")
{

}

void TextLine::insert(char *s){
    QFont myFont;
    QString mystring(s);
    QFontMetrics fm(myFont);
    int temp=fm.width(mystring);
    width+=temp;
}//insert a string with same style
void TextLine::insert(char &c){
    QFont myFont;
    QChar mychar(c);
    QFontMetrics fm(myFont);
    int temp=fm.width(mychar);
    width+=temp;
}//inset a character
void TextLine::insertSpace(){

} // insert a space
void TextLine::deleteCharacter(int i){

}//Delete Character at index i
bool TextLine::isFull(double w){
    if(width>=w){
        return true;
    }
    return false;
}
