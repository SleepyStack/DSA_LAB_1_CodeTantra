/*
You are given a task to sort an array of integers using the Bubble Sort algorithm. Your program should follow these specifications:



Input Format:

The first line contains a single integer n, which represents the number of elements in the array.
The second line contains n space-separated integers, which are the elements of the array.


Output Format:

Print the sorted array on a single line, with elements separated by spaces.
If the number of elements does not match n, print -1 and do not perform any sorting.


Constraints:
1 <= n <= 10^3
10^-6 <= Any element of array <= 10^6
*/
#include <stdio.h>
int main(){
	int elements=0;
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i =0;;i++){
		scanf("%d",&arr[i]);
		elements++;
		char c;
		scanf("%c",&c);
		if(c=='\n'){
			break;
		}
	}
	for(int i =0;i<n-1;i++){
		for(int j = 0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j]= arr[j+1];
				arr[j+1]= temp;
			}
		}
	}
	if(n==elements){
		for(int i =0;i<n;i++){
			if(i<n-1){
				printf("%d ",arr[i]);
			}
			else{
				printf("%d",arr[i]);
			}
		}
	}
	else{
		printf("-1");
}
