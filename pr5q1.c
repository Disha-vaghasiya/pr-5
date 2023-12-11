#include<stdio.h>
void main(){
	
	int i, n;
	int a[i];
	 printf("Enter size of array:- ");
	 scanf("%d",&n);
	 
	for(i=0; i<n; i++){
		printf("Enter a[%d]:- ",i);
		scanf("%d",& a[i]);
		}
	
	
	printf("nagative number is :-  ");
    for(i=0; i<n; i++)
 {
        if(a[i] < 0)
        {
            printf("%d,  ", a[i]);
        }
    }

	
	
	
	
	
	
	
}
