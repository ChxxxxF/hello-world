//�������������뷴����ȵ���
//�κ�һ��������10���������Ǹ������һλ
//�κ�һ��������10���̾����ų������һλ�����
//2018/11/14 ����
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
printf("%d�ǻ�����!\n",num);
else
printf("%d���ǻ�����\n",num);
return 0;
}

