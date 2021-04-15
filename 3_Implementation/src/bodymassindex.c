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
 * @brief function to calculate bmi
 * 
 * @param weight 
 * @param height 
 * @return float 
 */
float BodyMassIndex(float weight,float height)
{
    return weight/(height*2);
    
}
