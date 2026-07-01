#include <iostream>
using namespace std;

int linearSearch(int arr[],int key, int n){
  for (int i=0;i<n;i++){
    if(key==arr[i]) {
      return i;
    }
  }
  return -1;
}
int main(){
  int n;
  cout<<"Number of elements:\n";
  cin>>n;
  cout<<"Enter elements: \n";
  int arr[n];
  for (int i=0;i<n;i++){
    cin>>arr[i];  
  }
  int key;
  cout<<"Enter element to be found: \n";
  cin>>key;

  int s= linearSearch(arr,key,n);
  if(s==-1){
    cout<<"Element not found\n";
  }
  else{
    cout<<"Element found at index "<<s<<endl;
  }
  return 0;
}