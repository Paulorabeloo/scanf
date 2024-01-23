#include <stdio.h>

int main(){   // lendo 3 váriaveis sendo int float e double
    int a;
    float b;
    double c;

    scanf("%i",&a);
    scanf("%f",&b);
    scanf("lf",&c);

    return 0;
}

ou     // lendo 3 váriaveis int float e double com um único scanf

#include <stdio.h>

int main(){
    int a;
    float b;
    double c;

    scanf("%i%f%lf",&a,&b,&c);

    return 0;
}

