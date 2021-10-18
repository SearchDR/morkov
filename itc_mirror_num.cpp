#include "middle.h"
bool itc_mirror_num(long long number){
    long long rev = number;
    int itog = 0;
    while( rev>0){
        itog = itog * 10 + rev % 10;
        rev = rev / 10;
    }
    return itog == number;

}
