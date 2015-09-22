//
//  main.c
//  FuzzBizzNezz
//
//  Created by Shine Chaudhuri on 2015-09-22.
//  Copyright (c) 2015 Shine Chaudhuri. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n = 1;
    int Fuzz, Bizz, Nezz;
    int HigherNum, LowerNum;
    
    char FuzzChar[5] = "Fizz";
    char BizzChar[5] = "Bizz";
    char FuzzBizzChar[9] = "FizzBizz";
    
    printf("Enter Fuzz:\n");
    scanf("%d",&Fuzz);
    
    printf("Enter Bizz:\n");
    scanf("%d",&Bizz);
    
    printf("Enter Nezz:\n");
    scanf("%d",&Nezz);
    
    HigherNum = Fuzz >= Bizz ? Fuzz : Bizz;
    LowerNum = Fuzz < Bizz ? Fuzz : Bizz;
    
    while (n < Nezz)
    {
        
        if ((n % HigherNum == 0) && (n % LowerNum == 0)){
            printf("%d : %s\n", n, FuzzBizzChar);
        }
        else if (n % HigherNum == 0){
            printf("%d : %s\n", n, BizzChar);
        }
        else if(n % LowerNum == 0)
        {
            printf("%d : %s\n", n, FuzzChar);
        }
        else{
            printf("%d : %d\n", n, n);
        }
        
        n++;
        
    }
    
    return 0;
}
