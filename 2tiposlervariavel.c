#include <stdio.h>

int main(){   // lendo 3 v�riaveis sendo int float e double
    int a;
    float b;
    double c;

    scanf("%i",&a);
    scanf("%f",&b);
    scanf("lf",&c);

    return 0;
}

ou     // lendo 3 v�riaveis int float e double com um �nico scanf

#include <stdio.h>

int main(){
    int a;
    float b;
    double c;

    scanf("%i%f%lf",&a,&b,&c);

    return 0;
}

