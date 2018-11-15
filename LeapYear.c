//被4整除的年份是闰年，但是00结尾的年份被400整除才是闰年。
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a%400==0||(a%4==0&&a%100!=0))
	printf("%d年是闰年",a);
	else printf("%d年不是闰年",a);
	return 0;
}
