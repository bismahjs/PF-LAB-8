#include <stdio.h>
int main(){
int rows;
 printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    //outer loop for rows
    for(int i=1;i<=rows;i++){
    	
    	//inner loop for columns
		for(int j=1;j<=i;j++){
			
		printf("* ");
		}
	printf("\n");
	}
return 0;
	
}
