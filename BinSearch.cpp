#include<iostream>
#include<algorithm>
using namespace std;

bool binarySearchReacursive(int* array, int startIndex, int lastIndex, int element)
{
  return true;
}

bool binarySearchIterative(int* array, int startIndex, int lastIndex, int element)
{
  int mid=(startIndex+lastIndex-1)/2;
 while(lastIndex>=startIndex)
  if(element==mid)
  return true;
  else if(mid>)
}

int main()
{ int n,element;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[n];
  cout<<"Enter the element to be searched: ";
  cin>>element;
  cout<<"do you want the search to be : \n 1.Recursive or \n 2.Iterative.";
  binarySearchReacursive(arr,0,n-1,element);
  binarySearchIterative(arr,0,n-1,element);




  return 0;
}
