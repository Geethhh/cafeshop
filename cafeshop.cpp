#include<iostream> 
using namespace std;
class cafe
{
    private:
        int m=0,c=0,l=0;
    public:
        void espresso(int i)
        {
            if(i==1)
            m+=60;
            else if(i==2)
            c+=75;
            else if(i==3)
            l+=100;
        }
        void cappuccino(int i)
        {
            if(i==1)
            m+=80;
            else if(i==2)
            c+=90;
            else if(i==3)
            l+=125;
        }
        void Latte(int i)
        {
            if(i==1)
            m+=100;
            else if(i==2)
            c+=125;
            else if(i==3)
            l+=150;
        }
        int bill()
        {
            return m+c+l;
        }

};

int addon()
{
    cout<<"Enter 1 for Milk"<<endl;
    cout<<"Enter 2 for Cream"<<endl;
    cout<<"Enter 3 for Latte"<<endl;

    int a;
    cin>>a;
     
    if(a>3)
    {
    cout<<"Please enter a VALID number"<<endl; 
    cin>>a;
    }

    return a;
}

int main()
{
    
    cout<<"WELCOME TO CAFE"<<endl;
    cout<<endl;
    cout<<"_______________________________________"<<endl;
    cout<<"Product/Add-on  | Milk | Cream | Latte"<<endl;
    cout<<"_______________________________________"<<endl;
    cout<<"_______________________________________"<<endl;
    cout<<"ESPRESSO        |  60  |  75   |  100"<<endl;
    cout<<"_______________________________________"<<endl;
    cout<<"CAPPUCCINO      |  80  |  90   |  125"<<endl;
    cout<<"_______________________________________"<<endl;
    cout<<"LATTE           |  100 |  125  |  150"<<endl;
    cout<<"_______________________________________\n"<<endl;

    cafe d;
    bool f=1;
    while(f)
    {
    cout<<"Press 1 for Espresso"<<endl;
    cout<<"Press 2 for Cappuccino"<<endl;
    cout<<"Press 3 for Latte"<<endl<<endl;

    int a;
    cin>>a;

    switch(a)
    {
        case 1: d.espresso(addon());
                break;
        case 2: d.cappuccino(addon());
                break;
        case 3: d.Latte(addon());
                break;
        default:cout<<"Please enter a valid number"<<endl;
                cin>>a;
    }
    cout<<"Do you want some more coffee press 1 or else press 0"<<endl;
    cin>>f;
    }

    cout<<"Total bill:"<<d.bill()<<endl;
    cout<<"Thank you visit again!"<<endl;
}