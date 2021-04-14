#include<stdio.h>
#include "unity.h"
#include "bodymassindex.h"


void setUp(void)
{
	
}
void tearDown(void)
{
	
}
void test_NormalWeight()
{
	TEST_ASSERT_EQUAL(BodyMassIndex(60,5.9),20.00);
}
void test_OverWeight()
{
	TEST_ASSERT_EQUAL(BodyMassIndex(80,5.1),31.00);
}
void test_UnderWeight()
{
	TEST_ASSERT_EQUAL(BodyMassIndex(50,5.9),16.00);
}
void test_BodyMassIndex()
{
	TEST_ASSERT_EQUAL(BodyMassIndex(60,5.9),20.00);
}

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
	

UnityBegin("Unit_Testing");	
RUN_TEST(test_BodyMassIndex);
RUN_TEST(test_UnderWeight);
RUN_TEST(test_OverWeight);
RUN_TEST(test_NormalWeight);
return(UnityEnd());		
}
