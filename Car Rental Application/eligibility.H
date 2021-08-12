bool dltype(int dl_digits)
{
    int temp=0;
    while(dl_digits) {
        temp = dl_digits % 10;
        dl_digits = dl_digits/10;
    }
    if(temp == 1 )return 1;
    else return 0;
}
int eligibility_check(int age, char &cm /*car model */, bool type)
    {
        int sc = strcmp("SC", &cm);
        int fc = strcmp("FC", &cm);
        int lc = strcmp("LC", &cm);
        int sv = strcmp("SV", &cm);
        int lv = strcmp("LV", &cm);
        if (sc == 0 && age >=17 &&  age <=60){
            return 1;}
        if (fc == 0 && age >= 21 && age <=60){
            return 2;}
        if (lc == 0 && age >= 25 && age <=60){
            return 3;}
        if (sv == 0 && age >= 21 && age <=60){
            return 4;}
        if (lv == 0 && age >= 25 && age <=60 && type){
            return 5;}
        else{
            return 0;}
    }
