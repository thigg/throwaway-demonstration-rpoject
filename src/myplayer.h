#ifndef MYPLAYER_H
#define MYPLAYER_H

#include <QObject>

class MyPlayer : public QObject
{
    Q_OBJECT
public:
    MyPlayer();
    Q_INVOKABLE void play();
};

#endif // MYPLAYER_H
