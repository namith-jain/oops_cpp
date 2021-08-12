#include<stdlib.h>
int price(int model, int sd_, int ed_,  bool ca){
    if (model == 1){
        int p = 30;
        if(ca){  p = p + ( p / 10);}
        if(sd_ == ed_) return sd_ * p;
        else if(sd_ > ed_) return (sd_*p) - ((sd_-ed_)*p);
        else if(sd_ < ed_) return (sd_*p) + ((ed_-sd_)*p);
    }
    if (model == 2){
        int p = 40;
        if(ca){ p = p + ( p / 10);}
        if(sd_ == ed_ ) return sd_ * p;
        else if(sd_ > ed_) return (sd_*p) - ((sd_-ed_)*(p/2));
        else if(sd_ < ed_) return (sd_*p) + ((ed_-sd_)*(p+p/20));
    }
    if (model == 3){
        int p = 150;
        if(sd_ == ed_ ) return sd_ * p;
        else if(sd_ > ed_) return (sd_*p) - ((sd_-ed_)*(p-p/30));
        else if(sd_ < ed_)  return (sd_*p) + ((ed_-sd_)*(p+p/30));;
        }
    if (model == 4){
        int p = 50;
        if(ca){p = p + ( p / 10);}
        if(sd_ == ed_ ) return sd_ * p;
        else if(sd_ > ed_) return (sd_*p) - ((sd_-ed_)*(p/2));
        else if(sd_ < ed_)return (sd_*p) + ((ed_-sd_)*(p+p/20));
        }
    if (model == 5){
        int p = 70;
        if(ca){p = p + ( p / 10);}
        if(sd_ == ed_ ) return sd_ * p;
        else if(sd_ > ed_) return (sd_*p) - ((sd_-ed_)*(p/2));
        else if(sd_ < ed_) return (sd_*p) + ((ed_-sd_)*(p+p/20));
    }
    return 0;
}




