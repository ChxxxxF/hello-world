#include <stdio.h>
int main() 
{
int n, i, a, b;
scanf("%d", &n);  // ��n������
    for (i = 0; i < n; i++) 
	{
    scanf("%d%d", &a, &b);  // ������������
	printf("%d\n", a + b);  // ������������ĺ�
    }
    return 0;
}

