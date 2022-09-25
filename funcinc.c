#include <stdio.h>
 
int max_of_four(int a, int b, int c, int d){
 int max1 ;
 if(a<b)max1 =b;
 else max1 = a;
 int max2;
 if(c<d)max2 =d;
 else max2 = c;
 
 if(max2<max1)return max1;
 else return max2;
 
 
}
 
 
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
 
    return 0;
}
