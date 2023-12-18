#include<stdio.h>
int stair(int n){
    if(n==1)return 1;
    if(n==2)return 2;
    //if(n==3)return 4;

    int ans =stair(n-1)+stair(n-2)//+stair(n-3);
   return ans;   
}
int main()
{
int n;
printf("Enter the stair number : ");
scanf("%d",&n);

int res=stair(n);
printf(" The number of ways = %d",res);
return 0;
}   