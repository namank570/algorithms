#include<bits/stdc++.h>
#define ral(i,n) for(int i=1;i<=n;i++)
#define mod 1000000007
#define vect vector<int>
#define pb push_back
#define lli long long int <iostream>
using namespace std;
int binarysearch(int arr[],int low,int high,int key)
{
	while(low<=high)
	{
	    int mid = (low+high)/2;
		if(arr[mid]==key)
			return mid;
		else if(arr[mid] > key)
			high = mid-1;
		else if(arr[mid] < key)
			low = mid+1;

	}
	return -1;
}
int main()
{

    int arr[10];
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
    int n;
    cin>>n;
	int a = binarysearch(arr,0,9,n);
	if(a!=-1)
		cout<<"element found at index:"<<a;
	else
		cout<<"element not found";
}
