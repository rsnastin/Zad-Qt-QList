import QtQuick 2.0
import Widgets 1.0

DataContainer
{
    id: dataContaineRoot
    Grid
    {
        columns: 3
        rows : 3
        spacing: 2
        Repeater
        {
        model : dataContaineRoot.objectsList

            Rectangle
            {
                width: 100
                height: 100
                border.color: "blue"
                border.width: modelData.itemBorder

                Text
                {
                    id: mainText
                    anchors.centerIn: parent
                    text: modelData.myText
                    visible: modelData.itemId % 2 ? true : false
                }
                Text
                {
                    id: textItemId
                    anchors.top: mainText.bottom
                    anchors.horizontalCenter: parent.horizontalCenter
                    text: modelData.itemId
                }
                Rectangle
                {

                    anchors.top:textItemId.bottom
                    anchors.horizontalCenter: parent.horizontalCenter
                    width: 20
                    height: 20
                    color: "lightsteelblue"
                    visible:modelData.boolVal

                }
              }
         }
    }
}
