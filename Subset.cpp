#include <stdio.h>
int control(int *,int *,int , int);
int main()
{
	int m,n,res,i;
	
	printf("Enter M and N:\n");
	scanf("%d %d",&m,&n);
	
	int ar1[m];
	int ar2[n];
	
	printf("Enter %d integers:\n",m);
	for(i=0;i<m;i++){
		scanf("%d",&ar1[i]);
	} 
	
	printf("Enter %d integers:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&ar2[i]);

	} 
	
	res=control(ar1,ar2,m,n);
	
	if(res==1)
	printf("The second array is a subset of the first array.\n");
	
	else
	printf("The second array is not a subset of the first array.\n");
	
	
	return 0;
}

int control(int *arr1,int *arr2, int m , int n)
{
	int i,j;
	int check=1;
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		
			if(arr1[i]==arr2[j]){
				arr2[j]=1;
			}
			
		}
	}
	
	for(i=0;i<n;i++){
	
		if(arr2[i]!=1)
			check=0;
		
	}	
	
	return check;
}


