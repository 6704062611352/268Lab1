#include <stdio.h>

int main()
{
    float i,input1,input2,input3;
    scanf("%f",&input1);
    printf("%.2f\n",(input1*95)/100);
    scanf("%f",&input2);
    printf("%.2f\n",((input1+input2)*(85))/100);
    scanf("%f",&input3);
    printf("%.2f\n",((input1+input2+input3)*(70))/100);
    printf("%.2f\n",((input1*1.07)*95)/100);
    printf("%.2f\n",((((input1+input2)*1.07)*(85))/100));
    printf("%.2f\n",((((input1+input2+input3)*1.07)*(70))/100));
    return 0;
}
