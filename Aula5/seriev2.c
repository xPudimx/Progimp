#include <stdio.h>
double serie_log(double x, int n)
{
    double total = 0, soma_interna = 0, potencias = 1;
    int count = 1;
    for (count; count < n+1; ++count)
    {
        potencias *= x;
        soma_interna = potencias / count;
        if (count % 2 == 0)
            soma_interna *= -1;
        total += soma_interna;
    }
    return total;
}

int main(int argc, char const *argv[]) {
  printf("%f\n", serie_log(1,3));
  return 0;
}
