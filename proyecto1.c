
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

void color(int c);
void menu();
void jugar();
void llenar1(int mapa[14][19]);
void llenar2(int mapa2[10][15]);
void llenar3(int mapa3[12][16]);
void imp(int mapa[14][19]);
void imp2(int mapa2[10][15]);
void imp3(int mapa3[12][16]);
int mundo1(int mapa[14][19]);
int mundo2(int mapa[10][15]);
int mundo3(int mapa[12][16]);

int main(){
	
//menu();
jugar();
system("pause");
return 0;
}
void menu(){
	int i,j,k=15,jue[30],jj=0;
	color(k);
	
	for(i=0;i<1;i++){
		Sleep(300);
		printf("\n\n\n\n");
		printf("\t\t\t\t          []SOKUBAN[]      \n\n");
		Sleep(300);
		printf("\t\t\t\t >>>>>>>>>(1)JUGAR<<<<<<<<<\n\n");
		Sleep(300);
		printf("\t\t\t\t >>>>>>>>>(2)ESTADISTICAS<<\n\n");
		Sleep(300);
		printf("\t\t\t\t >>>>>>>>>(3)SALIR<<<<<<<<<\n\n");
		Sleep(300);
		printf(" \t\t\t\t         (0-0)'?':");
		
	}
	system("cls");
	printf("\n\n\n\n");
		
		printf("\t\t\t\t          []SOKUBAN[]      \n\n");
		
		printf("\t\t\t\t >>>>>>>>>(1)JUGAR<<<<<<<<<\n\n");
		
		printf("\t\t\t\t >>>>>>>>>(2)ESTADISTICAS<<\n\n");
	
		printf("\t\t\t\t >>>>>>>>>(3)SALIR<<<<<<<<<\n\n");
	
		printf(" \t\t\t\t         (0-0)'?':");
		scanf("%i",&j);
		
		if(j==1){
		jj++;
		 jugar();
		}
	
	
	
}
void color(int c){

	HANDLE consol;
	consol = GetStdHandle
		(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute
		(consol, c);
}
void llenar1(int mapa[14][19]){
	int i,j,k;
	for(i=0;i<14;i++){
		for(j=0;j<19;j++){
			mapa[i][j]=0;
			if(i==1&&j>3&&j<9){//
				mapa[i][j]=1;
			}
			if(i==4&&j>1&&j<5){//
				mapa[i][j]=1;
			}
			if(i==4&&j>7&&j<10){//
				mapa[i][j]=1;
			}
			if(j==4&&i>0&&i<4){//
				mapa[i][j]=1;
			}
			if(j==8&&i>0&&i<4){//
				mapa[i][j]=1;
			}
			if(j==2&&i>3&&i<7){//
				mapa[i][j]=1;
			}
			if(j==9&&i>3&&i<8){//
				mapa[i][j]=1;
			}
			if(i==6&&j>=0&&j<2){//
				mapa[i][j]=1;
			}
			if(i==7&&j>=10&&j<14){//
				mapa[i][j]=1;
			}
			if(i==9&&j>=0&&j<5){//
				mapa[i][j]=1;
			}
			if(j==0&&i>=7&&i<9){//
				mapa[i][j]=1;
			}
			if(j==4&&i>=9&&i<11){//
				mapa[i][j]=1;
			}
			if(j==10&&i>=11&&i<12){//
				mapa[i][j]=1;
			}
			if(i==10&&j>=10&&i<19){//
				mapa[i][j]=1;
			}
			if(i==11&&j>=4&&j<11){//
				mapa[i][j]=1;
			}
			if(i==6&&j>=13&&j<18){//
				mapa[i][j]=1;
			}
			if(i==9&&j>=6&&j<9){//
				mapa[i][j]=1;
			}
			if(i==9&&j>=12&&j<14){
				mapa[i][j]=1;
			}
			if(i==9&&j==10){
				mapa[i][j]=1;
			}
			
			if(j==18&&i>=6&&i<11){
				mapa[i][j]=1;
			}
			if(j==4&&i>=6&&i<8){
				mapa[i][j]=1;
			}
			if(j>5&&j<8&&i>=6&&i<8){
				mapa[i][j]=1;
			}
			if(j==11&&i==9){
				mapa[i][j]=2;
			}
			if(i==9&&j==17){
				mapa[i][j]=4;
			}
			if(i==9&&j==16){
				mapa[i][j]=4;
			}
			if(i==8&&j==17){
				mapa[i][j]=4;
			}
			if(i==8&&j==16){
				mapa[i][j]=4;
			}
			if(i==7&&j==17){
				mapa[i][j]=4;
			}
			if(i==7&&j==16){
				mapa[i][j]=4;
			}
		}
	}
}
void imp3(int mapa3[12][16]){
	int i,j,k;
	int a=8,aa=9,ab=1,ac=7,ad=6,dd=14,t=4,y=12;
	printf(" \n\n\n\n");
	for(i=0;i<12;i++){
		for(j=0;j<16;j++){
			if(mapa3[i][j]==0){
			
				printf("    ");
			}
			if(mapa3[i][j]==1){
				color(ac);
				printf("%c",219);
				color(ac);
				printf("%c",219);
				color(a);
				printf("%c",219);
				color(a);
				printf("%c",219);
			}
			if(mapa3[i][j]==2){
			
				color(ab);
				printf(" %c",219);
				color(aa);
				printf("%c ",219);
				
			}
			if(mapa3[i][j]==3){
				
				color(ad);
				printf(" %c",219);
				color(dd);
				printf("%c ",219);

			}
			if(mapa3[i][j]==5){
				
				color(t);
				printf(" %c",219);
				color(t);
				printf("%c ",219);

			}
			if(mapa3[i][j]==4){
				color(t);
				printf("  %c ",169);
				
			}
		}
		printf("\n");
	}
}
void imp(int mapa[14][19]){
	int i,j,k;
	int a=8,aa=9,ab=1,ac=7,ad=6,dd=14,t=4,y=12;
	for(i=0;i<14;i++){
		for(j=0;j<19;j++){
			if(mapa[i][j]==0){
			
				printf("    ");
			}
			if(mapa[i][j]==1){
				color(ac);
				printf("%c",219);
				color(ac);
				printf("%c",219);
				color(a);
				printf("%c",219);
				color(a);
				printf("%c",219);
			}
			if(mapa[i][j]==2){
			
				color(ab);
				printf(" %c",219);
				color(aa);
				printf("%c ",219);
				
			}
			if(mapa[i][j]==3){
				
				color(ad);
				printf(" %c",219);
				color(dd);
				printf("%c ",219);

			}
			if(mapa[i][j]==5){
				
				color(t);
				printf(" %c",219);
				color(t);
				printf("%c ",219);

			}
			if(mapa[i][j]==4){
				color(t);
				printf("  %c ",169);
				
			}
		}
		printf("\n");
	}
}
void imp2(int mapa2[10][15]){
		int i,j,k;
	int a=8,aa=9,ab=1,ac=7,ad=6,dd=14,t=4,y=12;
	printf(" \n\n\n\n");
	for(i=0;i<10;i++){
		for(j=0;j<15;j++){
			if(mapa2[i][j]==0){
			
				printf("    ");
			}
			if(mapa2[i][j]==1){
				color(ac);
				printf("%c",219);
				color(ac);
				printf("%c",219);
				color(a);
				printf("%c",219);
				color(a);
				printf("%c",219);
			}
			if(mapa2[i][j]==2){
			
				color(ab);
				printf(" %c",219);
				color(aa);
				printf("%c ",219);
				
			}
			if(mapa2[i][j]==3){
				
				color(ad);
				printf(" %c",219);
				color(dd);
				printf("%c ",219);

			}
			if(mapa2[i][j]==5){
				
				color(t);
				printf(" %c",219);
				color(t);
				printf("%c ",219);

			}
			if(mapa2[i][j]==4){
				color(t);
				printf("  %c ",169);
				
			}
		}
		printf("\n");
	}
}
void jugar(){
	int mapa[14][19],mapa2[10][15],mapa3[12][16];
	int i,j,k=0,a=0,l=15,resul=0;
	char tec=0;
	char nombre;
		
   
    
	system("pause");
	system("cls");
		printf("\n\n\n\n");
		printf("\t\t\t\t >>>>>>>>>Instrucciones de juego:<<<<<<<<<\n\n");
		printf("\t\t\t\t >>>>>>>>>>>>>>>>Arriba=(W)<<<<<<<<<<<<<<<\n\n");
		printf("\t\t\t\t >>>>>>Izquierda=(A)----derecha=(D)<<<<<<<\n\n");
		printf("\t\t\t\t >>>>>>>>>>>>>>>>Abajo=(S)<<<<<<<<<<<<<<<<\n\n");
		printf("\t\t\t\t Nombre de jugador:  \n\n");
		//guardar
	system("pause");
	system("cls");
	llenar1(mapa);
	resul=mundo1(mapa);
	if(resul>10000){
		resul=resul-10000;
		
	}else{
	llenar2(mapa2);
	mundo2(mapa2);
	if(resul>10000){
	
	}else{
	llenar3(mapa3);
    mundo3(mapa3);
	}
    
	}
	
    

   
	
}
void llenar3(int mapa[12][16]){
	int i,j,k;
	for(i=0;i<12;i++){
		for(j=0;j<16;j++){
			mapa[i][j]=0;
			if(i==1&j>2&&j<10){
				mapa[i][j]=1;
			}
			if(i==0&&j>8&&j<14){
				mapa[i][j]=1;
			}
			if(i==5&&j>5&&j<11){
				mapa[i][j]=1;
			}
			if(i==4&&j>7&&j<11){
				mapa[i][j]=1;
			}
			if(i==6&&j>6&&j<10){
				mapa[i][j]=1;
			}
			if(i==5&&j>1&&j<5){
				mapa[i][j]=1;
			}
			if(i==5&&j>11&&j<15){
				mapa[i][j]=1;
			}
			if(i==8&&j>6&&j<10){
				mapa[i][j]=1;
			}
			if(i==10&&j>4&&j<8){
				mapa[i][j]=1;
			}
			if(i==10&&j>8&&j<14){
				mapa[i][j]=1;
			}
			if(i==11&&j>1&&j<6){
				mapa[i][j]=1;
			}
			if(i==2&&j==3){
				mapa[i][j]=1;
			}
			if(i==2&&j==5){
				mapa[i][j]=1;
			}
			if(i==2&&j>7&&j<10){
				mapa[i][j]=1;
			}
			if(i==1&&j==13){
				mapa[i][j]=1;
			}
			if(j==2&&i>1&&i<12){
				mapa[i][j]=1;
			}
			if(j==14&&i>1&&i<6){
				mapa[i][j]=1;
			}
			if(j==13&&i>4&&i<11){
				mapa[i][j]=1;
			}
			if(j==7&&i>7&&i<11){
				mapa[i][j]=1;
			}
			if(j==9&&i>7&&i<11){
				mapa[i][j]=1;
			}
			if(i==2&&j>10&&j<13){
				mapa[i][j]=3;
			}
			if(i==9&&j>3&&j<6){
				mapa[i][j]=3;
			}
			if(j==4&&j>5&&j<8){
				mapa[i][j]=3;
			}
			if(i==7&&j==6){
				mapa[i][j]=3;
			}
			if(i==7&&j==9){
				mapa[i][j]=3;
			}
			if(i==4&&j==5){
				mapa[i][j]=3;
			}
			if(i==5&&j==11){
				mapa[i][j]=3;
			}
			if(i==3&&j==7){
				mapa[i][j]=3;
			}
			if(j==12&&i>5&&i<10){
				mapa[i][j]=4;
			}
			if(j==11&&i>5&&i<10){
				mapa[i][j]=4;
			}
			if(j==10&&i>6&&i<10){
				mapa[i][j]=4;
			}
			if(j==4&&i>5&&i<8){
				mapa[i][j]=3;
			}
			if(i==2&&j==7){
				mapa[i][j]=2;
			}
		}
	}
}
void llenar2(int mapa2[10][15]){
	int i,j,k;
	
	for(i=0;i<10;i++){
		for(j=0;j<15;j++){
			mapa2[i][j]=0;
			if(i>=0&&i<7&&j==0){
				mapa2[i][j]=1;
			}
			if(i==0&&j>=0&&j<12){
				mapa2[i][j]=1;
			}
			if(i==9&&j>1&&j<14){
				mapa2[i][j]=1;
			}
			if(i>0&&i<10&&j==13){
				mapa2[i][j]=1;
			}
			if(i>5&&i<10&&j==2){
				mapa2[i][j]=1;
			}
			if(i==6&&j>=0&&j<6){
				mapa2[i][j]=1;
			}
			if(j==5&&i>=0&&i<4){
				mapa2[i][j]=1;
			}
			if(i==1&&j>10&&j<14){
				mapa2[i][j]=1;
			}
			if(i==3&&j>6&&j<11){
				mapa2[i][j]=1;
			}
			if(i==5&&j==5){
				mapa2[i][j]=1;
			}
			if(i==5&&j==7){
				mapa2[i][j]=1;
			}
			if(i==5&&j==12){
				mapa2[i][j]=1;
			}
			
			if(i==4&&j>8&&j<11){
				mapa2[i][j]=1;
			}
			
			if(j==7&&i==8){
				mapa2[i][j]=1;
			}
			if(i==6&&j>6&&j<9){
				mapa2[i][j]=1;
			}
			if(j==1&&i>=1&&i<6){
				mapa2[i][j]=4;
			}
			if(j==2&&i>=1&&i<6){
				mapa2[i][j]=4;
			}
			if(i==3&&j==6){
				mapa2[i][j]=3;
			}
			if(i==2&&j==7){
				mapa2[i][j]=3;
			}
			if(i==2&&j==10){
				mapa2[i][j]=3;
			}
			if(i==7&&j==4){
				mapa2[i][j]=3;
			}
			if(i==7&&j==7){
				mapa2[i][j]=3;
			}
			if(i==7&&j==9){
				mapa2[i][j]=3;
			}
			if(i==6&&j==9){
				mapa2[i][j]=3;
			}
			if(i==7&&j==11){
				mapa2[i][j]=3;
			}
			if(i==6&&j==11){
				mapa2[i][j]=3;
			}
			if(i==5&&j==10){
				mapa2[i][j]=3;
			}
			
			
			if(i==4&&j==7){
				mapa2[i][j]=2;
			}
		}
	}

}
int mundo1(int mapa[14][19]){
	int i,j,k=0,a=0,aa=0,y=0,l=15,mov=0,ret=0,per=0,gan=0,map=0;
	char tec=0;
      system("cls");
      srand(time(NULL));
      
      map=rand()%3;
      if(map==0){
      	map++;
	  }
	  if(map==1){
	  for(i=0;i<14;i++){
      	for(j=0;j<19;j++){
      		if(i==8&&j==2){
			mapa[i][j]=3;
			}
			if(i==8&&j==5){
				mapa[i][j]=3;
			}
			if(i==5&&j==5){
				mapa[i][j]=3;
			}
			if(i==3&&j==5){
				mapa[i][j]=3;
			}
			if(i==5&&j==7){
				mapa[i][j]=3;
			}
			if(i==4&&j==7){
				mapa[i][j]=3;
			}
		  }
	  }
	  }
	  if(map==2){
	  for(i=0;i<14;i++){
      	for(j=0;j<19;j++){
      		if(i==7&&j==13){
			mapa[i][j]=3;
			}
			if(i==8&&j==4){
				mapa[i][j]=3;
			}
			if(i==5&&j==4){
				mapa[i][j]=3;
			}
			if(i==3&&j==5){
				mapa[i][j]=3;
			}
			if(i==5&&j==6){
				mapa[i][j]=3;
			}
			if(i==7&&j==5){
				mapa[i][j]=3;
			}
		  }
	  }
	  }
      
      
      
      
      for(i=0;i<14;i++){
      	for(j=0;j<19;j++){
      		if(mapa[i][j]==3){
      			y++;
			  }
		  }
	  }
	  color(l);
      printf("\t\t\t\t Cajas por almacenar %i \n\n",y);
      printf("\t\t\t\t Movimiento del jugador %i \n\n",mov);
       imp(mapa);
    do{
    	if(kbhit()){
           
    		tec=getch();
    		aa=0;
    		for(i=0;i<14;i++){
    			for(j=0;j<19;j++){
    				if(tec=='w'){
    				if(mapa[i-1][j]==0&&mapa[i][j]==2){
    				mapa[i-1][j]=2;mapa[i][j]=0;mov++;
    				break;
					}
					if(mapa[i-1][j]==3&&mapa[i][j]==2&&mapa[i-2][j]==0){
						mapa[i-2][j]=3;mapa[i-1][j]=2;mapa[i][j]=0;mov++;
						break;
					}
					if(mapa[i][j]==2&&mapa[i-1][j]==3&&mapa[i-2][j]==4){
						mapa[i][j]=0;mapa[i-2][j]=5;mapa[i-1][j]=2;mov++;
					}
					if(mapa[i][j]==2&&mapa[i-1][j]==5&&mapa[i-2][j]==4){
						mapa[i][j]=4;mapa[i-1][j]=2;mapa[i-2][j]=5;mov++;
					}
				    if(mapa[i][j]==2&&mapa[i-1][j]==4){
				    	mapa[i][j]=4;mapa[i-1][j]=2;mov++;
					}  
					
					}//w
					if(tec=='a'){
    				
					
					if(mapa[i][j-1]==0&&mapa[i][j]==2&&mapa[i][j+1]!=4&&mapa[i-1][j]!=4&&mapa[i][j+1]!=5){//moverse1
    				mapa[i][j-1]=2;mapa[i][j]=0;mov++;
    				break;
					}

					
				
					if(mapa[i][j]==2&&mapa[i][j-1]==4){//moverse 2
						if(aa==0){
							mapa[i][j]=4;mapa[i][j-1]=2;mov++;
						break;
						}
						
					}
					
					if(mapa[i][j-1]==0&&mapa[i][j]==2&&mapa[i][j+1]==4&&mapa[i][j+2]==1){//mover 3
						mapa[i][j]=4;mapa[i][j-1]=2;mov++;
						break;
					}
				
					if(mapa[i][j]==2&&mapa[i][j+1]==5&&mapa[i][j-1]==0){//punto casa 
						if(a==0&&mapa[i][j+2]!=5){
							mapa[i][j]=4;mapa[i][j-1]=2;a++;aa++;mov++;
						}
						
					}
					
					if(mapa[i][j]==2&&mapa[i][j-1]==5&&mapa[i][j-2]==0){//caja punto
						if(a==0){
							mapa[i][j-1]=2;mapa[i][j]=4;mapa[i][j-2]=3;a++;aa++;mov++;
						}
					}
					if(mapa[i][j]==2&&mapa[i][j-1]==3&&mapa[i][j-2]==0&&mapa[i][j+1]!=4){
						if(aa==0){
							mapa[i][j-1]=2;mapa[i][j]=0;mapa[i][j-2]=3;mov++;
						}
					}
					
					
					
					if(mapa[i][j]==2&&mapa[i][j-1]==3&&mapa[i][j-2]==0){
						mapa[i][j-2]=3;mapa[i][j-1]=2;mapa[i][j]=0;mov++;
					}
						if(mapa[i][j]==2&&mapa[i][j-1]==0){
						
							mapa[i][j]=0;mapa[i][j-1]=2;mov++;
					}
					
					
				
					}//a
					a=0;
					if(tec=='d'){
    				if(mapa[i][j+1]==0&&mapa[i][j]==2&&mapa[i][j+1]!=4){//vomient1
    				if(a==0){
    					mapa[i][j+1]=2;mapa[i][j]=0;a++;mov++;
    					break;
					}
    				
					}
					if(mapa[i][j+1]==3&&mapa[i][j]==2&&mapa[i][j+2]==0){//caja mv
						mapa[i][j+2]=3;mapa[i][j+1]=2;mapa[i][j]=0;mov++;
						break;
					}
					if(mapa[i][j]==2&&mapa[i][j+1]==3&&mapa[i][j+2]==4&&mapa[i][j+3]==4){//caja punto
						if(a==0){
							mapa[i][j]=0;mapa[i][j+1]=2;mapa[i][j+2]=5;a++;aa++;mov++;
						}
					}
					if(mapa[i][j]==2&&mapa[i][j+1]==5&&mapa[i][j+2]==4){//caja pare
						if(aa==0){
							mapa[i][j]=0;mapa[i][j+1]=2;mapa[i][j+2]=5;mov++;
						}		
					}
					
					
					if(mapa[i][j]==2&&mapa[i][j+1]==4&&mapa[i][j+2]==4&&mapa[i][j+3]==1){//caja punto retro
						if(a==0){
							mapa[i][j+1]=2;mapa[i][j]=0;a++;aa++;mov++;
						}
						
					}
					if(mapa[i][j]==2&&mapa[i][j+1]==4&&mapa[i][j+2]==1){//punto caja roja
						if(aa==0){
							mapa[i][j+1]=2;mapa[i][j]=4;a++;mov++;
						}
    
					  }
					if(mapa[i][j]==2&&mapa[i][j+1]==3&&mapa[i][j+2]==4&&mapa[i][j+3]==5){
						mapa[i][j]=0;mapa[i][j+1]=2;mapa[i][j+2]=5;mov++;
					}
					if(mapa[i][j]==2&&mapa[i][j+1]==4&&mapa[i][j+2]==5){
						mapa[i][j]=0;mapa[i][j+1]=2;mov++;
					}
					  
					
		       	    }//d
                    a=0;
				}
				
			}
			  for(j=0;j<19;j++){
		       	    	for(i=0;i<14;i++){
		       	    		if(tec=='s'){
    					
    				if(mapa[i+1][j]==0&&mapa[i][j]==2){
    					a++;
    				   mapa[i+1][j]=2;mapa[i][j]=0;mov++;
    				    break;
				     	}
				    if(mapa[i+1][j]==3&&mapa[i][j]==2&&mapa[i+2][j]==0){
						mapa[i+2][j]=3;mapa[i+1][j]=2;mapa[i][j]=0;mov++;
						break;
					}
					if(mapa[i][j]==2&&mapa[i+1][j]==3&&mapa[i][j+2]==4){
						mapa[i][j]=0;mapa[i+1][j]=2;mapa[i][j+2]=5;mov++;
					}
					if(mapa[i][j]==2&&mapa[i+1][j]==5&&mapa[i+2][j]==4){
						mapa[i][j]=4;mapa[i+1][j]=2;mapa[i+2][j]=5;mov++;
					}
					if(mapa[i][j]==2&&mapa[i+1][j]==4){
				    	if(a==0){
				    		mapa[i][j]=4;mapa[i+1][j]=2;a++;mov++;
						}
					}
					
				     	
						}//s
						   }
					   }
    				a=0;
    		
		system("cls");
		y=0;
	for(i=0;i<14;i++){
      	for(j=0;j<19;j++){
      		if(mapa[i][j]==3){
      			y++;
			  }
		  }
	  }
	  color(l);
      printf("\t\t\t\t Cajas por almacenar %i \n\n",y);
      printf("\t\t\t\t Movimiento del jugador %i \n\n",mov);
    	imp(mapa);
    	int contd=0;
  for(i=0;i<14;i++){
  	for(j=0;j<19;j++){
  		if(mapa[i][j]==5){
  			contd++;
		  }
	  }
  }
  int over=0;
  for(i=0;i<14;i++){
  	for(j=0;j<19;j++){
  		
		  if(mapa[i][j]==3){
  			if(mapa[i][j-1]==3){
  				if(mapa[i+1][j-1]==1&&mapa[i+1][j]==1){
  						over=1;
				  }
			  }
			  if(mapa[i][j+1]==3){
  				if(mapa[i+1][j+1]==1&&mapa[i+1][j]==1){
  						over=1;
				  }
			  }
			  if(mapa[i][j-1]==3){
  				if(mapa[i-1][j-1]==1&&mapa[i-1][j]==1){
  						over=1;
				  }
			  }
			  if(mapa[i][j+1]==3){
  				if(mapa[i-1][j+1]==1&&mapa[i-1][j]==1){
  						over=1;
				  }
			  }
			  if(mapa[i-1][j]==3){
  				if(mapa[i-1][j+1]==1&&mapa[i][j+1]==1){
  						over=1;
				  }
			  }
			  if(mapa[i+1][j]==3){
  				if(mapa[i+1][j+1]==1&&mapa[i][j+1]==1){
  						over=1;
				  }
			  }
			  if(mapa[i-1][j]==3){
  				if(mapa[i-1][j-1]==1&&mapa[i][j-1]==1){
  						over=1;
				  }
			  }
			  if(mapa[i+1][j]==3){
  				if(mapa[i+1][j-1]==1&&mapa[i][j-1]==1){
  						over=1;
				  }
			  }
			  if(mapa[i][j+1]==3&&mapa[i-1][j+1]==3&&mapa[i-1][j]==3){
			  	over=1;
			  }
			 
			  if(mapa[i][j+1]==1&&mapa[i-1][j]==1){
		  		over=1;
			  }
			  if(mapa[i][j-1]==1&&mapa[i-1][j]==1){
		  		over=1;
			  }
			  if(mapa[i+1][j]==1&&mapa[i][j-1]==1){
		  		over=1;
			  }
			  if(mapa[i+1][j]==1&&mapa[i][j+1]==1){
		  		over=1;
			  }
		  }
		 
	  }
  }
   
  if(over==1){
  	
	printf(" GAME OVER ");
  	printf(" presione 'z'");
  	per=10000;
  }
  if(tec=='z'){
  	k=1;
  }
  if(contd==6){
  	
  	printf("\n VICTORY \n");
  	gan=20000;
  	system("pause");
	  k=1;
  }
}
	}while(k==0);
	
	system("cls");
		int contd=0;
  for(i=0;i<14;i++){
  	for(j=0;j<19;j++){
  		if(mapa[i][j]==5){
  			contd++;
		  }
	  }
  }
	
	if(contd<6){
	printf("\n\n\n\n");	
	printf("\t\t\t\t GAME OVER \n\n");
	printf("\t\t\t\t  NIVEL 1 \n\n");
	printf("\t\t\t\t  MOVIMIENTOS %i \n\n",mov);
	
	}
	ret=gan+per+mov;

	return ret;
}



int mundo2(int mapa[10][15]){
		int i,j,k=0,a=0,aa=0,y=0,l=15,mov=0;
	char tec=0;
      system("cls");
      
      for(i=0;i<10;i++){
      	for(j=0;j<15;j++){
      		if(mapa[i][j]==3){
      			y++;
			  }
		  }
	  }
	  color(l);
      printf("\t\t\t\t Cajas por almacenar %i \n\n",y);
      printf("\t\t\t\t Movimiento del jugador %i \n\n",mov);
       imp2(mapa);
    do{
    	if(kbhit()){
           
    		tec=getch();
    		aa=0;
    		for(i=0;i<10;i++){
    			for(j=0;j<15;j++){
    				if(tec=='w'){
    				if(mapa[i-1][j]==0&&mapa[i][j]==2){
    				mapa[i-1][j]=2;mapa[i][j]=0;mov++;
    				break;
					}
					if(mapa[i-1][j]==3&&mapa[i][j]==2&&mapa[i-2][j]==0){
						mapa[i-2][j]=3;mapa[i-1][j]=2;mapa[i][j]=0;mov++;
						break;
					}
					if(mapa[i][j]==2&&mapa[i-1][j]==3&&mapa[i-2][j]==4){
						mapa[i][j]=0;mapa[i-2][j]=5;mapa[i-1][j]=2;mov++;
					}
					if(mapa[i][j]==2&&mapa[i-1][j]==5&&mapa[i-2][j]==4){
						mapa[i][j]=4;mapa[i-1][j]=2;mapa[i-2][j]=5;mov++;
					}
				    if(mapa[i][j]==2&&mapa[i-1][j]==4){
				    	mapa[i][j]=4;mapa[i-1][j]=2;mov++;
					}  
					
					}//w
					if(tec=='a'){
    				
					
					if(mapa[i][j-1]==0&&mapa[i][j]==2&&mapa[i][j+1]!=4&&mapa[i][j+1]!=5){//moverse1
    				mapa[i][j-1]=2;mapa[i][j]=0;mov++;
    				break;
					}
					
			
						if(mapa[i][j-1]==3&&mapa[i][j]==2&&mapa[i][j-2]==0){//caja mv
						mapa[i][j-2]=3;mapa[i][j-1]=2;mapa[i][j]=0;mov++;
						break;
					}
					if(mapa[i][j]==2&&mapa[i][j-1]==3&&mapa[i][j-2]==4&&mapa[i][j-3]==4){//caja punto
						if(a==0){
							mapa[i][j]=0;mapa[i][j-1]=2;mapa[i][j-2]=5;a++;aa++;mov++;
						}
					}
					if(mapa[i][j]==2&&mapa[i][j-1]==5&&mapa[i][j-2]==4){//caja pare
						if(aa==0){
							mapa[i][j]=0;mapa[i][j-1]=2;mapa[i][j-2]=5;mov++;
						}		
					}
					
					
					if(mapa[i][j]==2&&mapa[i][j-1]==4&&mapa[i][j-2]==4&&mapa[i][j-3]==1){//caja punto retro
						if(a==0){
							mapa[i][j-1]=2;mapa[i][j]=0;a++;aa++;mov++;
						}
						
					}
					if(mapa[i][j]==2&&mapa[i][j-1]==4&&mapa[i][j-2]==1&&mapa[i][j-2]!=5){//punto caja roja
						if(aa==0){
							mapa[i][j-1]=2;mapa[i][j]=4;aa++;mov++;
						}
    
					  }
					if(mapa[i][j]==2&&mapa[i][j-1]==4&&mapa[i][j-2]==5){//poder salir de caja 
						mapa[i][j-1]=2;mapa[i][j]=0;mov++;
					}
					if(mapa[i][j]==2&&mapa[i][j-1]==3&&mapa[i][j-2]==4&&mapa[i][j-3]==5){//punto caja roja 2 linea 
						if(aa==0){
							mapa[i][j]=0;mapa[i][j-1]=2;mapa[i][j-2]=5;aa++;mov++;
						}
    
					  }
					
				
					}//a
					a=0;
					if(tec=='d'){
    				if(mapa[i][j+1]==0&&mapa[i][j]==2&&mapa[i][j+1]!=4&&mapa[i-1][j]!=4&&mapa[i][j-1]!=5&&mapa[i+1][j]!=4&&mapa[i][j+1]!=5){//vomient1
    				if(aa==0){

    					mapa[i][j+1]=2;mapa[i][j]=0;aa++;mov++;
    					break;

					}
				}
				if(mapa[i][j]==2&&mapa[i][j+1]==5&&mapa[i][j+2]==0&&mapa[i][j-2]!=5){
					if(aa==0){
						mapa[i][j]=4;mapa[i][j+1]=2;mapa[i][j+2]=3;aa++;mov++;
					}
				}
				
					if(mapa[i][j]==2&&mapa[i][j-1]==5&&mapa[i][j+1]==0&&mapa[i][j-2]!=5){
						if(aa==0){
							mapa[i][j]=4;mapa[i][j+1]=2;aa++;mov++;
							break;
						}
					}
				    if(mapa[i][j]==2&&mapa[i][j+1]==4&&mapa[i][j-1]==1&&mapa[i][j-2]!=5){
						if(aa==0){
							mapa[i][j+1]=2;mapa[i][j]=4;aa++;mov++;
							break;
						}
    
					  }
					 if(mapa[i][j]==2&&mapa[i][j-1]==4&&mapa[i][j+1]==0&&mapa[i][j-2]!=5){
					 	if(aa==0){
					 		mapa[i][j]=4;mapa[i][j+1]=2;aa++;mov++;
					 		break;
						 }
					 }
					 if(mapa[i][j]==2&&mapa[i][j-1]==4&&mapa[i][j-2]&&mapa[i][j+1]==0){
					 	if(aa==0){
					 		mapa[i][j]=0;mapa[i][j+1]=2;aa++;mov++;
					 		break;
						 }
					 }
					 if(mapa[i][j]==2&&mapa[i][j-1]==5&&mapa[i][j-2]!=5){
					 	if(aa==0){
					 		mapa[i][j]=4;mapa[i][j+1]=2;aa++;mov++;
					 		break;
						 }
					 } 
					 if(mapa[i][j]==2&&mapa[i][j-1]==4&&mapa[i][j-2]==5&&mapa[i][j+1]==0){
					 	if(aa==0){
					 		mapa[i][j+1]=2;mapa[i][j+1]=0;aa++;mov++;
					 		break;
						 }
					 } 
					 
					 
					 if(mapa[i][j]==2&&mapa[i][j-1]==4&&mapa[i][j+1]==0){
					 	if(aa==0){
					 		mapa[i][j]=0;mapa[i][j+1]=2;aa++;mov++;
					 		break;
						 }
					 } 
					
					if(mapa[i][j+1]==3&&mapa[i][j]==2&&mapa[i][j+2]==0){//caja mv
						if(aa==0){
						mapa[i][j+2]=3;mapa[i][j+1]=2;mapa[i][j]=0;aa++;mov++;
						break;
						}
					}
					if(mapa[i][j]==2&&mapa[i][j+1]==3&&mapa[i][j+2]==4&&mapa[i][j+3]==4){//caja punto
						if(a==0){
							mapa[i][j]=0;mapa[i][j+1]=2;mapa[i][j+2]=5;a++;aa++;mov++;
						}
					}
					if(mapa[i][j]==2&&mapa[i][j+1]==5&&mapa[i][j+2]==4){//caja pare
						if(aa==0){
							mapa[i][j]=0;mapa[i][j+1]=2;mapa[i][j+2]=5;mov++;
						}		
					}
					
					
					if(mapa[i][j]==2&&mapa[i][j+1]==4&&mapa[i][j+2]==4&&mapa[i][j+3]==1){//caja punto retro
						if(a==0){
							mapa[i][j+1]=2;mapa[i][j]=0;a++;aa++;mov++;
						}
						
					}
					if(mapa[i][j]==2&&mapa[i][j+1]==4&&mapa[i][j+2]==1){//punto caja roja
						if(aa==0){
							mapa[i][j+1]=2;mapa[i][j]=4;a++;mov++;
						}
    
					  }
					
					if(mapa[i][j]==2&&mapa[i][j+1]==3&&mapa[i][j+2]==4&&mapa[i][j+3]==5){
						mapa[i][j]=0;mapa[i][j+1]=2;mapa[i][j+2]=5;mov++;
					}
					if(mapa[i][j]==2&&mapa[i][j+1]==4&&mapa[i][j+2]==5){
						mapa[i][j]=0;mapa[i][j+1]=2;mov++;
					}
					 if(mapa[i][j]==2&&mapa[i][j-1]==5&&mapa[i][j-2]==5&&mapa[i][j+1]==0){
					 	if(aa==0){
							mapa[i][j+1]=2;mapa[i][j]=0;a++;mov++;
						}
					 } 
					
		       	    }//d
                    a=0;
				}
				
			}
			  for(j=0;j<15;j++){
		       	    	for(i=0;i<10;i++){
		       	    		if(tec=='s'){
    					
    				if(mapa[i+1][j]==0&&mapa[i][j]==2){
    					a++;
    				   mapa[i+1][j]=2;mapa[i][j]=0;mov++;
    				    break;
				     	}
				    if(mapa[i+1][j]==3&&mapa[i][j]==2&&mapa[i+2][j]==0){
						mapa[i+2][j]=3;mapa[i+1][j]=2;mapa[i][j]=0;mov++;
						break;
					}
					if(mapa[i][j]==2&&mapa[i+1][j]==3&&mapa[i][j+2]==4){
						mapa[i][j]=0;mapa[i+1][j]=2;mapa[i][j+2]=5;mov++;
					}
					if(mapa[i][j]==2&&mapa[i+1][j]==5&&mapa[i+2][j]==4){
						mapa[i][j]=4;mapa[i+1][j]=2;mapa[i+2][j]=5;mov++;
					}
					if(mapa[i][j]==2&&mapa[i+1][j]==4){
				    	if(a==0){
				    		mapa[i][j]=4;mapa[i+1][j]=2;a++;mov++;
						}
					}
					
				     	
						}//s
						   }
					   }
    				a=0;
    		
		system("cls");
		y=0;
	for(i=0;i<10;i++){
      	for(j=0;j<15;j++){
      		if(mapa[i][j]==3){
      			y++;
			  }
		  }
	  }
	  color(l);
      printf("\t\t\t\t Cajas por almacenar %i \n\n",y);
      printf("\t\t\t\t Movimiento del jugador %i \n\n",mov);
    	imp2(mapa);
    	int contd=0;
  for(i=0;i<10;i++){
  	for(j=0;j<15;j++){
  		if(mapa[i][j]==5){
  			contd++;
		  }
	  }
  }
  int over=0;
  for(i=0;i<10;i++){
  	for(j=0;j<15;j++){
  		
		  if(mapa[i][j]==3){
  			if(mapa[i][j-1]==3){
  				if(mapa[i+1][j-1]==1&&mapa[i+1][j]==1){
  						over=1;
				  }
			  }
			  if(mapa[i][j+1]==3){
  				if(mapa[i+1][j+1]==1&&mapa[i+1][j]==1){
  						over=1;
				  }
			  }
			  if(mapa[i][j-1]==3){
  				if(mapa[i-1][j-1]==1&&mapa[i-1][j]==1){
  						over=1;
				  }
			  }
			  if(mapa[i][j+1]==3){
  				if(mapa[i-1][j+1]==1&&mapa[i-1][j]==1){
  						over=1;
				  }
			  }
			  if(mapa[i-1][j]==3){
  				if(mapa[i-1][j+1]==1&&mapa[i][j+1]==1){
  						over=1;
				  }
			  }
			  if(mapa[i+1][j]==3){
  				if(mapa[i+1][j+1]==1&&mapa[i][j+1]==1){
  						over=1;
				  }
			  }
			  if(mapa[i-1][j]==3){
  				if(mapa[i-1][j-1]==1&&mapa[i][j-1]==1){
  						over=1;
				  }
			  }
			  if(mapa[i+1][j]==3){
  				if(mapa[i+1][j-1]==1&&mapa[i][j-1]==1){
  						over=1;
				  }
			  }
			  if(mapa[i][j+1]==3&&mapa[i-1][j+1]==3&&mapa[i-1][j]==3){
			  	over=1;
			  }
			 
			  if(mapa[i][j+1]==1&&mapa[i-1][j]==1){
		  		over=1;
			  }
			  if(mapa[i][j-1]==1&&mapa[i-1][j]==1){
		  		over=1;
			  }
			  if(mapa[i+1][j]==1&&mapa[i][j-1]==1){
		  		over=1;
			  }
			  if(mapa[i+1][j]==1&&mapa[i][j+1]==1){
		  		over=1;
			  }
		  }
		 
	  }
  }
  if(over==1){
  	
	printf(" GAME OVER ");
  	printf(" presione 'z'");
  }
  if(tec=='z'){
  	k=1;
  }
  if(contd==10){
  	
  	printf("\n VICTORY \n");
  	system("pause");
	  k=1;
  }
}
	}while(k==0);
	system("cls");
	menu();
	
}
int mundo3(int mapa[12][16]){
	int i,j,k=0,a=0,aa=0,y=0,l=15,mov=0;
	char tec=0;
      system("cls");
      
      for(i=0;i<10;i++){
      	for(j=0;j<15;j++){
      		if(mapa[i][j]==3){
      			y++;
			  }
		  }
	  }
	  color(l);
      printf("\t\t\t\t Cajas por almacenar %i \n\n",y);
      printf("\t\t\t\t Movimiento del jugador %i \n\n",mov);
       imp3(mapa);
    do{
    	if(kbhit()){
           
    		tec=getch();
    		aa=0;
    		for(i=0;i<12;i++){
    			for(j=0;j<16;j++){
    				if(tec=='w'){
    				if(mapa[i-1][j]==0&&mapa[i][j]==2&&mapa[i+1][j]!=4){
    				mapa[i-1][j]=2;mapa[i][j]=0;mov++;
    				break;
					}
					if(mapa[i-1][j]==3&&mapa[i][j]==2&&mapa[i-2][j]==0&&mapa[i][j+1]!=4){
						mapa[i-2][j]=3;mapa[i-1][j]=2;mapa[i][j]=0;mov++;
						break;
					}
					if(mapa[i][j]==2&&mapa[i-1][j]==3&&mapa[i-2][j]==4&&mapa[i][j+1]!=4){
						mapa[i][j]=0;mapa[i-2][j]=5;mapa[i-1][j]=2;mov++;
					}
					if(mapa[i][j]==2&&mapa[i-1][j]==5&&mapa[i-2][j]==4){
						mapa[i][j]=4;mapa[i-1][j]=2;mapa[i-2][j]=5;mov++;
					}
				    if(mapa[i][j]==2&&mapa[i-1][j]==4){
				    	mapa[i][j]=4;mapa[i-1][j]=2;mov++;
				    	
					}  
					if(mapa[i][j]==2&&mapa[i-1][j-1]==1&&mapa[i-1][j+1]==1&&mapa[i-1][j]==0){
					  	mapa[i-1][j]=2;mapa[i][j]=4;mov++;
					  }
					if(mapa[i][j]==2&&mapa[i][j-1]==1&&mapa[i][j+1]==1&&mapa[i-1][j]==0){
					  	mapa[i-1][j]=2;mapa[i][j]=0;mov++;
					  }
					if(mapa[i][j]==2&&mapa[i-1][j]==0&&mapa[i-2][j]==1){
						if(aa==0){
							mapa[i][j]=4;mapa[i-1][j]=2;mov++;a++;aa++;
						}
					}
					if(mapa[i][j]==2&&mapa[i-1][j]==3&&mapa[i-2][j]==0&&mapa[i+1][j]==4&&mapa[i][j+1]==4){
						if(aa==0){
							mapa[i-1][j]=2;mapa[i][j]=4;mapa[i-2][j]=3;aa++;mov++;
							break;
						}
    
					  }
					
					}//w
					if(tec=='a'){
    				
					
					if(mapa[i][j-1]==0&&mapa[i][j]==2&&mapa[i][j+1]!=4&&mapa[i][j+1]!=5&&mapa[i][j-1]!=4&&mapa[i][j-2]!=5&&mapa[i+1][j]!=5){//moverse1
    				mapa[i][j-1]=2;mapa[i][j]=0;mov++;
    				break;
					}
					
			
						if(mapa[i][j-1]==3&&mapa[i][j]==2&&mapa[i][j-2]==0&&mapa[i+1][j]!=5&&mapa[i-1][j+1]!=5){//caja mv
						mapa[i][j-2]=3;mapa[i][j-1]=2;mapa[i][j]=0;mov++;
						break;
					}
					if(mapa[i][j]==2&&mapa[i][j-1]==3&&mapa[i][j-2]==4&&mapa[i][j-3]==4&&mapa[i+1][j]!=5){//caja punto
						if(a==0){
							mapa[i][j]=0;mapa[i][j-1]=2;mapa[i][j-2]=5;a++;aa++;mov++;
						}
					}
					if(mapa[i][j]==2&&mapa[i][j-1]==5&&mapa[i][j-2]==4){//caja pare
						if(aa==0){
							mapa[i][j]=0;mapa[i][j-1]=2;mapa[i][j-2]=5;mov++;
						}		
					}
					if(mapa[i][j]==2&&mapa[i][j-1]==5&&mapa[i][j-2]==4){//caja pare
						if(aa==0){
							mapa[i][j]=4;mapa[i][j-1]=2;mapa[i][j-2]=5;mov++;
						}		
					}
					if(mapa[i][j]==2&&mapa[i][j+1]==5&&mapa[i][j-1]==0){//caja pare
						if(aa==0){
							mapa[i][j]=0;mapa[i][j-1]=2;mov++;
						}		
					}
					
					if(mapa[i][j]==2&&mapa[i][j-1]==4&&mapa[i][j-2]!=0){
						if(aa==0){
							mapa[i][j-1]=2;mapa[i][j]=4;aa++;mov++;
						}
    
					  }
					
					if(mapa[i][j]==2&&mapa[i][j-1]==4&&mapa[i][j-2]==1&&mapa[i][j-2]!=5){//punto caja roja
						if(aa==0){
							mapa[i][j-1]=2;mapa[i][j]=4;aa++;mov++;
						}
    
					  }
					  if(mapa[i][j]==2&&mapa[i][j-1]==4&&mapa[i][j+1]==5){
					  	mapa[i][j]==4;mapa[i][j-1]==2;mov++;
					  }
					  if(mapa[i][j]==2&&mapa[i][j-1]==4&&mapa[i][j+1]==4){
					  	mapa[i][j]==4;mapa[i][j-1]==2;mov++;
					  }
					  if(mapa[i][j]==2&&mapa[i][j-1]==4&&mapa[i][j+1]==1){
					  	mapa[i][j]==4;mapa[i][j-1]==2;mov++;
					  }
					  if(mapa[i][j]==2&&mapa[i][j-1]==4&&mapa[i][j-2]==0&&mapa[i][j+1]==1){
					  	mapa[i][j]==4;mapa[i][j-1]==2;mov++;
					  }
					  if(mapa[i][j]==2&&mapa[i+1][j]==5&&mapa[i+2][j]==4&&mapa[i+3][j]==4){
					  	mapa[i][j]==4;mapa[i+1][j]==2;mapa[i+2][j]==5;mov++;
					  }
					  
					  
					if(mapa[i][j]==2&&mapa[i][j-1]==4&&mapa[i][j-2]==5){//poder salir de caja 
						mapa[i][j-1]=2;mapa[i][j]=0;mov++;
					}
					if(mapa[i][j]==2&&mapa[i][j-1]==3&&mapa[i][j-2]==4&&mapa[i][j-3]==5){//punto caja roja 2 linea 
						if(aa==0){
							mapa[i][j]=0;mapa[i][j-1]=2;mapa[i][j-2]=5;aa++;mov++;
						}
    
					  }
					if(mapa[i][j]==2&&mapa[i-1][j]==1&&mapa[i][j-1]==4&&mapa[i][j+1]==1){
				    	if(aa==0){
				    		mapa[i][j]=4;mapa[i][j-1]=2;aa++;mov++;
						}
					}
					if(mapa[i][j]==2&&mapa[i][j-1]==4&&mapa[i][j+1]==4){
				    	if(aa==0){
				    		mapa[i][j]=4;mapa[i][j-1]=2;aa++;mov++;
						}
					}
					if(mapa[i][j]==2&&mapa[i][j-1]==4&&mapa[i][j+1]==5){
				    	if(aa==0){
				    		mapa[i][j]=4;mapa[i][j-1]=2;aa++;mov++;
						}
					}
					if(mapa[i][j]==2&&mapa[i][j-2]==1&&mapa[i][j-1]==0){
				    	if(aa==0){
				    		mapa[i][j]=4;mapa[i][j-1]=2;aa++;mov++;
						}
					}
					if(mapa[i][j]==2&&mapa[i+1][j]==4&&mapa[i][j-1]==0){
						if(aa==0){
							mapa[i][j-1]=2;mapa[i][j]=4;aa++;mov++;
							break;
						}
    
					  }
					  if(mapa[i][j]==2&&mapa[i][j-1]==0){
						if(aa==0){
							mapa[i][j-1]=2;mapa[i][j]=0;aa++;mov++;
							break;
						}
    
					  }
					
					
				
					}//a
					a=0;
					if(tec=='d'){
    				if(mapa[i][j+1]==0&&mapa[i][j]==2&&mapa[i][j+1]!=4&&mapa[i-1][j]!=4&&mapa[i][j-1]!=5&&mapa[i+1][j]!=4&&mapa[i][j+1]!=5&&mapa[i][j+1]!=1){//vomient1
    				if(aa==0){

    					mapa[i][j+1]=2;mapa[i][j]=0;aa++;mov++;
    					break;

					}
				}
				
				
					if(mapa[i][j]==2&&mapa[i][j-1]==5&&mapa[i][j+1]==0&&mapa[i][j+1]!=1){
						if(aa==0){
							if(mapa[i-1][j]!=1&&mapa[i][j+1]!=1){
								mapa[i][j]=4;mapa[i][j+1]=2;aa++;mov++;
								break;
							}
							
						}
					}
				    if(mapa[i][j]==2&&mapa[i][j+1]==4&&mapa[i][j-1]==1&&mapa[i-1][j]!=1){
						if(aa==0){
							mapa[i][j+1]=2;mapa[i][j]=4;aa++;mov++;
							break;
						}
    
					  }
					  if(mapa[i][j]==2&&mapa[i][j+1]==4&&mapa[i][j-1]==1&&mapa[i-1][j]==1){
						if(aa==0){
							mapa[i][j+1]=2;mapa[i][j]=0;aa++;mov++;
							break;
						}
    
					  }
					 if(mapa[i][j]==2&&mapa[i][j-1]==4&&mapa[i][j+1]==0){
					 	if(aa==0){
					 		mapa[i][j]=4;mapa[i][j+1]=2;aa++;mov++;
					 		break;
						 }
					 }
					 if(mapa[i][j]==2&&mapa[i][j-1]==4&&mapa[i][j-2]&&mapa[i][j+1]==0&&mapa[i][j+1]!=1&&mapa[i][j+1]!=1){
					 	if(aa==0){
					 		mapa[i][j]=0;mapa[i][j+1]=2;aa++;mov++;
					 		break;
						 }
					 }
					 if(mapa[i][j]==2&&mapa[i][j-1]==5&&mapa[i][j+1]!=0){
					 	if(aa==0){
					 		mapa[i][j]=4;mapa[i][j+1]=2;aa++;mov++;
					 		break;
						 }
					 } 
					 if(mapa[i][j]==2&&mapa[i][j-1]==4&&mapa[i][j-2]==5&&mapa[i][j+1]!=0){
					 	if(aa==0){
					 		mapa[i][j+1]=2;mapa[i][j+1]=0;aa++;mov++;
					 		break;
						 }
					 } 
					 
					 
					 if(mapa[i][j]==2&&mapa[i][j-1]==4&&mapa[i][j+1]==0&&mapa[i][j+1]!=1){
					 	if(aa==0){
					 		mapa[i][j]=0;mapa[i][j+1]=2;aa++;mov++;
					 		break;
						 }
					 } 
					
					if(mapa[i][j+1]==3&&mapa[i][j]==2&&mapa[i][j+2]==0&&mapa[i][j+1]!=1){//caja mv
						if(aa==0){
						mapa[i][j+2]=3;mapa[i][j+1]=2;mapa[i][j]=0;aa++;mov++;
						break;
						}
					}
					if(mapa[i][j]==2&&mapa[i][j+1]==3&&mapa[i][j+2]==4&&mapa[i][j+3]==4&&mapa[i][j+1]!=1){//caja punto
						if(a==0){
							mapa[i][j]=0;mapa[i][j+1]=2;mapa[i][j+2]=5;a++;aa++;mov++;
						}
					}
					if(mapa[i][j]==2&&mapa[i][j+1]==5&&mapa[i][j+2]==4&&mapa[i][j+3]==4){//caja pare
						if(aa==0){
							mapa[i][j]=0;mapa[i][j+1]=2;mapa[i][j+2]=5;mov++;
						}		
					}
					if(mapa[i][j]==2&&mapa[i][j+1]==5&&mapa[i][j+2]==4){//caja pare
						if(aa==0){
							mapa[i][j]=4;mapa[i][j+1]=2;mapa[i][j+2]=5;mov++;
						}		
					}
					
					
					if(mapa[i][j]==2&&mapa[i][j+1]==4&&mapa[i][j+2]==4&&mapa[i][j+3]==1&&mapa[i-1][j]!=1){//caja punto retro
						if(aa==0){
							mapa[i][j+1]=2;mapa[i][j]=0;a++;aa++;mov++;
						}
						
					}
					if(mapa[i][j]==2&&mapa[i][j+1]==4&&mapa[i][j+2]==1){//punto caja roja
						if(aa==0){
							mapa[i][j+1]=2;mapa[i][j]=4;a++;mov++;
						}
    
					  }
					
					if(mapa[i][j]==2&&mapa[i][j+1]==3&&mapa[i][j+2]==4&&mapa[i][j+3]!=5){
						mapa[i][j]=0;mapa[i][j+1]=2;mapa[i][j+2]=5;mov++;
					}
					if(mapa[i][j]==2&&mapa[i][j+1]==4&&mapa[i-1][j]==1&&mapa[i+1][j]==1){
						if(aa==0){
							mapa[i][j]=0;mapa[i][j+1]=2;mov++;a++;aa++;
						}
					}
					if(mapa[i][j]==2&&mapa[i][j+1]==4&&mapa[i][j+2]==5){
						if(aa==0){
							mapa[i][j]=4;mapa[i][j+1]=2;mov++;a++;aa++;
						}
					}
					
					  
					
		       	    }//d
                    a=0;
				}
				
			}
			  for(j=0;j<16;j++){
		       	    	for(i=0;i<12;i++){
		       	    		if(tec=='s'){
    					
    				if(mapa[i+1][j]==0&&mapa[i][j]==2){
    					a++;
    				   mapa[i+1][j]=2;mapa[i][j]=0;mov++;
    				    break;
				     	}
				    if(mapa[i+1][j]==3&&mapa[i][j]==2&&mapa[i+2][j]==0){
						mapa[i+2][j]=3;mapa[i+1][j]=2;mapa[i][j]=0;mov++;
						break;
					}
					
					if(mapa[i][j]==2&&mapa[i+1][j]==4&&mapa[i][j-1]==1&&mapa[i][j+1]==1){
				    	if(aa==0){
				    		mapa[i][j]=0;mapa[i+1][j]=2;aa++;mov++;
						}
					}
					if(mapa[i][j]==2&&mapa[i+1][j]==4&&mapa[i][j-1]!=1&&mapa[i][j+1]!=1){
				    	if(aa==0){
				    		mapa[i][j]=4;mapa[i+1][j]=2;aa++;mov++;
						}
					}
					if(mapa[i][j]==2&&mapa[i+1][j]==4&&mapa[i+2][j]==1){
				    	if(aa==0){
				    		mapa[i][j]=4;mapa[i+1][j]=2;aa++;mov++;
						}
					}
					if(mapa[i][j]==2&&mapa[i+1][j]==3&&mapa[i+2][j]==4){
						if(a==0){
				    		mapa[i+2][j]=5;mapa[i+1][j]=2;mapa[i][j]=0;a++;aa++;mov++;
						}
					}
					if(mapa[i][j]==2&&mapa[i+1][j]==5&&mapa[i+2][j]==4&&mapa[i-1][j]==0&&mapa[i-1][j+1]==0){
						if(aa==0){
				    		mapa[i+2][j]=5;mapa[i+1][j]=2;mapa[i][j]=0;aa++;mov++;
						}
					}
					if(mapa[i][j]==2&&mapa[i+1][j]==5&&mapa[i+2][j]==4){
						if(aa==0){
				    		mapa[i+2][j]=5;mapa[i+1][j]=2;mapa[i][j]=4;aa++;mov++;
						}
					}
					if(mapa[i][j]==2&&mapa[i+1][j]==4&&mapa[i][j-1]==1&&mapa[i-1][j]==1){
						if(aa==0){
							mapa[i+1][j]=2;mapa[i][j]=0;aa++;mov++;
							break;
						}
    
					  }
					  if(mapa[i][j]==2&&mapa[i+1][j]==4&&mapa[i][j+1]==1&&mapa[i-1][j]==1)
					   if(aa==0){
							mapa[i+1][j]=2;mapa[i][j]=4;aa++;mov++;
							break;
						}
					  if(mapa[i][j]==2&&mapa[i+1][j]==4&&mapa[i+2][j]==5){
					  	if(aa==0){
							mapa[i+1][j]=2;mapa[i][j]=4;aa++;mov++;
							break;
						}
					  	
					  }	
				     	
						}//s
						   }
					   }
    				a=0;
    		
		system("cls");
		y=0;
	for(i=0;i<12;i++){
      	for(j=0;j<16;j++){
      		if(mapa[i][j]==3){
      			y++;
			  }
		  }
	  }
	  color(l);
      printf("\t\t\t\t Cajas por almacenar %i \n\n",y);
      printf("\t\t\t\t Movimiento del jugador %i \n\n",mov);
    	imp3(mapa);
    	int contd=0;
  for(i=0;i<12;i++){
  	for(j=0;j<16;j++){
  		if(mapa[i][j]==5){
  			contd++;
		  }
	  }
  }
  int over=0;
  for(i=0;i<12;i++){
  	for(j=0;j<16;j++){
  		
		  if(mapa[i][j]==3){
  			if(mapa[i][j-1]==3){
  				if(mapa[i+1][j-1]==1&&mapa[i+1][j]==1){
  						over=1;
				  }
			  }
			  if(mapa[i][j+1]==3){
  				if(mapa[i+1][j+1]==1&&mapa[i+1][j]==1){
  						over=1;
				  }
			  }
			  if(mapa[i][j-1]==3){
  				if(mapa[i-1][j-1]==1&&mapa[i-1][j]==1){
  						over=1;
				  }
			  }
			  if(mapa[i][j+1]==3){
  				if(mapa[i-1][j+1]==1&&mapa[i-1][j]==1){
  						over=1;
				  }
			  }
			  if(mapa[i-1][j]==3){
  				if(mapa[i-1][j+1]==1&&mapa[i][j+1]==1){
  						over=1;
				  }
			  }
			  if(mapa[i+1][j]==3){
  				if(mapa[i+1][j+1]==1&&mapa[i][j+1]==1){
  						over=1;
				  }
			  }
			  if(mapa[i-1][j]==3){
  				if(mapa[i-1][j-1]==1&&mapa[i][j-1]==1){
  						over=1;
				  }
			  }
			  if(mapa[i+1][j]==3){
  				if(mapa[i+1][j-1]==1&&mapa[i][j-1]==1){
  						over=1;
				  }
			  }
			  if(mapa[i][j+1]==3&&mapa[i-1][j+1]==3&&mapa[i-1][j]==3){
			  	over=1;
			  }
			 
			  if(mapa[i][j+1]==1&&mapa[i-1][j]==1){
		  		over=1;
			  }
			  if(mapa[i][j-1]==1&&mapa[i-1][j]==1){
		  		over=1;
			  }
			  if(mapa[i+1][j]==1&&mapa[i][j-1]==1){
		  		over=1;
			  }
			  if(mapa[i+1][j]==1&&mapa[i][j+1]==1){
		  		over=1;
			  }
		  }
		 
	  }
  }
  if(over==1){
  	
	printf(" GAME OVER ");
  	printf(" presione 'z'");
  }
  if(tec=='z'){
  	k=1;
  }
  if(contd==11){
  	
  	printf("\n VICTORY \n");
  	system("pause");
	  k=1;
  }
}
	}while(k==0);
	system("cls");
	menu();
}

