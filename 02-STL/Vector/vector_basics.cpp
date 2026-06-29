#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> v;
  v.push_back(5);
  v.push_back(10);
  v.push_back(15);

/*  for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
  }*/
  for(int x:v){
    cout<<x<<endl;
  }
  

  cout<<"\n Size: "<<v.size();
  cout<< "\n First: " <<v.front();
  cout<<"\n last: " <<v.back();
  
  return 0;
}
