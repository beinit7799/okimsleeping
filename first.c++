#include<iostream>
using namespace std;
class Two;
class Thr;
class One{
    int n1;
    public:
    void read();
    void display();
    friend void max(One&,Two&,Thr&);
};
class Two{
    int n2;
    public:
    void read();
    void display();
    friend void max(One&,Two&,Thr&);
};
class Thr{
    int n3,n4;
    public:
    void read();
    void display();
    friend void max(One&,Two&,Thr&);
};
int main()
{
    One X;
    Two Y;
    Thr Z;
    X.read();
    Y.read();
    Z.read();
    X.display();
    Y.display();
    Z.display();
    max(X,Y,Z);
    return 0;
}
void One::read()
{
    cout<<"Enter first number:"<<endl;
    cin>>n1;
}
void Two::read()
{
    cout<<"Enter 2nd number:"<<endl;
    cin>>n2;
}
void Thr::read()
{
    cout<<"Enter third and fourth number:"<<endl;
    cin>>n3>>n4;
}
void max(One&X,Two&Y,Thr&Z)
{
    if(X.n1>Y.n2 &&  X.n1>Z.n3 && X.n1>Z.n4)
    {
        cout<<"max:"<<X.n1<<endl;
    }
     else if(Y.n2>Z.n3 && Y.n2>Z.n4)
    {
        cout<<"max:"<<Y.n2<<endl;
    }
    else if (Z.n3>Z.n4)
    {
        cout<<"max:"<<Z.n3<<endl;
    }
    else
    {
        cout<<"max:"<<Z.n4<<endl;
    }
    
}