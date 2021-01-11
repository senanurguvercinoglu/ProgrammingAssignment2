//
//  main.c
//  Q1
//
//  Created by senanur güvercinoğlu on 17.12.2020.
//  Copyright © 2020 senanur güvercinoğlu. All rights reserved.
//SENANUR GUVERCİNOGLU 150119740


//this program take number input from user and reverse number's last N digits which N also selected by user.

#include <stdio.h>
#include <math.h>

void reverseN(int *number, int N);
int main( ){
    int num, N, i;
    int d=0;
    //printf("Enter the number :\n");//we can also use the function with print this.
    scanf("%d",&num);
    //printf("Enter a digit number you want to reverse: \n ");////we can also use the function with print this.
    scanf("%d",&N);
    for(i=num; i>0; i/=10, d++); //Counting digits of number.
    if(N>d) //Checking if N is bigger than the number's digits.
        printf("N must be less than %d!\n", d+1);
    else{
        reverseN(&num, N);//Invoke the function.
        printf("%d",num);
    }
    return 0;
}
void reverseN(int *number, int N){
    int remain,i=N,changed=0; //for store the reverse part we use changed
    while (i>0){ //reverse N digits with while loop.
        remain = *number% 10 ;
        changed = (changed*10) + remain ;
        *number = (*number)/10 ;
        i--;
    }
    
    *number = (*number * (int)pow(10, N)) + changed; //combining the changed  with the number.
    //we use pow function for the missing digits and then we add the changed.
}

