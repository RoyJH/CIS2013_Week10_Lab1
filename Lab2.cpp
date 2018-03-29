#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	int cnt =0;
	string sentence;

	cout << "Type your sentence: " << endl;
	
	getline(cin, sentence);
	
	for(int x=0; x<=sentence.length();x++){
		if(sentence[x] =='b'){
			cnt++;
			if(cnt%2 == 1){
			cout<<"SIT";
			} else {
			cout << "STAND";
			} 
		}
			else {
			cout << sentence[x];
			}
		}
	}
	//return 0;
