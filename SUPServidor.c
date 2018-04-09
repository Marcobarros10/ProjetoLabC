#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
bool digitChecker(char n[150]){
  int i=0;
  while(n[i]!='\0'){
    if(!isdigit(n[i]))
      return false;
    i++;
  }
  return true;
}
void massPrinter(char n[100][100]){
  int i=0,j=0;
  while(n[i][j]!='\0'){
    printf("%d) ",i+1);
    while(n[i][j]!='\0'){
      printf("%c",n[i][j]);
      j++;
    }
    printf("\n");
    j=0;
    i++;
  }
  }
void main(){
  char menuOption[100][100]={"Login","Registo de um novo user","Sair"};
  char optionMenu[150];
  scanf("%s", optionMenu);
  if(!digitChecker(optionMenu)) return;
  massPrinter(menuOption);
  
  
  
}
