/*
u are given a task to sort an array of integers using the Shell Sort algorithm. Your program should follow these specifications:



Input Format:

The first line contains a single integer n, which represents the number of elements in the array.
The second line contains n space-separated integers, which are the elements of the array.


Output Format:

Print the sorted array on a single line, with elements separated by spaces.
If the number of elements does not match n, print -1 and do not perform any sorting.


Constraints:

The number of elements n is between 1 and 1000.
Each integer in the array is between -1,000,000 and 1,000,000.
  */
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n],i,j,elements=0;
	for(i=0;;i++){
		scanf("%d",&arr[i]);
		elements++;
		char c = getchar();
		if(c=='\n'){
			break;
		}
	}
	if(n==elements){
		for(int gap=n/2;gap>0;gap/=2){
			for(i=gap;i<n;i++){
				int temp = arr[i];
				for(j=i;j>=gap&&arr[j-gap]>temp;j-=gap){
					arr[j]=arr[j-gap];
				}
				arr[j]=temp;
			}
		}
		for(i=0;i<n;i++){
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
}
