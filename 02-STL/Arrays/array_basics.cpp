#include <iostream>
using namespace std;

int main(){
  int arr[5];

  for (int i=0;i<5;i++){
    cin>>arr[i];
  }
  int c=arr[0];
  int d=arr[0];
  for (int i=0;i<5;i++){
    cout<<arr[i]<<endl;
    if(arr[i]>c){
      c=arr[i];
    }
    if(arr[i]<d) d=arr[i]; 
  }
  cout<<"The largest element is: "<<c<<endl;
  cout<<"The smallest element is: "<<d<<endl;

  return 0;

}