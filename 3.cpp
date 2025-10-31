#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isIsomorphic(string s1,string s2){
  if(s1.length()!=s2.length()){
    return false;
  }

  vector<int>freq1(128,-1);
  vector<int>freq2(128,-1);

  for(int i=0;i<s1.length();i++){
    if(freq1[s1[i]]!=freq2[s2[i]]){
      return false;
    }
    freq1[s1[i]]=i;
    freq2[s2[i]]=i;
  }
  return true;
}
int main(){
  string s1,s2;
  cin>>s1>>s2;
  if(isIsomorphic(s1,s2)){
    cout<<"Isomorphic Strings";
  }
  else{
    cout<<"Not Isomorphic";
  }
}