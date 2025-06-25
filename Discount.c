#include <stdio.h>
#include <cs50.h>
float discount1 (void);
float price2 (float price , float discount);
int main(void){
 for ( int i = 0 ; i<3 ; i= i+1 ){

 float regular = get_float("whats the original price ?  ");
 float discount = discount1();
 float sale = price2(regular , discount);
 printf("the new price : %.3f\n" , sale);

 }

}
 float discount1 (void){


     return get_float("whats the discount ?   ");
 }
 float price2 (float price , float discount){

   return price * (1 - discount/100 );
 }
