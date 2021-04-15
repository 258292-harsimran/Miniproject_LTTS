/**
 * @file bodymassindex.c
 * @author 258292-harsimran (harsimranbatra1999@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "bodymassindex.h"
#include<stdio.h>
/**
 * @brief function for overweight
 * 
 * return void
 */

void overweight1()
{
 printf("YOU ARE OVERWEIGHT\n\n");
  printf("YOU NEED TO LOOSE WEIGHT\n");
  printf("CHOOSE FROM THE BELOW PLANS\n 1.JOIN GYM\n 2.BUY DIET PLAN\n 3.BOTH\n");
  printf("YOUR CHOICE = \n");
  int choice;
     scanf("%d",&choice);
     if(choice==1)
  {
       printf("DO YOU AGREE TO PAY 1000RS/MONTH FOR GYM\n PRESS 1 FOR YES AND 2 FOR NO THEN PRESS ENTER\n");
       int gym_cost=1000;
       int s1;
       scanf("%d",&s1);
       if(s1==1)
    {
        gymlist();
    }
    else if(s1==2)
     {
      printf("OOPS THESE ARE PAID SERVICES SORRY\n");
     }
    else
     {
      printf("INVALID INPUT\n\n");
     }
       
  }
     else if(choice==2)
    {
        printf("ACCORDING TO YOUR BMI YOU NEED A GAINING DIET\n GAINING DIET FEES = 1000/DIET\n\n");
        printf("DO YOU AGREE TO PAY 1000RS/DIET\n PRESS 1 FOR YES AND 2 FOR NO THEN PRESS ENTER\n");
        int s2;
        scanf("%d",&s2);
        if(s2==1)
      {
         diet();
      }
     else if(s2==2)
      {
       printf("OOPS THESE ARE PAID SERVICES SORRY\n");
      }
       }
     else if(choice==3)
     {
       printf("DO YOU AGREE TO PAY 2000RS FOR BOTH GYM AND DIET PLAN\n PRESS 1 FOR YES AND 2 FOR NO THEN PRESS ENTER\n");
       int s3;
       scanf("%d",&s3);
       if(s3==1)
       {
        gymlist();
        diet();
       }
       else if(s3==2)
      {
       printf("OOPS THESE ARE PAID SERVICES SORRY\n");
      }
       
       printf("TOTAL AMOUNT TO BE PAID = 2000RS\n\n");
     }
  else
    {
     printf("INVALID INPUT\n\n");
    }
}

