#include <iostream>

using namespace std;

int Palindrome(int arr[],int start, int end) {
 int temp = 1;
 if (start < end) {
  if (arr[start] != arr[end]) {
   temp = 0;
  }
 }
 else {
  return Palindrome(arr, (start + 1), (end - 1));
 }
 return temp;
}


int main()
{

 int arr[100];

 int in = 0;
 int counter = 0;
 while (cin >> in && (in != '\n' || in != ' ')) {
  arr[counter++] = in;
 }

 if(counter == 1 || counter <= 2)
  cout << "yes" << endl;
 else if (Palindrome(arr, 0, counter-1)) {
  cout << "yes" << endl;
 }
 else {
  cout << "no" << endl;
 }

    return 0;
}
