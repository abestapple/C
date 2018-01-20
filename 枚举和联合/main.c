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
        printf("颜色是红色");
        break;
    case Blue:
        printf("颜色是蓝色");
        break;
    case Pink:
        printf("颜色是粉红色");
        break;
    case Yellow:
        printf("颜色是黄色");
        break;
    }
}
