#include "middle.h"
int itc_len_num(long long number){
    long long q = 0;
    if (number == 0)
        return 1;
    if(number<0){
        number = 0 - number;
    }
    while(number > 0){
        number = number / 10;
        q = q + 1;
    }
    return q;

}
