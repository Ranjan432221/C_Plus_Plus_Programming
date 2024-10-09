#include <stdio.h>
#include <stdlib.h>
int minCoins(int coins[], int numCoins, int amount) {
    int i, numCoinsUsed = 0;
    for (i = 0; i < numCoins; ++i) {
        while (amount >= coins[i]) {
            amount -= coins[i];
            numCoinsUsed++;
        }
    }

    return numCoinsUsed;
}

int main() {
   int n;
   printf("enter the size ");
   scanf("%d",n);
   printf("enter the nth no");
   int coins[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",coins[i]);
   }
   printf("here the proper code given below");
   for(int i=0;i<n;i++)
   {
    printf("%d",coins[i]);
   }
    int numCoins = sizeof(coins) / sizeof(coins[0]);
    int amount = 66;

    printf("Minimum number of coins needed: %d\n", minCoins(coins, numCoins, amount));

    return 0;
}
