#include <stdio.h>
#include <string.h>
int main(){
    char a[1000];
    int n, i, m=1;
    scanf("%s",a);
    while (a[n] != '\0')
    	n++;
    for(i=0;i<n;i++){
        if(a[i]!=a[n-1-i]){
            m=0;
            break;
        }
    }
    if(m==1) printf("true");
    else printf("false");
    return 0;
}
