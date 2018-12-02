//
//  main.c
//  CYYLX
//
//  Created by admin on 2018/11/18.
//  Copyright © 2018 admin. All rights reserved.
//

/*#include <stdio.h>
int main()
{
    int x,y;
    for(x=0;x<=20;x++){
        for(y=0;y<=33;y++){
            if( 5*x+3*y+(100-x-y)/3.0==100)
            {
                
                printf("x=%d,y=%d,z=%d\n",x,y,(100-x-y));
            }
        }hh
    }
}
*/

/*#include <stdio.h>
int main()
{
    int i=0,n,sum=0;
    printf("Input a number:");
    scanf("%d",&n);
    for(i=0;;i++){

         printf("Input a number:");
        if(n==0){
            printf("Input a number:");
            scanf("%d",&n);
            break;
        }
        else if(n<0){
            continue;
        }
        else{
            sum=sum+n;
            printf("Input a number:");&
            scanf("%d",&n);
        }
        
            
       
    }
    printf("sum = %d, count = %d\n",sum,i);
}*/


#include <stdio.h>

int main()
{
    double c;
    float f;
    printf("Please input cels: ");
    scanf("%lf",&c);
    f=c*9.0/5.0+32.0;
    printf("The fahr is: %.2f",f);
    
    
}
