//
//  timeLab.c
//  portfolio
//
//  Created by Amberkar, Aryan on 9/13/19.
//  Copyright © 2019 Simple IO. All rights reserved.
//

#include "portfolio.h"
#include <stdio.h>

int minutes(void) {
    
    int sec, h, m, s;
    
    printf("Input seconds: ");
    
    scanf("%d", &sec);
    
    
    
    h = (sec/3600);
    
    
    
    m = (sec -(3600*h))/60;
    
    
    
    s = (sec -(3600*h)-(m*60));
    
    
    
    printf("Hours: %d\nMinutes: %d\nSeconds: %d\n",h,m,s);
    
    
    
    return 0;
    
}
