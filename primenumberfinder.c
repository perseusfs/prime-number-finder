#include<stdio.h>
int main(){
int sum=0;
int d,n;
printf("Find all the prime numbers from zero to :");
scanf("%d",&n);

for(d=1;d<=n;d++){
	int p=0;
	int i;
	for(i=2;i<d-1;i++){
		if(d%i==0){
			p=1;
		}
	}
	if(p==0){
		printf("\n%d",d);
		sum=sum+d;
	}
}
	
	return 0;
}
