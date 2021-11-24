import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    ButtonLabelRow{
        Connections{
            target:randomGenerator
            onSendRandomNumber:{
                firstRow.receiveRandomNumber( random )
            }
        }
        id:firstRow
        anchors.centerIn: parent
    }
    Component.onCompleted: {
        console.log("Click me!");
    }
}
