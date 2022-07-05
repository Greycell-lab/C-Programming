#include <stdio.h>
#include <stdlib.h>

int main()
    {
        int prime;
        int numba;
        printf("Number-Limit for Primes: ");
        scanf("%d", &prime);
        primes(prime);

    }

int primes(int primes)
    {
        int count = 0;
        int prime[1000];
        int res;
        int numba;
        int primecount = 0;
        for(int i = 1; i <= primes; i++)
            {
            for(int y = 1;y <= primes; y++)
                {
                if(i % y == 0 && i >= y)
                    {
                        count++;
                    }
                }
            if(count == 2)
                {
                    prime[i-1] = i;
                    printf("%d\n", prime[i-1]);
                    primecount++;
                }
            count = 0;
            }
        printf("Number for Priming: ");
        scanf("%d", &numba);
        for(int i=1;i<primecount;i++)
            {
            res = numba / prime[i];
            if(res > 0)
                {
                printf("%d / %d", numba, prime[i]);
                printf("%d", res);
                }
            }
    }
