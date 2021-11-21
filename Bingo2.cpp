#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){
	srand((unsigned)time(NULL));
	int a,b[15],c;
	inicio:
	cout<<"Bem- Vindo ao jogo do bingo"<<endl;
     cout<<"1-para sortear os numeros  "<<"                        "<<"2-para sair";
     cout<<"\nOpcao: ";
     cin>>c;
	 if(c==1){
	 	cout<<"\nATENCAO PARA O SORTEIO(Pressione Enter para sortear os numeros)\n\n"<<endl;
	if(a!=100){
	for(int i=0;i<15;i++){
			a=getch();
		b[i]=rand()%100;
		cout<<b[i]<<endl;
		getch();
	}
	system("cls");
	goto inicio;
}else{
	return 0;
}
}else{
	return 0;
}
}
