
#include <stdio.h>
#include <stdint.h>

uint32_t sum(uint32_t numA, uint32_t numB);

int main()
{
    uint32_t argA;
    uint32_t argB;
    uint32_t total;

    printf("Operand 1: \n");
    scanf("%d",&argA);

    printf("Operand 2: \n");
    scanf("%d",&argB);

    total = sum(argA, argB);
    printf("Result = %d", total);

    return 0;

}

uint32_t sum(uint32_t numA, uint32_t numB)
{
    return (printf("%*s%*s", numA, "",numB, ""));

}
