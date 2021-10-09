#include <stdio.h>
#include <math.h>
int aa[80]={1,1,1,1,0,0,1,0,1,1};
int bb[80]={1,0,1,0,1,1,1,1,0,1};
int neuA[30] = {0,1,1,1,0,1,0,0,0,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,1};
int neuB[30];
int neuC[30];
int neuD[30];
int neuE[30];
int neuF[30];
int neuG[30];
int neuH[30];
int neuI[30];
int neuJ[30];
int neuK[30];
int neuL[30];
int neuM[30];
int neuN[30];
int neuO[30];
int neuP[30];
int neuQ[30];
int neuR[30];
int neuS[30];
int neuT[30];
int neuU[30];
int neuV[30];
int neuW[30];
int neuX[30];
int neuY[30];
int neuZ[30];
int matrizA1[30]={0,1,1, 1,0,1, 0,0,0, 1,1,0, 0,0,1, 1,1,1, 1,1,1, 0,0,0, 1,1,0, 0,0,1};

void Zera(int *ma){
    for(int i=0; i< 30; i++){
        ma[i] = 0;
    }
}

void CriaDiscriminante(int *neuronio, int *tupla){
    int contador = 0;
    int a, b, c = 0;
    int valor = 0;
    for(int i = 0; i < 30; i = i + 3){
        a = tupla[i];
        b = tupla[i + 1];
        c = tupla[i + 2];
        valor  = (pow(2, 0) * a) + (pow(2, 1) * b) + (pow(2, 2) * c) + contador;  
        contador += 8;
        neuronio[valor]++;
    }

    // for (int  i = 0; i < 30; i++)
    // {
    //     printf("%d", neuronio[i]);
    // }
    
}
//a funçao abaixo compara os discriminante e da o valor de igualdade
int comparadisc(int neuroletra[], int neuroalfabeto[]){
  int i;
  int contadorigualdade=0;
  for(i=0;i<80;i++){
    if(neuroletra[i]==1 && neuroalfabeto[i]==1){
      contadorigualdade=contadorigualdade +1; 
      }


  }
  return contadorigualdade;
}
 //vai comparar o discriminate da letra atual com todas as ja existentes 
void compare (int neuronioletra[] ){
  int vet[26];
  int i=0, j,aux,letra,vencedora;
  vet[0]=comparadisc(neuronioletra,matrizA1);
  vet[1]=comparadisc(neuronioletra,neuB);
  vet[2]=comparadisc(neuronioletra,neuC);
  vet[3]=comparadisc(neuronioletra,neuD);
  vet[4]=comparadisc(neuronioletra,neuE);
  vet[5]=comparadisc(neuronioletra,neuF);
  vet[6]=comparadisc(neuronioletra,neuG);
  vet[7]=comparadisc(neuronioletra,neuH);
  vet[8]=comparadisc(neuronioletra,neuI);
  vet[9]=comparadisc(neuronioletra,neuJ);
  vet[10]=comparadisc(neuronioletra,neuK);
  vet[11]=comparadisc(neuronioletra,neuL);
  vet[12]=comparadisc(neuronioletra,neuM);
  vet[13]=comparadisc(neuronioletra,neuN);
  vet[14]=comparadisc(neuronioletra,neuO);
  vet[15]=comparadisc(neuronioletra,neuP);
  vet[16]=comparadisc(neuronioletra,neuQ);
  vet[17]=comparadisc(neuronioletra,neuR);
  vet[18]=comparadisc(neuronioletra,neuS);
  vet[19]=comparadisc(neuronioletra,neuT);
  vet[20]=comparadisc(neuronioletra,neuU);
  vet[21]=comparadisc(neuronioletra,neuV);
  vet[22]=comparadisc(neuronioletra,neuW);
  vet[23]=comparadisc(neuronioletra,neuX);
  vet[24]=comparadisc(neuronioletra,neuY);
  vet[25]=comparadisc(neuronioletra,neuZ);
  for(i=0;i<26;i++){
    for(j=i+1;j<26;j++){
      if(vet[i]>vet[j]){
        letra=i;
        aux=vet[i];
        vet[i]=vet[j];
        vet[j]=aux;

      }
    }

  }//se tiver um numero maior ele vai ser printado
  if(vet[25]>vet[24]){
    vencedora=65+letra;
    printf("a letra pertence a classe %c\n",vencedora);
  }//caso de empate avisa que nao determinou
  if(vet[25]==vet[24]){
    printf("nao foi possivel determinar a classe\n");
  }
}


int main(){
    int cont = 0;
    int aux=0;
    Zera(neuA);
    CriaDiscriminante(neuB, matrizA1);
     compare (bb );
    
    for(int i = 0; i < 80; i++){
        
        printf("%d", neuB[i]);
        cont++; 
        if(cont % 8 == 0){
            printf("\n");
            cont = 0;
        }
    }

  return 0;}
