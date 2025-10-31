#include<iostream>
#include<string>
#include<vector>
using namespace std;

string CountSort(string str){
  int n=str.length();
  vector<int>freq(26,0);
  for(int i=0;i<n;i++){
    freq[str[i]-'a']++;
  }
  int j=0;
  for(int i=0;i<26;i++){
    while(freq[i]!=0){
    str[j]=i+'a';
    j++;
    freq[i]--;
    }
  }
  return str;
}
int main(){
  string str;
  getline(cin,str);
  
  string s2=CountSort(str);
  cout<<s2<<endl;

}