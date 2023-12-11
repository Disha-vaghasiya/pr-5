/*Write a Program to find the largest element from a given 2D array.*/

#include<stdio.h>
void main(){
	
	int i,j, n,m, large;

	 printf("Enter size of row:- ");
	 scanf("%d",&n);
	 printf("Enter size of column:- ");
	 scanf("%d",&m);
	 
	 	int a[n][m];
	 	
	for(i=0; i<n; i++){
	for(j=0; j<m; j++){
	
		printf("Enter a[%d][%d]:- ",i,j);
		scanf("%d",& a[i][j]);
		}
	}
	large= a[0][0];
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(large<a[i][j]){
				large=a[i][j];
			}
		}
	}

printf("large number is :- %d",large);
	
	
	
	
	
	
	
}
