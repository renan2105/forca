#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

main()
{
	
  

char tpalavra,palavra[15],letra[15],espaco[15]="_";
int chances=5,x,i,acertos=0;

printf("ESCOLHA UMA PALAVRA PARA INICIAR O JOGO\n\n\n\n");
printf("\n\nDIGITE A PALAVRA:\n\n");

gets(palavra);
system("cls");

for(i=0;i<strlen(palavra);i++)
espaco[i]='-';
tpalavra=strlen(palavra);

while(chances>0)
{
x=0;
printf("\n %s \n",espaco);
printf("\n DIGITE UMA LETRA: ");
gets(letra);

for(i=0;i<strlen(palavra);i++)
{
if(letra[0]==palavra[i])
{
espaco[i]=palavra[i];
acertos++;
x++;
}
}
if(x==0) {
chances=chances-1;

if(chances==0) {
printf("\n\n VOCE FOI ENFORCADO!");
printf("\n a plavra era: %s",palavra);
break;
}

else
printf("\n RESTAM %d CHANCES",chances); }

else{
if(acertos==tpalavra) {
printf("\n\n VOCE GANHOU !");
printf("\n palavra escondida: %s",palavra);
break;
}

else {
printf("\n VOCE ACERTOU UMA LETRA, CONTINUE!");

}
}
} 
printf("\n\n");
system("pause");
return 0; }

