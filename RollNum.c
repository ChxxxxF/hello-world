//回文数：正读与反读相等的数
//任何一个数除以10的余数就是该数最后一位
//任何一个数除以10的商就是排除掉最后一位后的数
//2018/11/14 更新
#include<stdio.h>
int main()
{
int num; 
scanf("%d",&num);
int n;
int sum=0;
n=num;
while(n>0)
{
sum=sum*10+n%10;
n/=10;//n=n/10
}
if(sum==num)
printf("%d是回文数!\n",num);
else
printf("%d不是回文数\n",num);
return 0;
}

