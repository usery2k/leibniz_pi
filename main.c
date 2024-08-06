#include <stdio.h>
#include <math.h>
int k;
float leibniz_pi(int k){
    float pi = 0.0;
    for (int i=0; i<=k; i++){
        pi+= pow(-1, i)/(2*i+1);
    } 
    return 4*pi;
}
int main(){
    printf("ingrese el numero de terminos de pi: ", k);
    scanf("%d", &k);
    printf("\ntu numero pi de %d terminos es: %f\n", k, leibniz_pi(k));
    return 0;
}

