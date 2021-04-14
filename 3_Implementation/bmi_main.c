/**
 * @file bmi.c
 * @author 258292-HARSIMRAN (harsimranbatra1999@gmail.com)
 * @brief (Body Mass Indec Calculator)
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include "unity.h"
#include "bodymassindex.h"
#include "gymdiet.h"
#include "underweight.h"
#include "overweight.h"

/**
 * @brief Main function
 * 
 * @return int 
 */
int main()
{
    printf("WELCOME TO BODY MASS INDEX CALCULATOR AND FURTHER GUIDANCE\n\n");
    float weight;
    float height;
    printf("ENTER YOUR WEIGHT IN KGs =");
    scanf("%f",&weight);
    printf("ENTER YOUR HEIGHT IN FEETs =");
    scanf("%f",&height);
    float bmi = BodyMassIndex(weight,height);   
    
    printf("YOUR BODY MASS INDEX IS = %.2f\n\n",bmi);
    
   	 if(bmi<18)
    		{
     		underweight1();
 		}
 	else if(bmi>25)
 		{
  		overweight1();
 		}
 	else {
  		printf("YOU ARE NORMAL\n");
  		printf("YOU NEED TO MAINTAIN YOUR DIET\n\n");
  		printf("YOU NEED NOT TO PAY ANYTHING\n\n");
   	} 
	
		
}
