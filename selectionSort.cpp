#include<bits/stdc++.h>

using namespace std;

int main(){
int n;
cin>>n;

vector<int> arr(n);
for(int i = 0; i< n; i++){
cin>>arr[i];
}

for(int i = 0; i<n-1;i++){
int min = i;
for(int j = i+1; j< n; j++){
if(arr[j] < arr[min]){
min = j;
}
}
swap(arr[i],arr[min]);
}
//reverse(arr.begin(), arr.end());
//sort(arr.begin(), arr.end(),greater<int>());
for(int x : arr)cout<<x << " ";
}
