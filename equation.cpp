//������·�����
//ax + by = c
//dx + ey = f
//ע������/�������������
#include <stdio.h>
int main()
{
	double a,b,c,d,e,f,x,y;
	printf("����a,b,c,d,e,f\n");
    scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
	x=(c*e-f*b)/(a*e-d*b);
	y=(c-a*x)/b;
	printf("x=%lf\n",x);
	printf("y=%lf\n",y);
	return 0;
 } 
