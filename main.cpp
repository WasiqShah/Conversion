#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int choice;

    menue:

    cout<<endl<<endl<<"1. Input Binary number : "<<endl;
    cout<<"2. Input Hex : "<<endl;
    cout<<"3. Input Decimal : "<<endl;
    cout<<"4. Exit : "<<endl<<endl;

    cout<<" Enter your option : ";
    cin>>choice;

    switch(choice)
    {

    case 1:
    {

    int i,j, a=0, Size;
    int digit=0, s;

    cout<<endl;

    cout << "Enter size of a number you would like to enter: ";
    cin>>Size;


    int x = Size;
    int b[Size];

    cout<<endl<< "Enter a Binary Number: " << endl;

    for(i=0;i<Size;i++)
    {
        cin>>b[i];
    }

    for(i=0;i<Size;i++)
    {
        if(b[i]<0 || b[i]>1 )
            goto end;
            break;
    }


     for(i=0;i<Size;i++)
    {
        x--;
        a = a + ( pow(2,x)* b[i]);
    }

   cout<<endl<<"Decimal : "<<a<<endl;
   cout<<endl<<"Hexa Decimal : ";

if(Size%4 != 0)
{
    int c = Size%4;

    for(s=0;s<Size%4;s++)
    {
        c--;
        digit = digit + pow(2,c)*b[s];
    }

    if (digit>=0 && digit < 10)
        cout<<digit;

    digit = 0;
}

    int start = Size%4;       //e.g 8%4 = 0, start = 0
    int stop =  start + 4;
    int counter = 4;

        for(j=start;j<stop;j++)
    {
        counter--;
        digit = digit + (pow(2,counter)*b[j]);

    if(j == (stop - 1) && counter == 0 && stop <= Size)
    {

            if(digit >= 0 && digit < 10)
            cout<<digit;

            else
            {
                switch(digit)
            {
                case 10:
                    cout<<'A';
                    break;
                case 11:
                    cout<<'B';
                     break;
                case 12:
                    cout<<'C';
                     break;
                case 13:
                    cout<<'D';
                     break;
                case 14:
                    cout<<'E';
                     break;
                case 15:
                    cout<<'F';
                     break;
            }

            }

        start = stop;
        stop =  start + 4;
        counter = 4;
        digit = 0;
    }

    }


     cout<<endl;

     goto menue;


    }

    break;


    case 2:
    {

    int i,j, a=0, Size;
    int digit=0, s;

    cout<<endl;

    cout << "Enter size of a number you would like to enter: ";
    cin>>Size;

    char b[Size];

    cout<<endl<< "Enter a Hexa Decimal Number: " << endl;

    for(i=0;i<Size;i++)
    {
        cin>>b[i];
    }

    for(i=0;i<Size;i++)
    {
        if(b[i]<'0' || b[i]>'F' )
            goto end;
            break;
    }

    for(i=0;i<Size;i++)
    {
        if(b[i]=='0')
             b[i]=0;
        else if(b[i]=='1')
             b[i]=1;
        else if(b[i]=='2')
             b[i]=2;
        else if(b[i]=='3')
             b[i]=3;
        else if(b[i]=='4')
             b[i]=4;
        else if(b[i]=='5')
             b[i]=5;
        else if(b[i]=='6')
             b[i]=6;
        else if(b[i]=='7')
             b[i]=7;
        else if(b[i]=='8')
             b[i]=8;
        else if(b[i]=='9')
             b[i]=9;
        else if(b[i]== 'A')
            b[i]=10;
        else if(b[i]=='B')
            b[i]=11;
        else if(b[i]=='C')
            b[i]=12;
        else if(b[i]=='D')
            b[i]=13;
        else if(b[i]=='E')
            b[i]=14;
        else if(b[i]=='F')
            b[i]=15;
    }

    int x=Size;

     for(i=0;i<Size;i++)
    {
        x--;
        a = a + ( pow(2,x)* b[i]);
    }

    cout<<endl<<" Decimal : "<<a<<endl;
    cout<<endl<<" Binary : ";

    for(i=0;i<Size;i++)
    {
        if(b[i]==0)
            cout<<"0000";
        else if(b[i]==1)
            cout<<"0001";
        else if(b[i]==2)
            cout<<"0010";
        else if(b[i]==3)
            cout<<"0011";
        else if(b[i]==4)
            cout<<"0100";
        else if(b[i]==5)
            cout<<"0101";
        else if(b[i]==6)
            cout<<"0110";
        else if(b[i]==7)
            cout<<"0111";
        else if(b[i]==8)
            cout<<"1000";
        else if(b[i]==9)
            cout<<"1001";
        else if(b[i]==10)
            cout<<"1010";
        else if(b[i]==11)
            cout<<"1011";
        else if(b[i]==12)
            cout<<"1100";
        else if(b[i]==13)
            cout<<"1101";
        else if(b[i]==14)
            cout<<"1110";
        else if(b[i]==15)
            cout<<"1111";

         goto menue;

    }
    }break;


    case 3:
    {
        int Size;

    cout<<" Enter Size of array : ";
    cin>>Size;

    int i = Size, j=0,num=0;
    int a[Size];
    int x=-1,s,digit;

    cout<<" Enter a Number : ";
    cin>>num;

    while((num/2)!= 0)
    {
        i--;
        x++;
        a[i]=(num%2);
        num =num /2;
        a[x]=0;
    }

    if((num/2)== 0)
        a[i-1]=(num%2);

    for(j=0;j<Size;j++)
    {
        cout<<a[j];
    }


    cout<<endl<<"Hexa Decimal : ";

if(Size%4 != 0)
{
    int c = Size%4;

    for(s=0;s<Size%4;s++)
    {
        c--;
        digit = digit + pow(2,c)*a[s];
    }

    if (digit>=0 && digit < 10)
        cout<<digit;

    digit = 0;
}

    int start = Size%4;       //e.g 8%4 = 0, start = 0
    int stop =  start + 4;
    int counter = 4;

        for(j=start;j<stop;j++)
    {
        counter--;
        digit = digit + (pow(2,counter)*a[j]);

    if(j == (stop - 1) && counter == 0 && stop <= Size)
    {

            if(digit >= 0 && digit < 10)
            cout<<digit;

            else
            {
                switch(digit)
            {
                case 10:
                    cout<<'A';
                    break;
                case 11:
                    cout<<'B';
                     break;
                case 12:
                    cout<<'C';
                     break;
                case 13:
                    cout<<'D';
                     break;
                case 14:
                    cout<<'E';
                     break;
                case 15:
                    cout<<'F';
                     break;
            }

            }

        start = stop;
        stop =  start + 4;
        counter = 4;
        digit = 0;
    }

    }

     cout<<endl;
    }
        goto menue;
    break;


    case 4:
        goto end;
    break;


    default:
        cout<<endl<<" Plz Choose again! "<<endl;
        goto menue;
        break;

    }

    end:

     return 0;

}
