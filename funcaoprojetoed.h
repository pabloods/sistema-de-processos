
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

int i; //variável auxiliar do vetor
clock_t inicio, fim;  //variavel para o contador de tempo de execução




struct registroprocesso{
	
	char nome[1000][30];  //variavel utilizada para armazenar o nome do cliente
	char endereco[1000][30];  //variavel utilizada para armazenar o endereço do cliente
	int supermercado[1000];  //variavel utilizada para armazenar o id do supermercado
	int identidade[1000];  //variavel utilizada para armazenar a identidade do cliente
	int telefone[1000];  //variavel utilizada para armazenar o telefone do cliente
	int datacheque[1000];  //variavel utilizada para armazenar a data do cheque
	int idp[1000];  //variavel utilizada para armazenar o id do processo
	float valorcheque[1000];  //variavel utilizada para armazenar o valor do cheque
	
		
} processo;



void registra() {   //função para inserir os processos na pilha
// a cada vez que o i é incrementado os processos são armazenados na proxima casa do vetor



char a[10];
	
inicio=clock();	  //utilizada para iniciar o contador

printf ("Nome do supermercado |\t Codigo \n");
printf ("\n");
printf ("SUPERMERCADO BAHIA \t 1 \n");
printf ("SUPERMERCADO SAO PAULO \t 2 \n");
printf ("SUPERMERCADO ALAGOAS \t 3 \n");
printf ("SUPERMERCADO GOIAS \t 4 \n");
printf ("SUPERMERCADO PARANA \t 5 \n");
printf ("\n");

processo.supermercado[i]=8;
while (processo.supermercado[i] <1 || processo.supermercado[i] > 5) // enquanto o processo for menor que 1 e maior que 5 ele não irá sair do loop
{
printf("Informe o codigo do supermercado que recebeu o cheque: \n");
scanf ("%i",&processo.supermercado[i]);

if (processo.supermercado[i] <1 || processo.supermercado[i] >5)
{
printf("ID invalido \n\n\n\n"); 
}
}

printf("Informe o nome do cliente:\n");
scanf (" %[^\n]s",processo.nome[i]);
gets (a);

printf("Informe o endereco do cliente:\n");
scanf (" %[^\n]s",processo.endereco[i]);


printf("Informe a identidade do cliente: \n");
scanf ("%i",&processo.identidade[i]);
 
printf("Informe o telefone do cliente: \n");
scanf ("%i",&processo.telefone[i]);
 
printf("Informe o valor (em reais) do cheque: \n");
scanf ("%f",&processo.valorcheque[i]);

printf ("Informe a data do cheque (DDMMAAAA) \n");
scanf ("%i",&processo.datacheque[i]);
printf ("\n\n");
printf ("Esse processo foi cadastrado como ID -> %i\n", i);
printf ("\n\n");
printf ("\n\n");

processo.idp[i] = i; //Id do processo recebe o valor de I, e o processo é cadastrado automaticamente com a casa do vetor que ele ocupa
i++;
fim=clock(); //utilizada para finalizar o contador
 //mostra na tela quanto tempo a função demorou para executar
printf ("\n\n\n");
system ("pause");
system ("cls"); //Utilizada para limpar tela
}

void imprimir()
{
int j;

inicio=clock();  
		
	printf ("Digite o ID do processo que voce deseja imprimir \n");
	scanf ("%i",&j); //o usuario digita o id do processo que deseja consultar e a variavel j armazena esse id.
	
	if (processo.telefone[j]==0 && processo.identidade[j]==0 && processo.datacheque[j]==0) // Se os 3 valores for igual a zero obviamente o processo está
																							//vazio e não existe.
	{
	printf ("Esse processo nao existe!\n\n");
	}	
	
	else
	{
	printf ("\n\n\n\n");	
	printf ("ID do processo = %i\n",processo.idp[j]);
	printf ("Supermercado = %i",processo.supermercado[j]); 
	
	if (processo.supermercado[j] == 1) // de acordo com o id do mercado ele imprime o mercado indicdado
	{
	printf (".Supermercado Bahia \n");
	}
		if (processo.supermercado[j] == 2)
		{
		printf (".Supermercado Sao Paulo \n");
		}
			if (processo.supermercado[j] == 3)
			{
			printf (".Supermercado Alagoas \n");
			}
				if (processo.supermercado[j] == 4)
				{
				printf (".Supermercado Goias \n");
				}
					if (processo.supermercado[j] == 5)
					{
					printf (".Supermercado Parana \n");	
					}
	
	printf ("Nome do cliente = %s\n",processo.nome[j]);
	printf ("Endereco = %s\n",processo.endereco[j]);
	printf ("Identidade = %i\n",processo.identidade[j]);
	printf ("Telefone = %i\n",processo.telefone[j]);
	printf ("Valor do Cheque = %f\n",processo.valorcheque[j]);
	printf ("Data do Cheque = %i\n",processo.datacheque[j]);		
	}
	
fim=clock();
printf ("\n\n\n");
	
	system ("pause");	
}


void removertopo()
{
	
inicio=clock();	
	
if (processo.supermercado[i-1] != 1 && processo.supermercado[i-1] != 2 
&& processo.supermercado[i-1] != 3 && processo.supermercado[i-1] !=4  && processo.supermercado[i-1] != 5) 
//se o id do mercado for diferente de 1,2,3,4 e 5 obviamente a pilha estará vazia


{
printf ("Nao foi possivel remover do topo pois a pilha esta vazia! \n\n\n\n\n\n\n");
system ("pause");
}
else
{	
// se a pilha não estiver vazia os vetores serão zerados
processo.supermercado[i-1]=0;
strcpy (processo.nome[i-1],"Nao cadastrado");
strcpy (processo.endereco[i-1],"Nao cadastrado");
processo.identidade[i-1]=0;
processo.telefone[i-1]=0;
processo.valorcheque[i-1]=0;
processo.datacheque[i-1]=0;
processo.idp[i-1]=0;

i--;	
printf ("Removido com sucesso! \n\n\n\n\n\n\n");
fim=clock();

printf ("\n\n\n");

system ("pause");
}
}


void removerposicao()
{
 int j,k,l;
 int aux0,aux1,aux2,aux3,aux4,aux5;
 char aux6[30];
 char aux7[30];
 
 inicio=clock();
 
 l=i;

 
 printf ("Digite o ID do processo que voce quer remover\n");
 scanf ("%i", &k);
 // de acordo com o id que o usuario digitar
 
if (processo.supermercado[k] != 1 && processo.supermercado[k] != 2 
&& processo.supermercado[k] != 3 && processo.supermercado[k] !=4  && processo.supermercado[k] != 5)
//se o id do mercado for diferente de 1,2,3,4 e 5 obviamente o processo indicaddo não existe

{
printf ("Esse processo nao existe! \n\n\n\n\n\n\n");
system ("pause");
}
else
{	
// se a o processo indicado existir o vetor sera zerado
processo.supermercado[k]=0;
strcpy (processo.nome[k],"Nao cadastrado");
strcpy (processo.endereco[k],"Nao cadastrado");
processo.identidade[k]=0;
processo.telefone[k]=0;
processo.valorcheque[k]=0;
processo.datacheque[k]=0;         
processo.idp[k]=0;
printf ("Removido com sucesso! \n\n\n\n\n\n");

}


// apos zerar o vetor, ordenamos de acordo com o valor do cheque
for ( l=l-1; l > 0; l-- ){
        for ( j=0; j < l; j++ ){

        if(processo.valorcheque[j] > processo.valorcheque[j+1])
		{
			aux0=processo.idp[j];
        	processo.idp[j]=processo.idp[j+1];
        	processo.idp[j+1]=0;
			
        	aux1=processo.valorcheque[j];
        	processo.valorcheque[j]=processo.valorcheque[j+1];
        	processo.valorcheque[j+1]=aux1;
        	
        	aux2=processo.supermercado[j];
        	processo.supermercado[j]=processo.supermercado[j+1];
        	processo.supermercado[j+1]=aux2;
        	
        	aux3=processo.identidade[j];
        	processo.identidade[j]=processo.identidade[j+1];
        	processo.identidade[j+1]=aux3;
        	
        	aux4=processo.telefone[j];
        	processo.telefone[j]=processo.telefone[j+1];
        	processo.telefone[j+1]=aux4;
        	
        	aux5=processo.datacheque[j];
        	processo.datacheque[j]=processo.datacheque[j+1];
        	processo.datacheque[j+1]=aux5;
        	        	
			strcpy (aux6,processo.nome[j]);
			strcpy (processo.nome[j],processo.nome[j+1]);
        	strcpy (processo.nome[j+1],aux6);
        	
        	strcpy (aux7,processo.endereco[j]);
			strcpy (processo.endereco[j],processo.endereco[j+1]);
        	strcpy (processo.endereco[j+1],aux7);
        	
        }
        }
  }
  
fim=clock();
printf ("\n\n\n");
system ("pause");
	
	
}

void imprimirtudo ()
{
	int z,b=0;

inicio=clock();
	
	
	for (z=0;z<=i-1;z++) //ele faz um loop ate o z for igual a posição do i-1, 
	{
	if (processo.supermercado[z] != 0) // se o id do supermercado for diferente de 0 então ele existe
	{	
	printf ("ID do processo = %i\n",processo.idp[z]);
	printf ("Supermercado = %i",processo.supermercado[z]);
	
	if (processo.supermercado[z] == 1)
	{
	printf (".Supermercado Bahia \n");
	}
		if (processo.supermercado[z] == 2)
		{
		printf (".Supermercado São Paulo \n");
		}
			if (processo.supermercado[z] == 3)
			{
			printf (".Supermercado Alagoas \n");
			}
				if (processo.supermercado[z] == 4)
				{
				printf (".Supermercado Goias \n");
				}
					if (processo.supermercado[z] == 5)
					{
					printf (".Supermercado Parana \n");	
					}
	
	printf ("Nome do cliente = %s\n",processo.nome[z]);
	printf ("Endereco = %s\n",processo.endereco[z]);
	printf ("Identidade = %i\n",processo.identidade[z]);
	printf ("Telefone = %i\n",processo.telefone[z]);
	printf ("Valor do cheque = %f\n",processo.valorcheque[z]);
	printf ("Data do cheque = %i\n",processo.datacheque[z]);	
	printf ("\n\n\n\n");
	b++;
	}
	}
	
	if (b==0) // se o loop do for, for inicializado então o b sera diferente de 0 e assim teremos pelo menos 1 processo cadastrado que faz com que
			  // pilha não fique vazia.
	{
	printf ("Nenhum processo cadastrado!\n\n\n\n\n");
	}
	
	
fim=clock();
printf ("\n\n\n");	
system ("pause");
}



void imprimirtopo ()
{
	
	inicio=clock();

if (processo.telefone[i-1]==0 && processo.identidade[i-1]==0 && processo.datacheque[i-1]==0)
{
printf ("Nenhum processo cadastrado!\n\n");
}	
else
{
	printf ("ID do processo = %i\n",processo.idp[i-1]);
	printf ("Supermercado = %i",processo.supermercado[i-1]);
	
	if (processo.supermercado[i-1] == 1)
	{
	printf (".Supermercado Bahia \n");
	}
		if (processo.supermercado[i-1] == 2)
		{
		printf (".Supermercado Sao Paulo \n");
		}
			if (processo.supermercado[i-1] == 3)
			{
			printf (".Supermercado Alagoas \n");
			}
				if (processo.supermercado[i-1] == 4)
				{
				printf (".Supermercado Goias \n");
				}
					if (processo.supermercado[i-1] == 5)
					{
					printf (".Supermercado Parana \n");	
					}	
	
	printf ("Nome do cliente = %s\n",processo.nome[i-1]);
	printf ("Endereco = %s\n",processo.endereco[i-1]);
	printf ("Identidade = %i\n",processo.identidade[i-1]);
	printf ("Telefone = %i\n",processo.telefone[i-1]);
	printf ("Valor do Cheque = %f\n",processo.valorcheque[i-1]);
	printf ("Data do Cheque = %i\n",processo.datacheque[i-1]);		
}
	
fim=clock();
printf ("\n\n\n");		
system ("pause");	
}



void imprimirbase ()
{	
int a=0;

inicio=clock();

while (processo.supermercado[a]==0) //enquanto o elemento da posição a for = 0 ele percorre o vetor até achar um elemento diferente de 0
									// se não achar nenhum elemento ele para quando o a for igual a 999.
{
a++;	
if (a==999)
{
break;
}
}

	if (processo.supermercado[a]!=0) // se o id do supermercado for diferente de 0 obviamente nós temos pelo menos 1 mercado cadastrado
	{
	printf ("ID do processo = %i\n",processo.idp[a]);
	printf ("Supermercado = %i",processo.supermercado[a]);
	
	if (processo.supermercado[a] == 1)
	{
	printf (".Supermercado Bahia \n");
	}
		if (processo.supermercado[a] == 2)
		{
		printf (".Supermercado Sao Paulo \n");
		}
			if (processo.supermercado[a] == 3)
			{
			printf (".Supermercado Alagoas \n");
			}
				if (processo.supermercado[a] == 4)
				{
				printf (".Supermercado Goias \n");
				}
					if (processo.supermercado[a] == 5)
					{
					printf (".Supermercado Parana \n");	
					}	
	
	printf ("Nome do cliente = %s\n",processo.nome[a]);
	printf ("Endereco = %s\n",processo.endereco[a]);
	printf ("Identidade = %i\n",processo.identidade[a]);
	printf ("Telefone = %i\n",processo.telefone[a]);
	printf ("Valor do Cheque = %f\n",processo.valorcheque[a]);
	printf ("Data do Cheque = %i\n",processo.datacheque[a]);		
	}
	
	if (processo.telefone[a]==0 && processo.identidade[a]==0 && processo.datacheque[a]==0) // se as 3 condicoes forem nulas então obviamente a pilha esta vazia
	{
	printf ("Nenhum processo cadastrado!\n\n");
	}	
	
	
fim=clock();
printf ("\n\n\n");
	system ("pause");	
}


void priorizarmercado()
{	

inicio=clock();
	
int  m,n,desj,z,o=0;
int aux1,aux2,aux3,aux4,aux5;
char aux6[30];
char aux7[30];

n=i;

	printf ("\n");	
	printf ("SUPERMERCADO BAHIA \t 1 \n");
	printf ("SUPERMERCADO SAO PAULO \t 2 \n");
	printf ("SUPERMERCADO ALAGOAS \t 3 \n");
	printf ("SUPERMERCADO GOIAS \t 4 \n");
	printf ("SUPERMERCADO PARANA \t 5 \n");
	printf ("\n");
	printf ("\n");	
	printf ("Escolha o ID do mercado que voce deseja priorizar\n");
	scanf ("%i", &desj);

//desj recebe o id o mercado que o usuario quer priorizar


for (m=0; m<=n; m++ )
{
	



if (desj == processo.supermercado[m]) 
// se o id que o usuario digitou for igual ao mercado então ele põe o mercado no topo da pilha através das variaveis auxiliares.
{

processo.supermercado[i] = processo.supermercado[m];
processo.supermercado[m]=0;	

processo.identidade[i] = processo.identidade[m];
processo.identidade[m]=0;

processo.telefone[i] = processo.telefone[m];
processo.telefone[m]=0;	

processo.valorcheque[i] = processo.valorcheque[m];
processo.valorcheque[m]=0;

processo.datacheque[i] = processo.datacheque[m];
processo.datacheque[m]=0;

strcpy (processo.nome[i],processo.nome[m]);
strcpy (processo.nome[m],"Nao Cadastrado");

strcpy (processo.endereco[i],processo.endereco[m]);
strcpy (processo.endereco[m],"Nao Cadastrado");



o++; // incremento do o para ele ser tornar diferente de 0
i++;



}
	
	
if (o==0)
// se o "o" for igual a 0 então o loop não foi inicializado e o mercado digitado não existe
{
printf ("\nMercado nao encontrado! \n\n\n\n\n\n\n\n");	
}
else
{
printf ("Mercado priorizado com sucesso!");

fim=clock();
printf ("\n\n\n");
system ("pause");
}
	
	
}

system ("pause");
}

void ordenarporvalor()
{
 int j,k=0,l;
 int aux0,aux1,aux2,aux3,aux4,aux5;
 char aux6[30];
 char aux7[30];
 
 inicio=clock();
 
 l=i;
	
// ele faz a ordenação através de variaveis auxiliares	

	
	for ( l=l-1; l > 0; l-- ){
        for ( j=0; j < l; j++ ){

        if(processo.valorcheque[j] > processo.valorcheque[j+1])
		{
			aux0=processo.idp[j];
			processo.idp[j]=processo.idp[j+1];
			processo.idp[j+1]=aux0;			
			
        	aux1=processo.valorcheque[j];
        	processo.valorcheque[j]=processo.valorcheque[j+1];
        	processo.valorcheque[j+1]=aux1;
        	
        	aux2=processo.supermercado[j];
        	processo.supermercado[j]=processo.supermercado[j+1];
        	processo.supermercado[j+1]=aux2;
        	
        	aux3=processo.identidade[j];
        	processo.identidade[j]=processo.identidade[j+1];
        	processo.identidade[j+1]=aux3;
        	
        	aux4=processo.telefone[j];
        	processo.telefone[j]=processo.telefone[j+1];
        	processo.telefone[j+1]=aux4;
        	
        	aux5=processo.datacheque[j];
        	processo.datacheque[j]=processo.datacheque[j+1];
        	processo.datacheque[j+1]=aux5;
        	        	
			strcpy (aux6,processo.nome[j]);
			strcpy (processo.nome[j],processo.nome[j+1]);
        	strcpy (processo.nome[j+1],aux6);
        	
        	strcpy (aux7,processo.endereco[j]);
			strcpy (processo.endereco[j],processo.endereco[j+1]);
        	strcpy (processo.endereco[j+1],aux7);
        	
        }
        }
  }
  
  
  

while (processo.supermercado[k]==0)
{
k++;	
if (k==999)
{	
break;
}
}

if (k==999)
{
printf ("Nao foi possivel ordenar pois a pilha esta vazia!\n\n\n\n\n\n\n");
}
else
{ 
printf ("Ordenado com sucesso!\n\n\n\n\n\n\n");
}

fim=clock();

printf ("\n\n\n");
system ("pause");	
}













void menu ()
//menu, o op recebe a opcao que o usuario digitar. Utilizamos um case para irmos para a função correta e um while 
//ate o op for diferente de 10, enquanto o op for igual a 10 o programa continua rodando.
{
int op=0;	

system("cls");

while (op!=10)
	{


			printf("\t\t  =========================\n");
			printf("\t\t          CENTRAL DE       \n");
			printf("\t\t          PROCESSOS        \n");
			printf("\t\t  =========================\n\n");
			printf("\t\t01. Inserir novo processo\n");
			printf("\t\t02. Remover processo do topo \n");			
			printf("\t\t03. Remover processo desejado \n");
			printf("\t\t04. Priorizar processos de um mercado \n");
			printf("\t\t05. Ordenar processo por valor do cheque \n");
			printf("\t\t06. Imprimir processo desejado\n");
			printf("\t\t07. Imprimir todos os processos \n");
			printf("\t\t08. Imprimir processo do topo \n");
			printf("\t\t09. Imprimir processo da base \n");			
			printf("\t\t10. Sair \n");
			scanf("%d", &op);
			system ("cls");
			
			switch (op)
			{
			
			case 1:
			registra();
			system ("cls");
			break;
			
			case 2:
			removertopo();
			system ("cls");
			break;
			
			case 3: 
			removerposicao();
			system ("cls");
			break;
			
			case 4:
			priorizarmercado();
			system ("cls");
			break;
			
			case 5:
			ordenarporvalor();
			system ("cls");
			break;
			
			case 6:
			imprimir();
			system ("cls");
			break;
						
			case 7:
			imprimirtudo();
			system ("cls");
			break;
			
			case 8:
			imprimirtopo();
			system ("cls");
			break;	
			
			case 9:
			imprimirbase();
			system ("cls");
			break;
			
			case 10:
			exit(0);					
									
			default:
			printf ("Opcao Invalida\n");
			system ("cls");
			break;
			}
		
	}
}

