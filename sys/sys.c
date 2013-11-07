/*
 * sys.c
 *
 *  Created on: 2013-11-7
 *      Author: 31lab
 */

#include <msp430f5529.h>
#include "sys.h"
void delayms(int count)  // /* X1ms */
{
        int i,j;
        for(i=0;i<count;i++)
                for(j=0;j<1000;j++);
}


