#include<stdio.h>
int trinarysearch(int [],int,int,int);
int main()
{
	int arr[50],i,n,key;
	printf("enter array size:");
	scanf("%d",&n);
	printf("enter %d into array:",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("array elements are:  ");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	printf("\nenter the key that you want to search:");
	scanf("%d",&key);
	int index=trinarysearch(arr,0,n-1,key);
	if(index!=-1)
	printf("position of key %d is %d in the array.",key,index+1);
	else
	printf("given key is not found in the array...");

	return 0;
}
int trinarysearch(int arr[],int low,int high,int key)
{
	int mid1,mid2;
	mid1=low+(high-low)/3;
	mid2=high-(high-low)/3;
	if(low>high)
	return -1;
	else{
		if(arr[mid1]==key)
		return mid1;
		else if(arr[mid2]==key)
		return mid2;
		else if(arr[mid1]>key)
		return trinarysearch(arr,low,mid1-1,key);
		else if(arr[mid2]<key)
		return trinarysearch(arr,mid2+1,high,key);
		else
		return trinarysearch(arr,mid1+1,mid2-1,key);
	}
}
