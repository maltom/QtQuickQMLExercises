#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "randomnumbergenerator.h"

int main( int argc, char* argv[] )
{
    QCoreApplication::setAttribute( Qt::AA_EnableHighDpiScaling );

    QGuiApplication app( argc, argv );

    QQmlApplicationEngine engine;

    RandomNumberGenerator generator;

    engine.rootContext()->setContextProperty( "randomGenerator", &generator );

    const QUrl url( QStringLiteral( "qrc:/main.qml" ) );
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreated,
        &app,
        [ url ]( QObject* obj, const QUrl& objUrl ) {
            if( !obj && url == objUrl )
                QCoreApplication::exit( -1 );
        },
        Qt::QueuedConnection );
    engine.load( url );

    return app.exec();
}
