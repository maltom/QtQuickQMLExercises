#include "randomnumbergenerator.h"

#include <QRandomGenerator>

RandomNumberGenerator::RandomNumberGenerator( QObject* parent ) : QObject( parent ) {}

void RandomNumberGenerator::receiveRandomNumberQuery()
{
    emit sendRandomNumber( QRandomGenerator::global()->generate() );
}
