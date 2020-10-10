//我觉得是a[i]=i那里有问题，但真的改不来
#include <stdio.h>
#include<stdlib.h>
int main(){
    char n=0, i=0,b=0,a[1000];
    printf("s:");
    scanf("%s",a);
   	int res=-1;
    while (a[n] != '\0')
    	n++;
   	for(i=0;i<n;i++){
		   	if(i==a[i]){ 
		   	res = i;
   		break;}
		   
	   }

	printf("%d",res);
	return 0;
}


