/*
Implement a program to find the sum of all elements in an array of size n.

Input Format:

The first line of the input represents an integer 
n
The second line of the input represents 
n
 space separated elements of the array (Integers)
Output Format:

The first line of the output represents the input array.
The second line of the output contains an integer representing the sum of all element of the array.
*/
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i = 0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int sum =0;
	for(int i = 0; i<n; i++){
		sum += arr[i];
	}
	printf("[");
	for(int i = 0;i<n;i++){
		if(i != n-1){
			printf("%d, ",arr[i]);
				continue;
		}printf("%d]\n", arr[i]);
	}printf("%d",sum);
return 0;
}
