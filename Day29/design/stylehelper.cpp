#include "stylehelper.h"

QString StyleHelper::getMainWidgetStyle()
{
    return "QWidget{"
           "background-color:rgb(255, 230, 242);"
           "}";
}

QString StyleHelper::getStartButtonsStyle()
{
    return "QPushButton{"
           "color:#fff;"
            "background: none;"
            "border: none;"
            "border-radius:25px;"
            "background-color: rgb(20, 20, 153);"
           "}";
}

QString StyleHelper::getStartFontStyle()
{
    return "QLabel{"
           "color: rgb(20, 20, 153);"
           "}";
}
