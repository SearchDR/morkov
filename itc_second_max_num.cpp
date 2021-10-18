#include "middle.h"
int itc_second_max_num(long long number){
int maxi = itc_max_num(number);
int second_max = -1;
int second;
if(number<0)
    number = -1*number;
while(number>0){
    second = number % 10;
    if(second>maxi)
        maxi = number;
    number = number / 10;
}
return maxi;
}
