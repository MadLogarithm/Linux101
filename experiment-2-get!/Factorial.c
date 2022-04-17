#include<stdio.h>
#include"include/Factorial.h"
#define LEN 10005 
void GetFact(int n){
	int ans[LEN];
	ans[1]=1;
	for(int i=2;i<LEN;i++) ans[i]=-1;
	for(int i=1;i<=n;i++){
		for(int j=1;ans[j]!=-1;j++) ans[j]*=i;
		for(int j=1;ans[j]!=-1;j++){
			if(ans[j]>=100000)
				if(ans[j+1]==-1)
				{
					ans[j+1]=ans[j]/100000;
					ans[j]%=100000;
				}
				else
				{
					ans[j+1]+=ans[j]/100000;
					ans[j]%=100000;
				}
		}
	}
	int cnt=0;
	for(int i=1;ans[i]!=-1;i++) cnt++;
	printf("%d! = ",n);
	for(int i=cnt;i>0;i--) printf("%c",ans[i]);
	printf("\n");
	return;
}
