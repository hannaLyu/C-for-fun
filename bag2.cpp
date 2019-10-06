#include <iostream>
#include <string>
#include<vector>
using namespace std;


int main()
{
    int k;
    string c;
    vector <int > arry;
    vector<int>::iterator itor;
    vector<int>::iterator itor2;
    vector<char>::iterator itor3;
    string ans;
    vector <char> answer;
    cin>> c;

    while(c!="quit"){
    cin>>k;
        if(c=="add"){
        arry.push_back(k);
       // cout<<arry[i]<<" ";

    }
        if(c=="del"){
        for(itor=arry.begin();itor!=arry.end();itor++){
            if(k==*itor){
                itor=arry.erase(itor);
                itor--;
                break;
            }
        }
    }
       // c
        if(c=="qry"){
            if(!arry.empty()){
            for(itor=arry.begin();itor!=arry.end();itor++){
            if(k==*itor){
                ans="true";
                break;

            }
            else{
            ans="false";
        }
        }
        if(ans=="true"){
                answer.push_back('T');
        }
        if(ans=="false"){
            answer.push_back('F');
        }
       }
       else{
            answer.push_back('F');
        }
        }
    cin>> c;
    }



        itor3=answer.begin();
    for(itor3=answer.begin();itor3!=answer.end();)
       {
           cout<<(*itor3++);
       }

   // cout << "Hello world!" << endl;
    return 0;
}
