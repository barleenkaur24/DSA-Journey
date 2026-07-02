#include <iostream>
using namespace std;

int countFrequency(int arr[], int n, int key){
  int count=0;
  for(int i =0;i<n;i++){
    if (key==arr[i]){
      count++;
    }
  }
  return count;
}

int main(){
  int n;
  cout<<"Enter number of eleme nts:\n";
  cin>>n;
  int arr[n];
  cout<<"Enter elements:\n";
  for(int i =0;i<n;i++){
    cin>>arr[i];
  }
  int key;
  cout<<"enter number whose frequency is to be found:\n";
  cin>>key;
  cout<<"Frequency of "<<key<<" is "<<countFrequency(arr,n,key)<<endl;

  return 0;
}