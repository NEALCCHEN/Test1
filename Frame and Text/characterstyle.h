#ifndef CHARACTERSTYLE_H__
#define CHARACTERSTYLE_H__
#include <string>
#include <QFontInfo>
#include <QFont>


class CharacterStyle: public QFont{
//This class represent a single character and it has its own different style
private:
    std::string language;
    int color;
    std::string font;
    double  size;
    int bold;
    bool italic;
    bool underline;
public:
    CharacterStyle();

};

#endif // CHARACTERSTYLE_H
