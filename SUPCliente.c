#include <stdio.h>
int main() {
  char nome[10], pass[10];
  int menuOption, menuClient;
  scanf("%d", &menuOption);
  switch(menuOption)
    {
    case 1 :
      printf("autenticação/login \n");
      printf("nome do utilizador:\n");
      scanf("%s", nome);
      printf("password\n");
      scanf("%s ", pass);
      //SE CORRETO
      printf("1) ver feed\n");
      printf("2) ver tópicos\n");
      printf("3) procurar tópicos mais ativos\n");
      printf("4) subscrever tópico\n");
      printf("5) publicar um tópico\n");
      printf("6) gerir uma lista de subscrições\n");
      printf("7) ver estatísticas\n");
      printf("8) logout\n");
      switch(menuClient)
	{
	  
        
	}
	  
	 case 2 :
      printf("pedido de registo de novo utilizador\n");
      printf("nome do utilizador:\n");
      scanf("%s", nome);
      printf("password\n");
      scanf("%s ", pass);
      break;

    case 3 :
      printf("sair\n");
      break;
    
    }
  
}
	     


