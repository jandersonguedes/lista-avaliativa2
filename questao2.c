#include <stdio.h>
#include <string.h>

int main(){
	
	struct jogador{
		char nomeJogador[30];
		char posicaoJogador;
		int forcaJogador;
	};
		
	struct time{
		char nomeTime[30];
		double forcaTime;	
		struct jogador jogadores[11];
	};
	
	int i;
	
	struct time time1;
	struct time time2;
	
	scanf("\n%[^\n]",time1.nomeTime);
	for(i=0;i<11;i++){
		scanf("\n%[^;];%c;%d",time1.jogadores[i].nomeJogador,&time1.jogadores[i].posicaoJogador,&time1.jogadores[i].forcaJogador);
	}
	
	scanf("\n%[^\n]",time2.nomeTime);
	for(i=0;i<11;i++){
		scanf("\n%[^;];%c;%d",time2.jogadores[i].nomeJogador,&time2.jogadores[i].posicaoJogador,&time2.jogadores[i].forcaJogador);
	}
	
	double forcaTotal = 0;
	for(i=0;i<11;i++){
		switch(time1.jogadores[i].posicaoJogador){
			case 'G':
				forcaTotal += 8*time1.jogadores[i].forcaJogador;
				break;
			case 'L':
				forcaTotal += 10*time1.jogadores[i].forcaJogador;
				break;
			case 'Z':
				forcaTotal += 5*time1.jogadores[i].forcaJogador;
				break;
			case 'V':
				forcaTotal += 8*time1.jogadores[i].forcaJogador;
				break;
			case 'M':
				forcaTotal += 11*time1.jogadores[i].forcaJogador;
				break;
			case 'A':
				forcaTotal += 12*time1.jogadores[i].forcaJogador;
				break;
		}
	}
	time1.forcaTime = forcaTotal/100;
	
	forcaTotal = 0;
	for(i=0;i<11;i++){
		switch(time2.jogadores[i].posicaoJogador){
			case 'G':
				forcaTotal += 8*time2.jogadores[i].forcaJogador;
				break;
			case 'L':
				forcaTotal += 10*time2.jogadores[i].forcaJogador;
				break;
			case 'Z':
				forcaTotal += 5*time2.jogadores[i].forcaJogador;
				break;
			case 'V':
				forcaTotal += 8*time2.jogadores[i].forcaJogador;
				break;
			case 'M':
				forcaTotal += 11*time2.jogadores[i].forcaJogador;
				break;
			case 'A':
				forcaTotal += 12*time2.jogadores[i].forcaJogador;
				break;
		}
	}
	time2.forcaTime = forcaTotal/100;
	
	printf("%s: %.2f de forca\n",time1.nomeTime,time1.forcaTime);
	printf("%s: %.2f de forca\n",time2.nomeTime,time2.forcaTime);
	
	if(time1.forcaTime>time2.forcaTime){
		printf("%s eh mais forte\n",time1.nomeTime);
	}else{
		printf("%s eh mais forte\n",time2.nomeTime);
	}
	
	return 0;
}
