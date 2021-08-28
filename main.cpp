#include <iostream>
#include <stdlib.h>
using namespace std;
#include "percal.h"

void menu(void)
{
    cout<<"A/a>>Input year which you want"<<endl;
    cout<<"B/b>>Input month which you want"<<endl;
    cout<<"C/c>>View Current Time"<<endl;
    cout<<"E/e>>Quit"<<endl;

}

void PrintWeek(void)
{
    cout<<"Sun   Mon   Tue   Wed   Thu   Fri   Sat"<<endl;
}

void split(void)
{
    cout<<"-------------------------------------------"<<endl;
}
void choiceA(void)
{
    int y;
    cout<<"Please Input Year :>>";
    cin>>y;
    Calender year(y);
    //加载函数
    int i;
    for(i=1;i<=12;i++)
    {
        PrintMonth(i);
        split();
        PrintWeek();
        
        PrintDate(y,i);
        cout<<endl;
        split();
        cout<<endl;
    }
    
}
void choiceB(void) 
{
    int y;
    int m;
    cout<<"Please Input date :>>";
    cin>>y>>m;
    Calender(y,m);
    PrintMonth(m);
    split();
    PrintWeek();
    PrintDate(y,m);
    cout<<endl;
    split();
    cout<<endl;
}


void choiceC(void)
{

}


void Quit(void)
{
    cout<<">>goodbye<<"<<endl;
    exit(0);
}




void Display(char ch)
{
    switch(ch)
    {
        case 'A':
        case 'a':
            choiceA();
            break;
        case 'B':
        case 'b':
            choiceB();
            break;
        case 'C':
        case 'c':
            choiceC();
            break;
        case 'E':
        case 'e':
            Quit();
            break;
        default:
            cout<<"Input Error"<<endl;
            cout<<"Please Again"<<endl; 
            break;
        
    }
}



int main(void)
{
    char input;
    do
    {
        menu();
        cin>>input;
        Display(input);
    
    }while(input!='e'||input!='E');
    
    
    
    
    return 0;

}
