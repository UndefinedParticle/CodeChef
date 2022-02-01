#include<bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 string smallS="abcdefghijklmnopqrstuvwxyz";
 for (int i=0;i<t;i++){
      int n;
      cin>>n; 
      string s=""; 
      for(int j=0;j<n;j++){
         
          s=s+smallS[j%26];
      }
      cout<<s<<endl;
     
 }
    return 0;
}