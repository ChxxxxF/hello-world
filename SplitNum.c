//输入整数，将每位数字打印出来（从左向右打印，空格区分）
//2018/11/14 更新
#include <stdio.h>
void func(int n)
{
    int a;
    if(n==0) return;//到0结束。
    a=n%10;//取出个位。
    func(n/10);//递归调用
    printf("%d ",a);//输出。
}
int main()
{
    int n;
    scanf("%d",&n);//输入。
    func(n);//调用函数，正序输出各个位。
    return 0;
}
