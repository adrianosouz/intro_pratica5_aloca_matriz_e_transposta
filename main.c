#include <stdio.h>
#include <stdlib.h>

double **aloca(int m){
int i,j;
double **P;

 P = (double**) calloc(m,sizeof(double*));
    if(P==NULL)
    {
        printf("Erro de alocacao\n");
        exit(1);
    }

    for(i=0;i<m;i++)
    {
        P[i]= (double*) calloc(m,sizeof(double));
        if(P[i]==NULL)
        {
            printf("Erro de alocacao\n");
            exit(1);
     }
}

   return P;
}

void recebe(int m,double **V){
int i,j;

for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("v[%d][%d]: ",i,j);
            scanf("%lf",&V[i][j]);
        }
    }
}
void mostra(int m,double **V){
int i,j;
  for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%.2lf\t",V[i][j]);
        }
        printf("\n");
    }
}

void transposta(int m,double **V){
int i,j,aux;

 for (i=0; i<m;i++) {
    for (j=i+1;j<m;j++) {
      if (j!=i) {
   aux = V[i][j];
   V[i][j] = V[j][i];
   V[j][i] = aux;
      }
    }
  }
}

void mostrat(int m,double **V){
int i,j;

    printf("transposta\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%.2lf\t",V[i][j]);
        }
        printf("\n");
    }

      }

int main()
{
    int m;
    double** V;

    printf("Digite m : \n");
    scanf("%d",&m);
    printf("Tamanho selecionado: %d x %d\n",m,m);

      V=aloca(m);
      recebe(m,V);
      mostra(m,V);
      transposta(m,V);
      mostrat(m,V);


   return 0;
}
