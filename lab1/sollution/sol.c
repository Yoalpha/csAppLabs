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

      return -128; 

}

int isTmax(int x){

    if(~x + 1 == 128){
        return 1
    }   
    return 0 

}

int allOddBits(int x){

    unsigned mask = 0xAAAAAAAA;
    if(x & mask != 0){
        return 1;   

    }
    return 0;
  

}

int main(){
    int x, y;
    
    printf("num1: ");
    scanf("%d", &x);

    printf("num2: ");
    scanf("%d", &y);
    
    printf("bitXor: %d", bitXor(x, y));
    printf("tmin: %d", tmin());
    printf("isTmax %d", isTmax(x));
    printf("allOddBits: %d", allOddBits(x));
    
    

}











