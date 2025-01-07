#include<stdio.h>
int main(){
	int n;
	double sum=0.0;
	printf("enter the term");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("1/%d",i);
		if(i<n){
			printf("+"); 
		}
		sum=sum+1.0/i;
	}
	printf("\nsum is %.2lf",sum);
	return 0;
}
