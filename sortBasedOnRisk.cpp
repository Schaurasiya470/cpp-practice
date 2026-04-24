#include<bits/stdc++.h>

using namespace std;

int main(){

int N, temp;
cin>> N;

map<int, int> freq;

for(int i = 0; i<N; i++){
cin>>temp;
freq[temp]++;
}

for(auto x : freq){
for(int i = 0; i< x.second; i++){
cout << x.first<< "";
}
// cout << x.first<<": "<< x.second<<endl;
}
return 0;
}
