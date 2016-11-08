#include "border.h"
#include<iostream>
using namespace std;
Border::Border(double height, double width):left(width/10),right(width/10),top(height/10),down(height/10),color()
{}
void Border::Setcolor(){
    cout<<"Please determine the color of the frame:"<<endl;
    int c;
    cin>>c;
    color=c;
}

void Border::clear(){
}
