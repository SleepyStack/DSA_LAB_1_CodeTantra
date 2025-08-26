/*
Implement a program to reverse the elements of an array of size n.

Input Format:

The first line of the input contains an integer 
n
 representing the number of elements.
The second line of the input represents 
n
 space separated elements of the array (Integers).
Output Format:

The output represents the elements of the input array in reversed order.
*/
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int left = 0;
	int right = n-1;
	while(left<right){
		int temp = arr[right];
		arr[right] = arr[left];
		arr[left] = temp;
		left++;
		right--;
	}
	printf("[");
	for(int i=0;i<n;i++){
		if(i != n-1){
			printf("%d, ",arr[i]);
			continue;
		}printf("%d]\n",arr[i]);
	}
	return 0;
}
