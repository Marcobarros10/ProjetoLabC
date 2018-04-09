#include <stdio.h>
int main() {
  char nome[10], pass[10];
  int a;
  scanf("%d", &a);
  if(a == 1)
    {
      printf("autenticação/login\n");
      printf("nome do utilizador\n");
      scanf("%s", &nome);
      printf("password\n");
      scanf("%s ", &pass);
    }
  return 0;
}

