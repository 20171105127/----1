#include<stdio.h>

#include<string.h>

#include<stdlib.h>//C语言标准库函数的定义

#define N 20



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

    

    //控制循环体

    int i=0;

    int n;

    

    //读取 student.csv文件

    if(fp1==NULL)

    {

        printf("打开文件错误，要打开的文件可能错误！\n");

        exit(-1);

    }

    else

    {

        ch=fgetc(fp1);   //使用fgetc函数读取fp1文件中的一个字符串

        while(ch!=EOF){   //EOF用来判断文件是否已经读到文件尾

            printf("%c",ch);

            fputc(ch,fp2);   //把ch变量的内容写到fp2指向的文件student1.csv中

            ch=fgetc(fp1);   //继续读写下一个字符

        }

        

        fclose(fp1);//关闭fp1所指向的文件

        

        fp1 =fopen("/Users/s20171105127/Desktop/student.csv","r+");//重新打开fp1

        

        

        //读取 student.csv文件中的裁判数据

        if(fp1==NULL)

        {

            printf("打开文件错误，要打开的文件可能错误！\n");

            exit(-1);

        }

        else

        {

            fscanf(fp1,"%*[^\n]");//跳过所有字符 直到换行符为止。

            for(i=1;i<N&&!feof(fp1);i++)

            {

                fscanf(fp1,"%d,%[^,],%[^,],%[^,],%[^,],%[^,],%d,%d,%d,%d,%d",&a[i].number,

                       &a[i].name,&a[i].sex,&a[i].birth,&a[i].class,&a[i].phone,&a[i].judge1,

                       &a[i].judge2,&a[i].judge3,&a[i].judge4,&a[i].judge5);

                

            }

        }

        

        n=i;//控制循环

        for(i=0;i<n;i++)

        {

            

            fprintf(fp2,"%d,%s,%s,%d,%s,%s,%d,%d,%d,%d,%d\n",a[i].number,a[i].name,a[i].sex,

                    a[i].birth,a[i].class,a[i].phone,a[i].judge1,a[i].judge2,a[i].judge3,

                    a[i].judge4,a[i].judge5);

            

        }

        