#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include"ListUpdate.H"
#include"days_calci.H"
#include"print.H"
#include"price.H"
#include"request.H"


using namespace std;
int main()
{
while(1)
    {
        print_options();
        int ch;
        cin>>ch;
        if (ch == 1){
            get_car();
        }
        else if (ch == 2){
            return_car();
        }
        else if (ch == 3){
            price_details();
        }
        else if ( ch == 4){
            cars_count();
        }
        else if(ch == 5){
            full_data();
        }
        else if(ch == 0)
            break;
    }
return 0;
}
