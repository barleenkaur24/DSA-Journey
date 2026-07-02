#include <iostream>
using namespace std;

void reverseArray(int arr[],int n){
  for (int i=0;i<n/2;i++){
    int temp=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;
  }
  return;
}
int main(){
  int n;
  cout<<"Enter number of elements:"<<endl;
  cin>>n;
  int arr[n];
  cout<<"Enter elements of the array:\n";
  for (int i=0;i<n;i++){
    cin>>arr[i];
  }
  reverseArray(arr,n);
  cout<<"The reversed elements of the array are:\n";
  for (int i=0;i<n;i++){
    cout<<arr[i]<<endl;
  }
  return 0;
}