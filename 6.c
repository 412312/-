//就是输出格式与题目给的不同

#include<stdio.h>
#include<stdlib.h>

int main(){
    char n=0, i,a[1000],t=0,j;
    printf("请输入:");
    scanf("%s",a);
   
    while (a[n] != '\0')
    	n++;
    for(i=0;i<n-1;i++){
    	for(j=0;j<(n-1-i);j++){ 
    	if(a[j]>a[j+1]){
    			t=a[j];
    			a[j]=a[j+1];
    			a[j+1]=t;}
    		} 
		
	}
	for(i=0;i<n;i++) {
		printf("%c",a[i]);
	}
		
	return 0;
    	
}
