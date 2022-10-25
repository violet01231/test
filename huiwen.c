#include<stdio.h>
int main(){
	int n,l,i,m,t,q=1,p=1,a,s=0,c;
	scanf("%d",&n);
	c=n;
	for(i=n;i>0;i/=10){
		l++;
	}
	for(t=1;t<=l-1;t++){
		q*=10;
	}
	for(;l>=1;l--,q/=10,p*=10){
		a=n/q;
		s=s+a*p;
		n%=q;
	}

	printf("%d",s);
	if(s==c)
	printf("Yes\n");
	else
	printf("No\n");
	return 0;
}
