//��4��������������꣬����00��β����ݱ�400�����������ꡣ
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a%400==0||(a%4==0&&a%100!=0))
	printf("%d��������",a);
	else printf("%d�겻������",a);
	return 0;
}
