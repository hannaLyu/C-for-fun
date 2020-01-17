#include "ex03-library.h"
#include <iostream>
//Author: Xiaohan Lyu, s182354
//C++ exam 2019, problem 3


//Do not modify
WordsList::WordsList(){
	allWords.push_back("121");
	wordsToPalindromeDistance["121"]=0;
	allWords.push_back("122");
	wordsToPalindromeDistance["122"]=1;
}

//Exercise 3 (a) implement this method
void WordsList::print(){
	//put your code here
    cout << allWords.size() <<" words:";
    	for(int i = 0; i < allWords.size(); i++){
		cout<< ' ' << allWords[i]<<" ";
		cout<< '('<< wordsToPalindromeDistance[allWords[i]]<<')';
	}
	cout << endl;
}

//Exercise 3 (b) implement this method
int WordsList::distancePalindrome(string s){
	//put your code here
	int size=s.length()-1;
	int changes=0;
	if(size==0){changes=0;}
for(int i=0;i<=size/2;i++){
  if(s[i]!=s[size-i]){changes+=1;}
    }
    return changes;
}

//Exercise 3 (c) implement this method
void WordsList::addWord(string word){
	//put your code here
	allWords.push_back(word);
	wordsToPalindromeDistance[word]=distancePalindrome(word);

}

//Exercise 3 (d) implement this method
int WordsList::palindromeWords(){
	//put your code here
	int count=0;
	for (int i=0;i<allWords.size();i++){

        if(distancePalindrome(allWords[i])==0){
            count++;
        }
	}
	return count;
}
