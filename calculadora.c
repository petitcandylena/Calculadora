#include <stdio.h>

int main() {

int shiba;
int yorkshire; 
int dachshund;
int cachorros;

do {
printf("Coloca a operacao\n");
        printf("Opcao 1: Adicao\n");
        printf("Opcao 2: Subtracao\n");
        printf("Opcao 3: Multiplicacao\n");
        printf("Opcao 4: Divisao\n");
        printf("Opcao 5: Ao quadrado\n");
        scanf("%d" ,&dachshund);       
        if (dachshund >= 6 || dachshund <=0){
            printf ("\ncoloca uma opcao valida >:(\n");
        }
}
while (dachshund >=6 || dachshund <=0);

printf ("\ncoloca o numero que voce quer\n");
scanf ("%d",&shiba);
if (dachshund == 5){
    cachorros = shiba*shiba;
    printf ("\nseu numero eh\n%d", cachorros);
}
else {
printf ("\ncoloca o outro numero\n");
scanf ("%d",&yorkshire);

if (dachshund == 1){
    cachorros = shiba+yorkshire ;
    printf ("\nseu numero eh\n%d", cachorros);
}
else if (dachshund == 2){
    cachorros = shiba-yorkshire ;
    printf ("\nseu numero eh\n%d", cachorros);
}
else if (dachshund == 3){
    cachorros = shiba*yorkshire ;
    printf ("\nseu numero eh\n%d", cachorros);
}
else if (dachshund == 4){
    cachorros = shiba/yorkshire ;
    printf ("\nseu numero eh\n%d", cachorros);
}
}

return 0;
}