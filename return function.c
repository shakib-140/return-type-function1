#include<stdio.h>
#include<conio.h>

int display(int x,int y)
{
    return x+y;
};
int main()
{
    int a,b;
    printf("enter the value of a=");
    scanf("%d",&a);
    printf("enter the value of b=");
    scanf("%d",&b);
    int delta= display(a,b);
    printf("the sum is =%d",delta);

    getch();
}
