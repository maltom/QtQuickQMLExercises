#ifndef RANDOMNUMBERGENERATOR_H
#define RANDOMNUMBERGENERATOR_H

#include <QObject>

class RandomNumberGenerator : public QObject
{
    Q_OBJECT
public:
    explicit RandomNumberGenerator( QObject* parent = nullptr );

signals:
    void sendRandomNumber( int random );

public slots:
    void receiveRandomNumberQuery();
};

#endif // RANDOMNUMBERGENERATOR_H
