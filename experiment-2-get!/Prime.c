#include<stdio.h>
#include<math.h>
#include"include/Prime.h"
void IsPrime(int x){
    int t=0;
    if(x%2==0&&x!=2)t++; 
	for(int i=3;i<=x;i+=2) if(x%i==0)t++;
	if(t>0)printf("%d isn't' Prime.\n",x); 
	else printf("%d is Prime.\n",x);
	return;
}
