#include"class.H"
#include<vector>
#include"eligibility.H"
#include"data_type.H"
#include<time.h>

// to generate random number of 4 digits for Vehicle number
int random_num(){
    srand(time(NULL));
    return rand() % 10000;
}

void get_car(){
        cout<<"Enter your DL number (starting with 1 is a HV licence): "<<endl;
        cin>>dl;
            if(d[dl].access_dl_num() !=0 ){
                cout<<"You have already taken car."<<endl;}
            else{
                for(int i=0; i<10;i++){
                    if(db[i].access_dl_num() == dl){
                        cout<<"<<<<<<<<<<<< Thank you choosing our service again!!\n<<<<<<<<<<<< Last time you rated us: "<<db[i].rating<<endl;
                    }
                }
                dl_type = dltype(dl);
                cin.ignore();
                cout<<"Enter your full name: "<<endl;
                cin.getline(name, 20);
                cout<<"Enter your DOB: "<<endl;
                cin>> dob[0]>> dob[1]>> dob[2];
                age = (days(dob[0], dob[1], dob[2], date(), month(), year()) / 365);
                cout<<"<<<< Your age is: "<<age<<endl;
                if(age < 17){cout<<"You cannot take car!! "<<endl;}
                else if(dl_type == 1 && age < 25){cout<<"Invalid!!"<<endl;}
                else{
                    if(age >= 25 && dl_type == 1) lv();
                    if(age >= 25) lc();
                    if(age >= 21) {fc();sv();}
                    if(age >= 17) sc();
                    cout<<"Enter car model: "<<endl;
                    cin>>car;
                    model = eligibility_check(age, *car, dl_type);
                        if(model == 0){
                            cout<<"Invalid!! You cannot take "<<car<<" !!"<<endl;}
                        else{
                            if(model == 3) ac_= 1;
                            else {
                                cout<<"Air Conditioning required (1) or not (0): "<<endl;
                                cin>>ac_;
                            }
                            cout<<"Enter Start date: "<<endl;
                            cin>>Start[0]>> Start[1]>> Start[2];
                            cout<<"Enter End date: "<<endl;
                            cin>>End[0]>> End[1]>> End[2];
                            int inital_alloted_days = days(Start[0], Start[1], Start[2], End[0], End[1] , End[2]);
                            vr_num = random_num();
                            d[dl].fill_data(dl, vr_num, model, Start[0], Start[1], Start[2], inital_alloted_days, ac_ );
                            d[vr_num].fill_data(dl, vr_num, model, Start[0], Start[1], Start[2], inital_alloted_days, ac_ );
                            db[total_count].fill_data(dl, vr_num, model, Start[0], Start[1], Start[2], inital_alloted_days, ac_ );
                            d[dl].get_name(*name);
                            d[vr_num].get_name(*name);
                            db[total_count].get_name(*name);
                            //db[w].store();
                            cout<<"<<<< "<<car<<" rented to "<<name<<"\n<<<< Vehicle Registration number "<<vr_num<<"."<<endl;
                            listupdate(model, car_count[0], car_count[1], car_count[2], car_count[3] , car_count[4], car_count[5], total_count, 1);
                            }
                    }
            }
}

void return_car()
    {
        cout<<"Enter your DL or Vehicle Registration number: "<<endl;

        cin>>r_num;
        if(d[r_num].access_dl_num() == 0 || d[r_num].access_vr_num() == 0) cout<<"You have not taken Car!!"<<endl;
        else
        {
            int c[8] = {d[r_num].access_dl_num(), d[r_num].car_model, d[r_num].start_date[0], d[r_num].start_date[1],
            d[r_num].start_date[2], d[r_num].inital_days, d[r_num].a_c, d[r_num].access_vr_num()};

            int total_days = days(c[2], c[3], c[4], date(), month(), year());
            if(total_days <= 0){
                cout<<"<<<< You have requested for rent, but not rented.\n Pay: 0"<<endl;
            }
            else{
                m = price(c[1], c[5], total_days, c[6]);
                cout<<"You have to Pay: $"<<m<<endl;
                for(int i=0;i<99999;i++){
                    if(db[i].access_dl_num() == r_num || db[i].access_vr_num() == r_num){
                        int rate;
                        cout<<"<<<< Feedback:"<<endl;
                        cout<<"Rate our service (0-5): "<<endl;
                        cin>>rate;
                        db[i].rating = rate;
                        break;
                    }
                }
            }
            listupdate(c[1], car_count[0], car_count[1], car_count[2], car_count[3] , car_count[4], car_count[5], total_count, 0);
            d[r_num].remove_data(c[0], c[7]);

        }
 }

 void list_data()
    {
        cout<<"Enter your DL or Vehicle Registration number: "<<endl;
        cin>>val;
        d[val].data();
    }

 void cars_count()
    {
        cout<<"-----Total cars out:   "<<car_count[0]<<endl;
        cout<<"-----Small cars out:   "<<car_count[1]<<endl;
        cout<<"-----Family cars out:  "<<car_count[2]<<endl;
        cout<<"-----Luxury cars out:  "<<car_count[3]<<endl;
        cout<<"-----Small vans out:   "<<car_count[4]<<endl;
        cout<<"-----Large vans out:   "<<car_count[5]<<endl;
        if(car_count[0]!= 0){list_data();}
    }


void full_data()
    {
        cout<<"Total customers count: "<<total_count<<endl;
        for(int i=0; i < total_count; i++){
            db[i].data();
        }
    }



