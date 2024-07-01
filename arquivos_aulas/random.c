
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//const float RAND_MAX = 1000.0;

float float_rand( float min, float max )
{
    float scale = rand() / (float) RAND_MAX; /* [0, 1.0] */
    return min + scale * ( max - min );      /* [min, max] */
}

int main(){
    srand(time(NULL));
    int i;
    for(i=0; i < 100; i++){
        printf("%.1f\n", float_rand(-500, +500));
    }
    return 0;
}