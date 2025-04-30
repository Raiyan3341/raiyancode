#include<stdio.h>
int main() {
  int money;

  printf("Enter the amount of money: ");
  scanf("%d", &money);

  if (money >= 10000 ) {
    printf("she will buy a Gucci Bag.\n");

    if ( money > 20000 ){
        printf("she will also buy a Gucci Belt");
    
    }
  }
else if ( money >= 5000 ) {

    printf("she will also buy a levis bag");

}
else {

    printf(" she will buy something.\n");
}

return 0;
}