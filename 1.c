#include <stdio.h>

int main(){
    char n=0, i,a[i],y,d[y],t,m;
	int j,index[j];
    printf("请输入字符串s:");
    scanf("%s",a);
   
    while (a[n] != '\0')
    	n++;
    y=i;
    d[y]=a[i];
    printf("请输入index:");
    for(j=0;j<n;j++)
    scanf("%c",&index[j]);
   	for(y=0;y<n;y++){
		j=y;
		while(index[j]>0&&index[j]!=y){
			t=d[y];
			m=index[j];
			d[m]=t;
    		index[j]=-index[j];
    		j=-index[j];
    		
	}
	}

	for(y=0;y<n;y++)
		printf("%c",d[y]);
}
