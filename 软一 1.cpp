#include<stdio.h>

#include<string.h>

#include<stdlib.h>//C语言标准库函数的定义



struct data



{

    

    int number;

    char name[10];

    char sex[10];

    int birth;

    char class[20];

    char phone[20];

    int judge1;

    int judge2;

    int judge3;

    int judge4;

    int judge5;

    int average;

    

};



int main(int argc,const char * argv[])/*这是main函数的参数，可写可不写,可以在dos

                                       系统下运行，观察argc记录了命令行中命令与参

                                       数的个数char *argv【argc】可取命令及参数的字符*/



{

    struct data a[200];//定义一个足够大的结构数组

    

    char ch;

    

    //控制文件类

    FILE *fp1;//声明文件指针1

    FILE *fp2;//声明文件指针2

    

    int fclose(FILE *fp1);//定义关闭文件指针1

    int fclose(FILE *fp2);//定义关闭文件指针2

    

    

    fp1 =fopen("/Users/s20171105127/Desktop/student.csv","r+");//'r+'已读/写的方式打开文件，相当于'r'与'w'方式的结合

    fp2 =fopen("/Users/s20171105127/Desktop/student1.csv","w+");//'w+'已读/写的方式打开文件，相当于'r'与'w'方式的结合，如果文件已存在，则覆盖原文件。
