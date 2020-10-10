//说实话我没运行起

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int sum=0,Top=-1,n=0; 
    char i,a[i];
    scanf("%s",a);
    while (a[n] != '\0')
    	n++;
    for(int i=0;i<n;i++)
    {
        switch(a[i])
        {
            case '+':
                a[++Top]=a[Top]+a[Top-1];
                sum+=a[Top];
                break;
            case 'C': 
                sum-=a[Top--];
                break;
            case 'D': 
                a[++Top]=a[Top]*2;
                sum+=a[Top];
                break;
            default: 
                sum+=a[Top];
        }
    }
            printf("分数为%d",sum);
            return 0;
}
