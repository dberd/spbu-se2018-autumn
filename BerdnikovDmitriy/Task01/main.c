#include <stdio.h>
#include <cstdlib>
int main() {
    long int ArSum[28] = { 0 };
    long int CountTickets = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                ArSum[i + j + k]++;
            }
        }
    }
    for (int i = 0; i < 28; i++)
    {
        CountTickets += ArSum[i] * ArSum[i];
    }
    printf("the count of happy tickets is: %d", CountTickets);
    system("pause");
    return 0;
}