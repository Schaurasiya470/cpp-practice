#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>

using namespace std;

int main(){

	cout<< "Enter sentance : ";

	string sentance;
	getline(cin, sentance);
	stringstream ss(sentance);

	string word;
	int wordCount = 0;
	vector<string> txtWords;

	while (ss >> word){
		wordCount++;
		txtWords.push_back(word);
	}

	reverse(txtWords.begin(),txtWords.end());
	cout << "Total Word Count : " << wordCount << endl;
	for(string word : txtWords){
		cout << word<< endl;
	}

	return 0;
}