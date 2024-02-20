/*write a program to implement basic calculator*/
#include<iostream>
#include<cstdlib>
using namespace std;
class input
{
    public:
    int num1,num2;
    void getinput();
    void templatee();    
};
void input::getinput()
{
    cout<<"Enter first number:";
    cin>>num1;
    cout<<"Enter second number:";
    cin>>num2;
}

void input::templatee()
{
    cout<<"1. ADDITION..."<<endl;
    cout<<"2. SUBTRACTION..."<<endl;
    cout<<"3. MULTIPLICATION..."<<endl;
    cout<<"4. DIVISION..."<<endl;
    cout<<"5. EXIT..."<<endl;
}

class calculator:public input
{
    public:
    float res;
    void add();
    void sub();
    void mx();
    void div();
    void result();
};

void calculator::add()
{
    res=num1+num2;    
}

void calculator::sub()
{
    res=num1-num2;
}

void calculator::mx()
{
    res=num1*num2;
}

void calculator::div()
{
    res=num1/num2;
}

void calculator::result()
{
    cout<<"RESULT:"<<res;
}

int main()
{

    int ch;
    calculator i;
    system("cls");

    do
    {
        
    cout<<endl;
    i.templatee();
    cout<<"Enter your choice:";
    cin>>ch;
    i.getinput();
    switch(ch)
    {
        case 1:
        i.add();
        i.result();
        break;

        case 2:
        i.sub();
        i.result();
        break;

        case 3:
        i.mx();
        i.result();
        break;

        case 4:
        i.div();
        i.result();
        break;
    }
    } while(ch!=4);
    return 0;

}