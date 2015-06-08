#include <stdio.h>

#define MAX 50
#define TXT 25


char hexadecimal(int y){
    char h[16]= {'0','1', '2','3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char i;

    i=h[y];
    return i;
}

void gets2(char s[], int max){
  int i;
  
    fgets(s, max, stdin);
  
  for(i=0; s[i] != '\0' && s[i] != '\n'; i++)
    ;
      s[i] = '\0';
  return;
}

int main(){
	int opcao, libera_fluxo, n, i, j, k, x, y, c[MAX], quantidade;
    char entrada[TXT], saida[TXT],linha[TXT], codificado[MAX];
    char repetir, l, m;
    FILE *f;
    FILE *h;

	    do{
            do{
               printf("Selecione a operação:\n");
               printf("1 - Codificar\n");
               printf("2 - Decodificar\n");
               scanf("%d", &opcao);
            }while(opcao != 1 && opcao != 2);
		    
    
    	    do{
        	   printf("Digite o caminho de entrada:");
        	   scanf("%d", &libera_fluxo);
        	   gets2(entrada, TXT);

        	   f = fopen(entrada, "r");
            }while(f == NULL);
    	
            do{
               printf("Digite o caminho de saida:");
               scanf("%d", &libera_fluxo);
               gets2(saida, TXT);

               h = fopen(saida, "r");
            }while(h == NULL);

            fclose(h);
            h = fopen(saida, "w"); 
            
            if(opcao==1){
                fscanf(f, "%d", &quantidade);

                for(i=0; quantidade>=i ; i++){
                        
                    fgets(linha, MAX, f);
                
                    k=0;
                    
                    for(j=0; linha[j] != '\n' && linha[j] != '\0'; j++){
                        c[j]=linha[j];
                        x=(linha[j])/16;
                        y=(linha[j])%16;
                
                        l=hexadecimal(x);
                        m=hexadecimal(y);

                        codificado[k]=l;
                        codificado[k+1]=m;
                            
                        k=k+2;
                    }
                codificado[k] = '\0';
                if(i==0)
                    fprintf(h, "%d\n", quantidade);
                else
                    fprintf(h, "%s\n", codificado); 
                }    
            }
            
            else{

                fscanf(f,"%d", &quantidade);

                for(i=0; quantidade>=i ; i++){

                    j=0;

                    fgets(codificado, MAX, f);
                    for(k = 0; codificado[k] != '\n' && codificado[k] != '\0'; k++){
                        if(codificado[k]=='0')
                            n=0;
                        if(codificado[k]=='1')
                            n=1;
                        if(codificado[k]=='2')
                            n=2;
                        if(codificado[k]=='3')
                            n=3;
                        if(codificado[k]=='4')
                            n=4;
                        if(codificado[k]=='5')
                            n=5;
                        if(codificado[k]=='6')
                            n=6;
                        if(codificado[k]=='7')
                            n=7;
                        if(codificado[k]=='8')
                            n=8;
                        if(codificado[k]=='9')
                            n=9;
                        if(codificado[k]=='A')
                            n=10;
                        if(codificado[k]=='B')
                            n=11;
                        if(codificado[k]=='C')
                            n=12;
                        if(codificado[k]=='D')
                            n=13;
                        if(codificado[k]=='E')
                            n=14;
                        if(codificado[k]=='F')
                            n=15;
                            
                        if(k%2==0)
                            x=n*16;
                    
                        if(k%2==1)
                            y=n;
                
                        if(k%2==1){
                            linha[j]=x+y;
                            j++;
                        }
                }
                linha[j] = '\0';
                if(i==0)
                    fprintf(h, "%d\n", quantidade);
                else
                    fprintf(h, "%s\n", linha);
            }
        }        
			
            fclose(f);
        	fclose(h);

            printf("OPERACAO CONCLUIDA COM SUCESSO!! \\o/ \n");
    	   
            do{
                printf("Deseja efetuar uma nova operacao? (s/n):");
                scanf("%d", &libera_fluxo);
                scanf("%c", &repetir);
                if(repetir=='n')
                    return 0; 
                
            }while(repetir != 's' && repetir != 'n');
        }while(repetir=='s');
}


