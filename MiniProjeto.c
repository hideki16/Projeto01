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

void Codificar(FILE *f, FILE *h){
    int a[TXT], i, x, y;
    char s[TXT], n, m;

    fgets(s, MAX, f);
    
    for(i = 0; s[i] != '\n' && s[i] != '\0'; i++){
        a[i]=s[i];
        x=(a[i])/16;
        y=(a[i])%16;
        
        n=hexadecimal(x);
        m=hexadecimal(y);
        
        fprintf(h, "%c%c", n, m);

    }
    printf("\n");
    
    return ;
}

void Descodificar(FILE *f, FILE *h){
    char  n, i, x, y;
    char s[MAX],a[MAX];
    
        fgets(a, MAX, f);

    for(i = 0; a[i] != '\n' && a[i] != '\0'; i++){
        if(a[i]=='0')
            n=0;
        if(a[i]=='1')
            n=1;
        if(a[i]=='2')
            n=2;
        if(a[i]=='3')
            n=3;
        if(a[i]=='4')
            n=4;
        if(a[i]=='5')
            n=5;
        if(a[i]=='6')
            n=6;
        if(a[i]=='7')
            n=7;
        if(a[i]=='8')
            n=8;
        if(a[i]=='9')
            n=9;
        if(a[i]=='A')
            n=10;
        if(a[i]=='B')
            n=11;
        if(a[i]=='C')
            n=12;
        if(a[i]=='D')
            n=13;
        if(a[i]=='E')
            n=14;
        if(a[i]=='F')
            n=15;
        if(i%2==0){
            x=n*16;
        }
            
        else{
            y=n;
        }
        
        if(i%2==1){
            a[i]=x+y;
            fprintf(h, "%c", a[i]); 
        }
        
            
    }
    printf("\n");
    return ;

}

int main(){
	int opcao=0, i;
    char entrada[TXT], saida[TXT], linha[MAX];
    char repetir, oi;
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
        	   scanf("%d", &i);
        	   gets2(entrada, TXT);

        	   f = fopen(entrada, "r");
            }while(f == NULL);
    	
            do{
                printf("Digite o caminho de saida:");
                gets2(saida, TXT);
               
                h = fopen(saida, "r"); 
                fclose(h);  
            }while(h == NULL);
            h = fopen(saida, "w"); 
            
            if(opcao==1)
                Codificar(f, h);
            else
                Descodificar(f, h);
			
            fclose(f);
        	fclose(h);
    	   
            do{
                printf("Deseja efetuar uma nova operacao? (s/n):");
                scanf("%d", &i);
                scanf("%c", &repetir);
                if(repetir=='n')
                    return 0; 
                
            }while(repetir != 's' && repetir != 'n');
        }while(repetir=='s');
	return 0;
}


