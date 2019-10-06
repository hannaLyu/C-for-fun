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
    vector<int> data;
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

int n1=dataseta.size();
int n2=datasetb.size();
int sum=0;

if(n1!=n2){
    if(n1>n2){
        int a=n1-n2;
        datasetb.insert(datasetb.end(),a,0);
    }else{
        int a=n2-n1;
        dataseta.insert(dataseta.end(),a,0);
    }
}


int n3=dataseta.size();
int n4=datasetb.size();
if(n3==n4){
    for(int i=0;i<n3;i++){
        int ans=dataseta[i]*datasetb[i];
            sum=sum+ans;
    }
}




//    itor=dataseta.begin();
//    for(itor=dataseta.begin();itor!=dataseta.end();)
//       {
//           cout<<(*itor++)<<" ";
//       }
//
//    itor=datasetb.begin();
//    for(itor=datasetb.begin();itor!=datasetb.end();)
//       {
//           cout<<(*itor++)<<" ";
//       }


    cout << sum<< endl;
    return 0;
}
