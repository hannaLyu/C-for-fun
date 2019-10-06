#include <iostream>
#include<vector>
#include <stdio.h>
using namespace std;

int main()
{
    int k;
    char c;
    int t;
    vector<int> dataseta;
    vector<int> datasetb;
    vector<int>::iterator itor;

    //cin>> k;
 while(cin>> c)

    {
         cin>>k;

         if(c=='a'){
                dataseta.push_back(k);
        }
        if(c=='b'){
                datasetb.push_back(k);
        }
        if(getchar() == '\n')break;

    }

int n1=dataseta.size();
for(int j=0;j<(n1-1);j++)
  for(int i=0;i<(n1-1-j);i++)
    if(dataseta[i]>dataseta[i+1])
{t=dataseta[i];dataseta[i]=dataseta[i+1];dataseta[i+1]=t;}

int n2=datasetb.size();
for(int j=0;j<(n2-1);j++)
  for(int i=0;i<(n2-1-j);i++)
    if(datasetb[i]>datasetb[i+1])
{t=datasetb[i];datasetb[i]=datasetb[i+1];datasetb[i+1]=t;}


    itor=dataseta.begin();
    for(itor=dataseta.begin();itor!=dataseta.end();)
       {
           cout<<(*itor++)<<" ";
       }

    itor=datasetb.begin();
    for(itor=datasetb.begin();itor!=datasetb.end();)
       {
           cout<<(*itor++)<<" ";
       }


    //cout << "Hello world!"<< endl;
    return 0;
}
