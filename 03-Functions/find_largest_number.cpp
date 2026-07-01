#include <iostream>
using namespace std;

int findlargest(int arr[], int n){
  int c=arr[0];
  for (int i=0;i<n;i++){
    if (c<arr[i]) c=arr[i];
  }
  return c;
}

int main(){
  cout<<"Enter number of elements:\n";
  int n;
  cin>>n;
  cout<<"Enter the elements: \n";
  int arr[n];
  for (int i =0; i<n;i++){
    cin>>arr[i];
  }
  cout<<"The largest element in the array is: "<<findlargest(arr,n)<<endl;

  return 0;
}