//素数是只有1和本身是因子的数
//把m被2~m-1之间的每一个整数去除
//如果都不能被整除，那么m就是一个素数
#include<stdio.h>
int main() 
{
    int a=0;  // 素数的个数
    int num=0;  // 输入的整数
    scanf("%d",&num);
    for(int i=2;i<num;i++){
        if(num%i==0){
            a++; //素数个数加1
        }
    }
    if(a==0){
        printf("%d是素数\n",num);
    }else{
        printf("%d不是素数\n",num);
    }
    return 0;
}

