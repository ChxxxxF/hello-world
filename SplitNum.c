//������������ÿλ���ִ�ӡ�������������Ҵ�ӡ���ո����֣�
//2018/11/14 ����
#include <stdio.h>
void func(int n)
{
    int a;
    if(n==0) return;//��0������
    a=n%10;//ȡ����λ��
    func(n/10);//�ݹ����
    printf("%d ",a);//�����
}
int main()
{
    int n;
    scanf("%d",&n);//���롣
    func(n);//���ú����������������λ��
    return 0;
}
