#include "middle.h"
int itc_max_num(long long number){
int maxi = 0;
int zefr;
if(number<0)
    number = -1*number;
while(number>0){
        zefr = number % 10;
    if(maxi < zefr)
        maxi = zefr;
    number = number / 10;
}
return maxi;
}
