#include<bits/stdc++.h>

using namespace std;

int main(){
int n;
cin>>n;
int count=0,arr[n], max=INT_MIN;
for(int i = 0;i<n;i++){
cin>>arr[i];
if(arr[i] > max){
count++;
max = arr[i];
}
}
cout << count;
return 0;
}
