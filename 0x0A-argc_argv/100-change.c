#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int i, cents, coins[5], num_coins, count;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
coins[0] = 25;
coins[1] = 10;
coins[2] = 5;
coins[3] = 2;
coins[4] = 1;
num_coins = sizeof(coins) / sizeof(coins[0]);
count = 0;
for (i = 0; i < num_coins; i++)
{
while (cents >= coins[i])
{
cents -= coins[i];
count++;
}
}

printf("%d\n", count);
return (0);
}
