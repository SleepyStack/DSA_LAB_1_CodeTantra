/*
  implement a program to find the maximum element in an array of size 
.



Input Format:

The first line of the input represents an integer 
The second line of the input represents 
 space separated elements of the array (Integers)
Output Format:

The first line of the output represents the input array.
The second line contains an integer representing the maximum element of the array.
  */

#include <stdio.h>
#include <limits.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i = 0; i<n;i++){
		scanf("%d",&arr[i]);
	}
	int intMax = INT_MIN;
	for(int i = 0;i<n;i++){
		if(intMax < arr[i]){
			intMax = arr[i];
		}
	}
	printf("[");
	for(int i = 0; i<n;i++){
		if(i != n-1){
			printf("%d, ", arr[i]);
			continue;
		}
		printf("%d]\n",arr[i]);
	}
	printf("%d",intMax);
	return 0;
}
