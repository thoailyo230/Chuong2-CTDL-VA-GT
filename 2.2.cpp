#include<stdio.h>
#include<conio.h>
long Giaithuat(int n)
{
    if(n==0)
    return 1;
    return Giaithuat(n-1)*n;
}
    int main()
{
int n,T;
printf("\nNhap n= ");scanf("%d,&n");
T=Giaithuat(n);
printf("T=%d,T");
getch();
return 0;
}
