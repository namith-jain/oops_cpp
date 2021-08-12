#include<stdlib.h>

using namespace std;

void quote_print(int n){
    for(int i=0;i<n;i++){
        cout<<"'";
    }
}

void print_options(){
    quote_print(70);
    cout<<endl;
    quote_print(20);
    cout<<" WELCOME TO CAR RENTAL COMPANY";
    quote_print(20);
    cout<<endl;
    quote_print(70);
    cout<<endl;
    quote_print(10);
    cout <<" 1 - Request Car. "<<endl;
    quote_print(10);
    cout <<" 2 - Return Car. "<<endl;
    quote_print(10);
    cout <<" 3 - Know about Pricing of cars. "<<endl;
    quote_print(10);
    cout <<" 4 - Cars Count."<<endl;
    quote_print(10);
    cout <<" 5 - All Data. "<<endl;
    quote_print(10);
    cout <<" 0-Exit "<<endl;
    quote_print(70);
    cout<<endl;
}
void sc(){
    cout<<"----- SC - Small Car -----"<<endl;
}

void fc(){
    cout<<"----- FC - Family Car -----"<<endl;
}

void lc(){
    cout<<"----- LC - Luxury Car -----"<<endl;
}

void sv(){
    cout<<"----- SV - Small Van -----"<<endl;
}

void lv(){
     cout<<"----- LV - Large Van -----"<<endl;
}

void price_details(){
    cout<<"<<<< DL number with more than 4 digits - Full DL type. "<<endl;
    cout<< "<<<< Small Cars --- $30/day, 100% Reduction for early return, 20% Penalty for returning after booked period."<<endl;
    cout<< "<<<< Family Cars --- $40/day, 50% Reduction for early return, 20% Penalty for returning after booked period."<<endl;
    cout<< "<<<< Luxury Cars --- $150/day, 30% Reduction for early return, 30% Penalty for returning after booked period."<<endl;
    cout<< "<<<< Small Vans --- $50/day, 50% Reduction for early return, 20% Penalty for returning after booked period."<<endl;
    cout<< "<<<< Large Vans --- $70/day, 50% Reduction for early return, 20% Penalty for returning after booked period."<<endl;
    cout<< "<<<< 10% Extra on demand AC for all vehicles except Luxury cars."<<endl;
}



