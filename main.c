#include <stdio.h>
#include <stdlib.h>
double T;
char I;
int main(int argc,char *argv[])
{
    if (argc == 2)
    {
        T = atof(argv[1]);
    }
    if (argc == 3)
    {
        T = atof(argv[1]);
        I = *argv[2];
    }
    if (I == 'C')
        {
            if (T >= -273.15)
            {
                printf("%.2f\n",T);
                printf("%.2f\n",(T*9/5)+32);
                printf("%.2f\n",T+273.15);
            }
        }
    if (I == 'F')
        {
            if (T >= -459.4)
            {
                printf("%.2f\n",(T-32)*5/9);
                printf("%.2f\n",T);
                printf("%.2f\n",((T-32)*5/9)+ 273.15);
            }
 
        }
    if (I == 'K')
        {
            if (T >= 0)
            {
                printf("%.2f\n",T-273.15);
                printf("%.2f\n",((T-273.15)*9/5)+32);
                printf("%.2f\n",T);
            }
        }
    if (argc >= 2)
        {
            if (T >= -273.15)
            {
                printf("%.2f\n",T);
                printf("%.2f\n",(T*9/5)+32);
                printf("%.2f\n\n",T+273.15);
            }
            if (T >= -459.4)
            {
                printf("%.2f\n",(T-32)*5/9);
                printf("%.2f\n",T);
                printf("%.2f\n\n",((T-32)*5/9)+ 273.15);
            }
            if (T >= 0)
            {
                printf("%.2f\n",T-273.15);
                printf("%.2f\n",((T-273.15)*9/5)+32);
                printf("%.2f\n",T);
            }

        }

    return 0;
}
