#include<bits/stdc++.h>

void listupdate (int &model, int &cc, int &a, int &b, int &c, int &d, int &e, int &reg_count, bool toggle)
{
    if(toggle){
        reg_count = reg_count + 1;
        if (model == 1){
            cc = cc+1; a = a+1;}
        else if (model == 2){
            cc = cc+1; b = b+1;}
        else if (model == 3){
            cc = cc+1; c = c+1;}
        else if (model == 4){
            cc = cc+1; d = d+1;}
        else if (model == 5){
            cc = cc+1; e = e+1;}
        }
    else {
        if (model == 1){
            cc = cc-1; a = a-1;}
        else if (model == 2){
            cc = cc-1; b = b-1;}
        else if (model == 3){
            cc = cc-1; c = c-1;}
        else if (model == 4){
            cc = cc-1; d = d-1;}
        else if (model == 5){
            cc = cc-1; e = e-1;}
        }
}


