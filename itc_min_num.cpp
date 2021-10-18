#include "middle.h"
int itc_min_num(long long number){
int mini = 10;
if(number<0)
    number = -1*number;
while(number>0){
    if(mini >= number % 10)
        mini = number % 10;
    number = number / 10;
}
return mini;
}
