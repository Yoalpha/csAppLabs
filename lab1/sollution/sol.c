#include <stdio.h>

int bitXor(int x, int y){

    //8 4 2 1 
    //0 1 0 0 - 4
    //0 1 0 1 - 5
    //----------- xor
    //0 0 0 1 - 1 
    //
    //if you and, you get - 0100
    //if you not both you get - 1011, 1010
    //and the not values - 1010
    //and the nots of the new values - 0101 and 1011 = 0001
    int temp;
    int notx;
    int noty;
    int temp2;
    int res;
    temp = x & y;
    notx = ~x;
    noty = ~y;
    temp2 = notx & noty;
    res = ~temp & ~temp2;
    return res;

}

int tmin(void){

    

}

int main(){
    int x, y;
    
    printf("num1: ");
    scanf("%d", &x);

    printf("nums: ");
    scanf("%d", &y);
    
    printf("%d", bitXor(x, y));
    

}











