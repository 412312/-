//具体位置无法实现，呜呜呜
#include<stdio.h>
int main(){
    char i,a[i],n=0,j=0,o=0;
    printf("location:");
    scanf("%s",a);
    while (a[n] != '\0')
    	n++;
    for(i=0;i<n;i++){
        if(a[i]%2==0) 
            o=o+1;
        else
            j=j+1;
    } 
    if(o>j)
    printf("%d,都移动到奇数位",j);
    else if(o==j)
    printf("%d,都可以",o);
    else
    printf("%d,都移动到偶数位",o);
    return 0;
}