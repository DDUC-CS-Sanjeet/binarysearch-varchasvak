#include<iostream>

#include<algorithm>

using namespace std;


bool binarySearchReacursive(int* array, int startIndex, int lastIndex, int element)
{
	int mid;
	if(startIndex>lastIndex)
	{
		return false;
	}
	else
	{
		mid=(startIndex+lastIndex)/2;
		if(array[mid]==element)
		{
		return true;
		}
		else if(array[mid]>element)
		    binarySearchReacursive(array,startIndex, mid-1,element );
		else
		    binarySearchReacursive(array, mid+1, lastIndex,element);
	}
}

bool binarySearchIterative(int* array, int startIndex, int lastIndex, int element)
{
	int mid=(startIndex+lastIndex)/2;
	while(startIndex<=lastIndex)
	{
		mid=(startIndex+lastIndex)/2;
		if(array[mid]==element)
		{
			return true;
 		}
		else if(array[mid]>element)
		    lastIndex=mid-1;
		else
		    startIndex=mid+1;
	}
	if(startIndex>lastIndex)
	{
		return false;
	}
}

int main()
{ int n,element,choice;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[n];
  cout<<"Enter the array elements: ";
  for(int i=0;i<n;i++)
	cin>>arr[i];
sort(arr,arr+n);
  for(int i=0;i<n;i++)
	cout<<endl<<arr[i];
  cout<<"\nEnter the element to be searched: ";
  cin>>element;
  cout<<"do you want the search to be : \n 1.Recursive or \n 2.Iterative.\n";
  cin>>choice;
  if(choice==1)
  {
  	if(binarySearchReacursive(arr,0,n-1,element)==1)
  	cout<<"The array has the given number.";
  	else
  	cout<<"The number is not there.";
  }
  else if(choice==2)
  {
  	if(binarySearchIterative(arr,0,n-1,element)==1)
  	cout<<"The array has the given number.";
  	else
  	cout<<"The number is not there.";
  }	
  else 
  	cout<<"Invalid choice.";
	  	
  return 0;

}

