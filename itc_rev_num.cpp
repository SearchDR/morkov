#include "middle.h"
int itc_rev_num(long long number){
    int rev;
    int itog = 0;
    rev = itc_len_num(number);
    while( rev>0){
        itog = itog * 10 + rev % 10;
        rev = rev / 10;
    }
    return itog;

}
