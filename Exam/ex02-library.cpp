
#include "ex02-library.h"
#include <iostream>

//Author: Xiaohan Lyu, s182354
//C++ exam 2019, problem 2

//Exercise 2 (a) Implement this function
string reverse(string s, int n){
	//put your code here
	int size=s.length()-1;

	string copy=s;

    for (int i=0;i<=size;i++){
        copy[i]=s[size-i];
    }

return copy;
}

//Exercise 2 (b) Implement this function
bool isPalindrome(string s, int n1, int n2){
	//put your code here
int change=0;
for(int i=0;i<=n2/2;i++){

  if(s[n1+i]!=s[n2-i]){change+=1;}
}
if (change==0){return true;}
else{return false;}
}

//Exercise 2 (c) Implement this function
int distancePalindrome(string s, int n1, int n2){
	//put your code here

	int size=s.length()-1;
	int changes=0;
	if(size==0){changes=0;}
for(int i=0;i<=size/2;i++){
  if(s[n1+i]!=s[n2-i]){changes+=1;}
    }
    return changes;
}
