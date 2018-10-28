//求解一元二次方程的根   ax^2+bx+c=0 
//查阅sqrt()函数
//注意有没有解
#include<math.h>//用于调用sqrt()函数 
#include <stdio.h>
int main()
{
	double a,b,c,s,x1,x2;
	printf("输入a,b,c\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	s=b*b-4*a*c;//用于检验方程根的情况 
	  if(s>0)//方程有两个不同实根 
	  {
	  s=sqrt(s);
	  x1=(-1*b+s)/(2*a);
	  x2=(-1*b-s)/(2*a);
	  printf("x1=%lf\n",x1);
	  printf("x2=%lf\n",x2);
	  }
      else if(s==0)//方程有两个相同实根 **(注意两个等号，区分赋值） 
	  {
	  x1=x2=-1*b/(2*a);
      printf("x1=%lf\n",x1);
	  printf("x2=%lf\n",x2);
	  }
	  else//方程无实根
	  { 
	  printf("方程无实根"); 
      } 
    return 0; 
} 
