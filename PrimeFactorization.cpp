#include <iostream>

using namespace std;

int main()
{
 int n,i;
 //cout<<"input number:";
 cin>>n;
 //cout<<n<<"=";
 for(i=2;i<=n;i++)
 {
  while(n!=i)
  {
   if(n%i==0)
   {
    cout<<i<<" * ";
    n=n/i;
   }
   else
    break;
  }

 }
 cout<<n<<endl;
 return 0;
}
