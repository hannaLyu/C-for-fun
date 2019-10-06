#include <iostream>
#include<vector>
#include <stdio.h>
using namespace std;

int main()
{
    int k;
    char c;
    vector<int> dataseta;
    vector<int> datasetb;
    //vector<int> datasetb;
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


int n=dataseta.size();
int j=0;
for(int i=0;i<n;i++){

        datasetb.insert(datasetb.begin()+j,dataseta[i]);
        j=j+2;
       }

    itor=datasetb.begin();
    for(itor=datasetb.begin();itor!=datasetb.end();)
       {
           cout<<(*itor++)<<" ";
       }


    //cout << "Hello world!"<< endl;
    return 0;
}
