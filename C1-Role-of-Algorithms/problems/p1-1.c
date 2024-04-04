#include<stdio.h>
#include<math.h>


typedef double (*Function)(long int);

void Operation(Function fn){
    double sec = fn(1000000);
    printf("\tFor 1 second: %lf \n",sec);
    double min = fn(60000000);
    printf("\tFor 1 minute: %lf \n",min);
    double hour = fn(3600000000);
    printf("\tFor 1 hour : %lf \n", hour);
    double day = fn(86400000000);
    printf("\tFor 1 day: %lf \n",day);
    double month = fn(2592000000000);
    printf("\tFor 1 month: %lf \n",month);
    double year = fn(31104000000000);
    printf("\tFor 1 year: %lf \n",year);
    double century = fn(3110400000000000);
    printf("\tFor 1 century: %lf \n", century);
}


double ln(long int t){
    // ln n = t; -> n = pow(e,t);
    double ans = exp(t);
    return ans;
}

double root(long int t){
    double ans = pow(t,2);
    return ans;
}
double nlin(long int t){return t;}
double nsq(long int t){return sqrt(t);}
double ncu(long int t){return cbrt(t);}
double twopower(long int t){return log2(t);}

double fact(long int t){
    // made a brute force check and realized only these many are possible 
    double current = 1;
    int i = 1;
    while(current*i <= t){
        current = current * i;
        i++;
    }
    return i-1;
}


int main(){
    printf("f(n) = log n :\n");
    Operation(ln);
    printf("f(n) = n^0.5 :\n");
    Operation(root);
    printf("f(n) = n: \n");
    Operation(nlin);
    printf("f(n) = pow(n,2) :\n");
    Operation(nsq);
    printf("f(n) = pow(n,3) :\n");
    Operation(ncu);
    printf("f(n) = pow(2,n) :\n");
    Operation(twopower);
    printf("f(n) = n! :\n");
    Operation(fact);
    return 0;
}
