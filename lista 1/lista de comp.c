

include <stdlib.h>


int main()

{ float a, b, c, d, e, f, resultado;

  printf("digite o valor das variaveis \n");

  scanf("%f %f %f %f %f %f \n", &a, &b, &c, &d, &e, &f);

  resultado=(a*a)-c+(a/(b*c)+(c/(d+(e/f))));

  printf("resultado %.2f", resultado);

return 0;

}


