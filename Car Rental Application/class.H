class all_data {
private:
    int vr_number;
    int dl_number;
    char user_name[20];
public:
    int car_model;
    int start_date[3];
    int inital_days;
    bool a_c;
    int rating;


    void get_data(int vr_no, int dl_no){
    vr_number = vr_no;
    dl_number = dl_no;
    }
    void get_name(char &p){
    strcpy(user_name, &p);
    }

    void delete_data(){
    vr_number = 0;
    dl_number = 0;
    strcpy(user_name, "");
    }
    int access_vr_num(){
    return vr_number;
    }
    int access_dl_num(){
    return dl_number;
    }
    char* access_user_name(){
        char* ch = user_name;
    return ch;}

    void fill_data(int dl, int vr_num, int y_, int Start0, int Start1, int Start2, int i_days, bool ac_){

    get_data(vr_num, dl);
    car_model = y_;
    start_date[0] = Start0;
    start_date[1] = Start1;
    start_date[2] = Start2;
    inital_days = i_days;
    a_c = ac_;

}

void remove_data(int r_num, int vr_num){
    delete_data();
    car_model = 0;
    start_date[0] = 0;
    start_date[1] = 0;
    start_date[2] = 0;
    inital_days = 0;
    a_c = 0;
}


    void data(){
    cout<<"<<<<Info:\n<<<< Vehicle Register Number: "<<vr_number<<"\n<<<< DL Number: "<<dl_number<<
        "\n<<<< Name: "<<user_name<<"\n<<<< Car Model: "<<car_model<<
        "\n<<<< Initial Booked Days: "<<inital_days<<"\n<<<< Starting Date: "<<start_date[0]<<
        "-"<<start_date[1]<<"-"<<start_date[2]<<"\n<<<< AC: "<<a_c<<"\n<<<< Feedback rate: "<<rating<<endl;}
};

class details : public all_data {

public:
    void data(){
    cout<<"<<<<Info:\n<<<< Vehicle Register Number: "<<access_vr_num()<<"\n<<<< DL Number: "<<access_dl_num()<<
        "\n<<<< Name: "<<access_user_name()<<" "<<"\n<<<< Car Model: "<<car_model<<
        "\n<<<< Initial Booked Days: "<<inital_days<<"\n<<<< Starting Date: "<<start_date[0]<<
        "-"<<start_date[1]<<"-"<<start_date[2]<<"\n<<<< AC: "<<a_c<<endl;}

};









