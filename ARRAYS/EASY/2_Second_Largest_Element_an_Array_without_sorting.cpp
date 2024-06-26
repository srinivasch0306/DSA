#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int second_largest(vector<int> arr){

  //sorting method
  // sort(arr.begin(),arr.end());
  // for(int i=arr.size()-2;i>0;i--){
  //   if(arr[i]<arr[arr.size()-1])
  //   // if(arr[i]!=arr[arr.size()-1])
  //   {
  //     return arr[i];
  //     break;
  //   }
  // }

  // 2 for loops
  // int max=arr[0];
  // for(int i=0;i<arr.size();i++){
  //   if(max<arr[i]){
  //     max=arr[i];
  //   }
  // }

  // int second_max=INT16_MIN;
  // for(int j=0;j<arr.size();j++){
  //   if(second_max<arr[j] && arr[j]!= max){
  //     second_max=arr[j];
  //   }

  // }
  // return second_max;


  int max=arr[0];
  int sec_max=INT16_MIN;
  for(int i=1;i<arr.size();i++){
    if(arr[i]> max){
      sec_max=max;
      max=arr[i];
    }
    if(arr[i]!=max && arr[i]>sec_max){
      sec_max=arr[i];
    }
  }
  return sec_max;
  
  // return 0;
}

int main(){
  vector<int> arr={1,-2,34,2,0,-8,76,76};
  cout<<second_largest(arr)<<endl;
  // cout<<arr[arr.size()-1]<<endl;
  
}