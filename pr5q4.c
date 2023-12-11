/*Write a Program to print and find the sum of all elements of a given row & column from a 2D array.*/
#include<stdio.h>
void main(){
	
	int i,j, n,m;

	 printf("Enter size of row:- ");
	 scanf("%d",&n);
	 printf("Enter size of column:- ");
	 scanf("%d",&m);
	 
	int a[n][m];
	 	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("Enter a[%d][%d]:- ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	int rowsum=0;
	int colsum=0;
	int x,y;

  	printf("enter row number:- ");
 	scanf("%d",&x);
 	
	 for( i=0; i<n; i++){
        for( j=0; j<m; j++){
        	if(i==x){
        		printf("%d ",a[x][j]);
        		rowsum = rowsum + a[x][j] ;
			}
            
        }        
    }
    printf("\nsum of Elements of row = %d",rowsum);
    
    printf("\nenter column number:- ");
 	scanf("%d",&y);
  	
    for( i=0; i<n; i++)   {
        for( j=0; j<m; j++){
        		if(j==y){
        		printf("%d ",a[i][y]);
        		colsum = colsum + a[i][y] ;
			}
            
        }
    }
     printf("\nsum of Elements of col = %d",colsum); 
    
}

