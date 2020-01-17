#include <iostream>

using namespace std;

int reverse(int bag[], int begin, int end) {

 int temp;
 if (begin < end) {
  temp = bag[begin];
  bag[begin] = bag[end];
  bag[end] = temp;
  reverse(bag,begin+1, end-1);
 }

 return 0;
}
int main()
{
 int arr[10];

 int in = 0;
 int counter = 0;
 while (cin >> in && (in != '\n' || in != ' ')) {
  arr[counter++] = in;
 }

 if(counter > 1)
  reverse(arr, 0, counter-1);

 for(int i = 0; i < counter; i++)
 {
  cout << arr[i] << endl;
 }

    return 0;
}
