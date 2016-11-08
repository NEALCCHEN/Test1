#include "frame.h"
#include<iostream>
#include<fstream>
#include <sstream>
using namespace std;

Frame::Frame(double height,double width,bool LtoR,bool horizontal):border(height,width),height(height),width(width),LeftToRight(LtoR),horizontal(horizontal)
{
}


void Frame::clear(){

}//Reset all information to defalut value
void Frame::insert(std::string & s, CharacterStyle cs, bool withLink){
    if(withLink==1){
        cout<<"Please tell me the route of the file:"<<endl;
        ifstream in;
        string filename;
        getline(cin,filename,'\n');
        in.open(filename);
        ostringstream ostr;
        char c;
        while(in.get(c)){
        ostr.put(c);
        }
        s=ostr.str();
        in.close();
    }else{
        cout<<"Please type in the string:"<<endl;
        cin>>s;
    }
}//insert a string with a link or not
void Frame::insert(char & c,   CharacterStyle cs){
    cout<<"Please type in the character"<<endl;
    cin>>c;
}//insert a character with certain style
void Frame::insertSpace(){

} // insert a space
void Frame::insertReturn(){

}// insert return
