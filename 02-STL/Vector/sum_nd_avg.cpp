#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> v;
  
  for(int i=0;i<5;i++){
    int c;
    cin>>c;
    v.push_back(c);
  }

   cout<<"all elements:";
   for(int x:v) {
    cout<<x<<" ";
   }
  int s=0;
  for(int x :v){
    s=s+x;
  }
  cout <<"\nsum:"<<s;
  cout<<"\naverage:"<<s/v.size();

  return 0;
}