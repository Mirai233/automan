import QtQuick 2.11
import QtQuick.Window 2.11

Rectangle{
id:rect1
width:400
height:280
//灰色0.9透明度
color:Qt.rgba(0.6,0.6,0.6,0.9)


    MouseArea{
    id: dragRegion
    anchors.fill: parent
    property point clickPos:"0,0"
        onPressed:{
        clickPos =Qt.point(mouse.x,mouse.y)
        }
        onPositionChanged:{
        //鼠标偏移量
        var delta =Qt.point(mouse.x-clickPos.x, mouse.y-clickPos.y)
        //如果mainwindow继承自QWidget,用setPos
        mainwindow.setX(mainwindow.x+delta.x)
        mainwindow.setY(mainwindow.y+delta.y)
        }
    }
}
