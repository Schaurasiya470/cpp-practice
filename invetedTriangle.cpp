#include<iostream>

using namespace std;

int main(){

int n; cin>>n;

for(int i =0; i < n; i++){
for(int j=0; j<n; j++){
if(j > n-2-i) // j > i-1 (for initial space zero)
cout << i+1;
else
cout<< " ";
}
cout << endl;
}

}
