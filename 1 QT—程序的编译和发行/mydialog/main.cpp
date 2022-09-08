#include<QApplication>  //应用程序类
#include<QDialog>
#include<QLabel>


int main(int argc,char *argv[])
{
       QApplication a(argc, argv);  //创建一个应用程序类
       QDialog w; //创建一个对话框 w
       QLabel mylabel(&w); //创建一个标签 mylabel 在w上
       mylabel.setText("Hello QT!");//设置文本

       w.show();//显示w

       w.resize(400,300);
        mylabel.move(120,120);

       return a.exec();//exec是时间循环，a应用程序消息循环，相当于while，消息监听处理
}

