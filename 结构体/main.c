#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct date{
    int year;
    int month;
    int day
    };
struct date datewith(int year,int month,int day){
    struct date dat;
    dat.year=year;
    dat.month=month;
    dat.day=day;
    return dat;
    };
void showdate(struct date youdate){
    printf("������:%d-%d-%d\n",youdate.year,youdate.month,youdate.day);
}
struct student{
    char* name;
    int age;
    struct date birthday;
};
void showmessage(struct student stu){
    printf("������:%s\n",stu.name);
    printf("������:%d\n",stu.age);
    showdate(stu.birthday);
}
int main()
{   void showmessage(struct student stu);
    struct student xiaoming;
    xiaoming.name="�־��";
    xiaoming.age=23;
    xiaoming.birthday=datewith(1995,1,23);
    showmessage(xiaoming);
    return 0;
}
