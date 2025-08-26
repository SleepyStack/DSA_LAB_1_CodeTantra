/*
u are given an array of integers. Your task is to sort the array in ascending order using the Selection Sort algorithm.



Input Format:

The first line contains a single integer 
n
, which represents the number of elements in the array.
The second line contains 
n
 space-separated integers, which are the elements of the array.


Output Format:

Print the sorted array on a single line, with elements separated by spaces.
If the number of elements does not match 
n
, print -1 and do not perform any sorting.


Constraints:

The number of elements 
n
 is between 1 and 103.
Each integer in the array is between -106 and 106
  */
#include <stdio.h>
void selection_sort(int arr[],int n){
	for(int i=0;i<n;i++){
		int small = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[small]){
				int tmp = arr[j];
				arr[j]=arr[small];
				arr[small]=tmp;
			}
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int elements=0;
	int arr[n];
	for(int i=0;;i++){
		scanf("%d",&arr[i]);
		elements++;
		char c;
		scanf("%c",&c);
		if(c =='\n'){
			break;
		}
	}
	selection_sort(arr,n);
	if(n==elements){
		for(int i=0;i<n;i++){
			if(i<n-1)
			printf("%d ",arr[i]);
			else
			printf("%d",arr[i]);
		}
		printf("\n");
}
