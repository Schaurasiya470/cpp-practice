#include<bits/stdc++.h>

using namespace std;

int main(){

string day;
int N;

cin>>day;
cin>>N;

unordered_map<string, int> dayMap;
dayMap["sun"] = 0;
dayMap["mon"] = 1;
dayMap["tue"] = 2;
dayMap["wed"] = 3;
dayMap["thu"] = 4;
dayMap["fri"] = 5;
dayMap["sat"] = 6;
int dayNo = dayMap[day];

int firstOccurDay = (7-dayNo+1)%7;


}
