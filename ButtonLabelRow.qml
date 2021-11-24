import QtQuick 2.12
import QtQuick.Controls 2.12

Item {
    id: item
    width: row.width
    //signal requestRandomNumber()

    function receiveRandomNumber(value)
    {
        rowLabel.text = prepareText(value)
    }
    function prepareText(value)
    {
        return "Random number is: " + value
    }

    Row
    {
        id: row
        spacing: 20
        Button
        {
            id: rowButton
            text: "Get random value"
            height: 30
            width: 150
            onClicked:
            {
                //item.requestRandomNumber()
                randomGenerator.receiveRandomNumberQuery()
            }
        }
        Label
        {
            text: "Not clicked yet!"
            horizontalAlignment: "AlignHCenter"
            verticalAlignment: "AlignVCenter"
            id: rowLabel
            width: 200
            height: rowButton.height
        }
    }
}
