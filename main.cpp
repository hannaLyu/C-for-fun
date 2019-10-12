#include <iostream>

using namespace std;

class fraction {
private: // Internal representation of a fraction as two integers
    int numerator;
    int denominator;
    char c;

public: // Class constructor
    fraction(int n, int d)
    {
        numerator=n;
        denominator=d;
    }
// Methods to update the fraction
    void add(fraction f);
    void mult(fraction f);
    void div(fraction f);
    void reduction();
//// Display method
    void display();
    void input();
};

void fraction::input()
{
    cin>>numerator>>c>>denominator;


}
//
 void fraction::add(fraction f)
{

    numerator=numerator*f.denominator+f.numerator*denominator;
    denominator=denominator*f.denominator;

}

 void fraction::mult(fraction f)
 {
    numerator=numerator*f.numerator;
    denominator=denominator*f.denominator;
 }

 void fraction::div(fraction f)
 {
    denominator=denominator*f.numerator;
    numerator=numerator*f.denominator;

 }


void fraction::reduction ()
{
        for (int i = denominator * numerator; i > 1; i--) {
                if ((denominator % i == 0) && (numerator % i == 0)) {
            denominator /= i;
                numerator /= i;
        }

         }
}

void fraction::display()
{

    cout<<numerator<<" ";
    cout<<"/";
    cout<<" "<<denominator<<endl;
}




int main()
{

    fraction fra1(1,1),fra2(1,1),fra3(1,1),fra4(1,1),fra5(1,1),fra6(1,1);
    string oper;

    //1
    fra1.input();
    cin>>oper;
    fra2.input();
    if(oper=="+"){fra1.add(fra2);}
    if(oper=="*"){fra1.mult(fra2);}
    if(oper=="div"){fra1.div(fra2);}
    fra1.reduction();

    //2
    fra3.input();
    cin>>oper;
    fra4.input();
    if(oper=="+"){fra3.add(fra4);}
    if(oper=="*"){fra3.mult(fra4);}
    if(oper=="div"){fra3.div(fra4);}
    fra3.reduction();

    //3
    fra5.input();
    cin>>oper;
    fra6.input();
    if(oper=="+"){fra5.add(fra6);}
    if(oper=="*"){fra5.mult(fra6);}
    if(oper=="div"){fra5.div(fra6);}
    fra5.reduction();

    fra1.display();
    fra3.display();
    fra5.display();




    //cout << fra1.denominator << endl;
    return 0;
}
