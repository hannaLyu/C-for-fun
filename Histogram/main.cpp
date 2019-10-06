#include <iostream>
#include <math.h>


using namespace std;

int main()
{
int l;
//cout << "Input number of interval l:" << endl;
cin>>l;
int n;
//int num[100];

//cout << "Input number of dataset n:" << endl;
cin>>n;
int a[n];
//cout << "Input dataset:" << endl;
for(int i=0; i<n;i++)
{
    cin>>a[i];
   // cout<<a[i]<<" ";
}

int m=a[0];

for(int i=1; i<n;i++){
    if(m<a[i]){
        m=a[i];
        //cout << m << " ";
    }
}
double k;
k=(double)m/l;
k=ceil(k);
int ival[l];
for(int i=1;i<=l;i++)
{
    ival[i]=(i-1)*k;cin>>

   //  cout << ival[i] << " ";
}
int out[l+1]={};



for(int i=0;i<n;i++){
for(int j=1;j<=l;j++){

    if(a[i]<(j*k)&&a[i]>=((j-1)*k)){
        out[j]=out[j]+1;
//        cout << "a in" << endl;
//        cout << j<< " ";
        break;
    }
}
continue;
}



for(int i=1;i<=l;i++){
    cout << ival[i]<< ": ";
    cout << out[i]<<endl;
}

    //cout << "Hello world!" << endl;
    return 0;
}
