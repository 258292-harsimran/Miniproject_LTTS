#include "bodymassindex.h"
#include<stdio.h>


void diet()
{
  printf("MILK,FRUITS,VEGGIES,CHICKEN,PANEER,POHA,OATS,WHEY PROTIEN\n\n");
     printf("AMOUNT TO BE PAID = 1000RS\n\n");
}

void gymlist()
{
 printf("NEARBY GYMS ARE\n 1.GOLD's GYM\n 2.BURN GYM\n 3.ANYTIME FITNESS\n 4.CLUB VIVA\n 5.CODE FITNESS\n\n CHOOSE ANY ONE=\n");
        int gym_choice;
        scanf("%d",&gym_choice);
        
        if(gym_choice==1)
      {
       
          printf("ADDRESS = SCO 43 MAIN MARKET SECTOR 32 LUDHIANA PUNJAB INDIA\n");
          printf("AMOUNT TO BE PAID = 1000RS\n\n");
       
      }
     else if(gym_choice==2)
      {
       
          printf("ADDRESS = SCO 102 SECTOR 40 LUDHIANA PUNJAB INDIA\n");
          printf("AMOUNT TO BE PAID = 1000RS\n\n");
      }
     else if(gym_choice==3)
      {
       
          printf("ADDRESS = COMPLESX NO. 1 MAIN MARKET VILLAGE GILL LUDHIANA PUNJAB INDIA\n");
          printf("AMOUNT TO BE PAID = 1000RS\n\n");
      }
     else if(gym_choice==4)
      {
       
          printf("ADDRESS = SHOP N0.11 CHANDIGARH ROAD LUDHIANA PUNJAB INDIA\n");
          printf("AMOUNT TO BE PAID = 1000RS\n\n");
      }
     else if(gym_choice==5)
      {
    
          printf("ADDRESS = SCO 100 1st FLOOR MAIN MARKET TAJPUR ROAD LUDHIANA PUNJAB INDIA\n");
          printf("AMOUNT TO BE PAID = 1000RS\n\n");
      }
}

