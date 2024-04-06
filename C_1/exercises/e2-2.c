#include <stdio.h>
#include <math.h>

int main()
{
    int low = 2;
    int high = 2;
    while(high <= 8 * log2(high)){
        high = high * 10;
    }
    int mid = low + (high - low)/2;
    while(low <= high){
        mid = low + (high - low)/2;
        if(mid <= 8 * log2(mid)) low = mid + 1;
        else high = mid - 1;
    }
    printf("%d", low <= 8 * log2(low) ? low : high);
    return 0;
}

//  Answer would be 43.