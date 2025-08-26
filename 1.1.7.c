/*
Implement a program that takes the number of rows 
r
 and columns 
c
 from the user to create a matrix and prints both the original matrix and its transpose.



Input Format:

The first line of input contains two integers 
r
 and 
c
 separated by a space, representing the number of rows and columns, respectively.
The next 
r
 lines each contain 
c
 space-separated elements to populate the matrix.


Output Format:

The first 
r
 lines of the output should each contain 
c
 space-separated elements, representing the original matrix.
The next 
c
 lines of the output should each contain 
r
 space-separated elements, representing the transpose of the matrix.
*/
#include <stdio.h>
int main(){
	int r,c;
	scanf("%d%d",&r,&c);
	int arr[r][c];
	for(int i = 0;i<r;i++){
		for(int j = 0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	for(int j = 0;j<c;j++){
		for(int i = 0;i<r;i++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
