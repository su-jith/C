#include<stdio.h>

int main(){
	int a[10],i,j,n,m,temp,k;
	printf("enter the array limit:\n");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Array:");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	
	for(i=0;i<n;i++){
		m=a[i];
		for(j=i;j<n;j++){
			if(a[j]<=m){
				m=a[j];
				k=j;
			}
		}
		temp=a[i];
		a[i]=a[k];
		a[k]=temp;
	}
	printf("\nSorted array:");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
