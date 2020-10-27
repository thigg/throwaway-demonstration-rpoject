#include "myplayer.h"
#include <QMediaPlayer>

MyPlayer::MyPlayer()
{

}

void MyPlayer::play(){
    qDebug("Playing!!!!---------------");
    QMediaPlayer* player = new QMediaPlayer;
    player->setMedia(QUrl("https://content.blubrry.com/thesgem/SGEM_Xtra-How_to_Think_Not_What_to_Think.mp3"));
    player->setVolume(50);
    player->play();
}
