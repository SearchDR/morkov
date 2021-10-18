#include "middle.h"
int itc_rev_covert_num(long long number,int ss){
int a = 1;
int itog = 0;
if((ss>10) || (ss<2))
    return -1;
    while(number > 0){
    itog = itog + number%10 * a;
        if(number%10>=ss)
            return -1;
    number = number / 10;
    a = a * ss;
    }
return itog;

}
