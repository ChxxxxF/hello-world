//求解如下方程组
//ax + by = c
//dx + ey = f
//注意输入/输出，数据类型
#include <stdio.h>
int main()
{
	double a,b,c,d,e,f,x,y;
	printf("输入a,b,c,d,e,f\n");
    scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
	x=(c*e-f*b)/(a*e-d*b);
	y=(c-a*x)/b;
	printf("x=%lf\n",x);
	printf("y=%lf\n",y);
	return 0;
 } 
