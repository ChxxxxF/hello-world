//���һԪ���η��̵ĸ�   ax^2+bx+c=0 
//����sqrt()����
//ע����û�н�
#include<math.h>//���ڵ���sqrt()���� 
#include <stdio.h>
int main()
{
	double a,b,c,s,x1,x2;
	printf("����a,b,c\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	s=b*b-4*a*c;//���ڼ��鷽�̸������ 
	  if(s>0)//������������ͬʵ�� 
	  {
	  s=sqrt(s);
	  x1=(-1*b+s)/(2*a);
	  x2=(-1*b-s)/(2*a);
	  printf("x1=%lf\n",x1);
	  printf("x2=%lf\n",x2);
	  }
      else if(s==0)//������������ͬʵ�� **(ע�������Ⱥţ����ָ�ֵ�� 
	  {
	  x1=x2=-1*b/(2*a);
      printf("x1=%lf\n",x1);
	  printf("x2=%lf\n",x2);
	  }
	  else//������ʵ��
	  { 
	  printf("������ʵ��"); 
      } 
    return 0; 
} 
