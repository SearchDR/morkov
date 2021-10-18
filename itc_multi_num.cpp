#include "middle.h"
long long itc_multi_num(long long number){
int sum = 1;
if(number<0)
    number = -1*number;
while(number>0){
    sum *= number % 10;
    number = number / 10;
}
return sum;
}

