#include "middle.h"
int itc_null_count(long long number){
int count = 0;
if(number == 0)
    return 1;
if(number<0)
    number = -1*number;
while(number>0){
    if(0 == number % 10)
        count++;
    number = number / 10;
}
return count;
}
