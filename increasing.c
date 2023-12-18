#include<stdio.h>
void increasing(int y,int x){

    if(x==0||y>x)return;
    printf("%d\n",y);
    increasing(y+1,x);
    return;
}
int main()
{
int n;
printf("Enter the value of n : ");
scanf("%d",&n);
increasing(1,n);
return 0;
}   