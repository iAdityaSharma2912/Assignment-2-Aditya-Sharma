#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void num(int a , int b){
    char arr [11][11]={"zero" ,"one" ,"two", "three" , "four" , "five" , "six" , "seven" , "eight" ,  "nine"  };
    for(int i =a ; i<=b ; i++){
    if(i<10){
        printf("%s \n" , arr[i]);
    }   
    
    else{
        if(i%2==0) printf("even \n" );
        else printf("odd \n" );
    
    }
    }
}

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
      num(a, b);

    return 0;
}

