#include<stdio.h>

#include<string.h>

#include<stdlib.h>//C���Ա�׼�⺯���Ķ���



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



int main(int argc,const char * argv[])/*����main�����Ĳ�������д�ɲ�д,������dos

                                       ϵͳ�����У��۲�argc��¼�����������������

                                       ���ĸ���char *argv��argc����ȡ����������ַ�*/



{

    struct data a[200];//����һ���㹻��Ľṹ����

    

    char ch;

    

    //�����ļ���

    FILE *fp1;//�����ļ�ָ��1

    FILE *fp2;//�����ļ�ָ��2

    

    int fclose(FILE *fp1);//����ر��ļ�ָ��1

    int fclose(FILE *fp2);//����ر��ļ�ָ��2

    

    

    fp1 =fopen("/Users/s20171105127/Desktop/student.csv","r+");//'r+'�Ѷ�/д�ķ�ʽ���ļ����൱��'r'��'w'��ʽ�Ľ��

    fp2 =fopen("/Users/s20171105127/Desktop/student1.csv","w+");//'w+'�Ѷ�/д�ķ�ʽ���ļ����൱��'r'��'w'��ʽ�Ľ�ϣ�����ļ��Ѵ��ڣ��򸲸�ԭ�ļ���
