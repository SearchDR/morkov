#include "middle.h"
int itc_covert_num(long long number,int ss){
int itog=0;
int g = 1;
if((ss>10) || (ss<2))
    return -1;
while(number>0){
    itog = itog + number % ss * g;
    g = g * 10;
    number = number / ss;

}
return itog;

}
