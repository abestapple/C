#include <stdio.h>
#include <stdlib.h>
union name{
   int a;
   char b;
   double c;
};
enum color{
   Red,Blue,Pink,Yellow
    };
int main()
{
    enum color C;
    scanf("%d",&C);
    switch(C)
    {
    case Red:
        printf("��ɫ�Ǻ�ɫ");
        break;
    case Blue:
        printf("��ɫ����ɫ");
        break;
    case Pink:
        printf("��ɫ�Ƿۺ�ɫ");
        break;
    case Yellow:
        printf("��ɫ�ǻ�ɫ");
        break;
    }
}
