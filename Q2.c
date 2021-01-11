
//  main.c
//  Q2
//
//  Created by senanur güvercinoğlu on 18.12.2020.
//  Copyright © 2020 senanur güvercinoğlu. All rights reserved.

//SENANUR GUVERCİNOGLU 150119740

//this program  print the letters W, X, Y and Z using the character of ‘*’ with the given size with some requirements.
#include<stdio.h>
#include<math.h>

void w(void);
void y(void);
void x(void) ;
void z(void);


int size;


#include<stdio.h>
int main()
{
    char answer,letter;//char characters for user's letter and answers inputs.
    printf("Welcome to the letter printer.\n");
    
    for(;;)// infinite loop
    {
        printf("\nEnter size : ");
        scanf("%d",&size);
        if(size<5|| size%2==0)// conditions for size
        {
            printf("\nInvalid size.Enter the size again: ");
            continue;
        }
        
    L1:
        printf("\nEnter the letter :");
        scanf("%c",&letter);
        scanf("%c",&letter);
        switch(letter)
        {
                
                //functions displayed with user's selected letter
                
            case 'Z':
                z();
                break;
            case 'Y':
                y();
                break;
            case 'W':
                w();
                break;
            case 'X':
                x();
                break;
            default:
            {
                //if user's input does not include one of those x,y,z,w then function will print "invalid letter "
                printf("\nInvalid Letter: Enter the letter again:");
                goto L1;
                
            }
                
        }
        //if user does not want to continue and select Y or y then program will closed
        printf("\nWould you like to continue (Y/N)");
        scanf("%c",&answer);
        scanf("%c",&answer);
        if(answer=='Y'||answer=='y')
            continue;
        else
            printf("Goodbye :)");
        break;
    }
    
    return 0;
}

// letter Z
void z(void)
{
    int i, j, counter = size - 1;
    for (i = 0; i < size; i++) {//for loop for size times
        for (j = 0; j < size; j++) {
            if (i == 0 || i == size - 1 //conditions for print *
                || j == counter)
                printf("*");
            else
                printf(" ");
        }
        counter--;
        printf("\n");
        
    }
    
    printf("\n");
}




// letter Y

void y(void)
{
    
    printf("\n");
    
    int i, j, counter = 0;
    for (i = 0; i < size; i++) { //for loop for size times
        for (j = 0; j <= size; j++) {
            if (j == counter
                || (j == size - counter
                    
                    && i < size / 2))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        if (i < size / 2)
            counter++;
    }
    
    printf("\n");
}





// letter W
void w(void)
{
    
    
    for(int i=0;i<size;i++){ //for loop for size times
        for(int j=0;j<=(4*size);j++){
            if(j == i){ // '\'
                printf("*");
            }
            else if(i!=size-1 && j==(size*2-2)-i){
                printf("*");
            }else if(i!=0 && j==(size*2-2)+i){
                printf("*");
            }
            else if(i!=size-1 && j==((3*size)+(size-4)-i)){
                printf("*");
            }else
                printf(" ");
        }
        printf("\n");
    }
    
}
//letter X
void x(void)
{
    
    
    
    int i,j,count = size;
    
    for (i = 1; i <= count; i++) {
        for (j = 1; j <= count; j++) {
            if (j == i || (j == count - i + 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        
        printf("\n");
    }
    
}
