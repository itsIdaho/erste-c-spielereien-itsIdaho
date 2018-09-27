#include <stdio.h>
int main()
{
    unsigned int zahl = 10;
    do {
    printf ("counter %d\n" ,zahl); 
    zahl--;
    }
    while ( zahl > 0);
    printf ("Takeoff!\n");
        
    return 0;
}
