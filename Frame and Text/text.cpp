#include "text.h"

Text::Text():linespace(1.0)
{

}



void Text::insert(char *s){
    if(linelist.empty()){
        TextLine newline;
        newline.insert(s);
        linelist.push_back(newline);
    }
    else{//TODO: should consider the situation that the last line is not full but after adding new string then it's
        linelist.back().insert(s);
    }
}//insert a string
void Text::insert(char& c){
    if(linelist.empty()||linelist.back().isFull(width)){
        TextLine newline;
        newline.insert(c);
        linelist.push_back(newline);
    }
    else{
        linelist.back().insert(c);
    }
}//inset a character
void Text::insertSpace(){

} // insert a space
void Text::insertReturn(){

}//insert return
void Text::deleteLine(int i){

}//Delete line at index i
