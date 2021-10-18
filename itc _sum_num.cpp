#include "middle.h"
int itc_sum_num(long long number){
//if((number<−9 223 372 036 854 775 808) || (number> 9 223 372 036 854 775 807))
   // return -1;
int sum = 0;
if(number<0)
    number = -1*number;
while(number>0){
    sum += number % 10;
    number = number / 10;
}
return sum;
}
