#include "middle.h"
int itc_second_simple_max_num(long long number){
if(itc_second_max_num(number) == itc_max_num(number))
    return -1;
return itc_second_max_num(number);
}
