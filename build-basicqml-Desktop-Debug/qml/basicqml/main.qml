import QtQuick 2.0

Rectangle {
    width: 360
    height: 360
    Text {
        color: "#2612b0"
        text: qsTr("Hello Bhargav krishna")
        horizontalAlignment: Text.AlignLeft
        font.strikeout: false
        font.underline: false
        font.pointSize: 12
        font.italic: false
        font.bold: false
        anchors.centerIn: parent
    }
    MouseArea {
        x: 8
        y: 6
        anchors.rightMargin: 0
        anchors.bottomMargin: 0
        anchors.leftMargin: 0
        anchors.topMargin: 0
        anchors.fill: parent
        onClicked: {
            Qt.quit();
        }

        MouseArea {
            id: mouseArea
            x: 78
            y: 154
            width: 194
            height: 50
        }
    }
}
