
#include <stdio.h>
int main(){

	int a;
	
	printf("Masukan banyak T : ");
	scanf("%d",&a);
	int b[a];
	int k=1,l=1;
	int A[100],B[100],C[100];
	int Min[10],Mak[10],tot[10]={0,0,0,0,0,0,0,0,0,0},totMin[10]={0,0,0,0,0,0,0,0,0,0};
	for(int i=1;i<=a;i++){
		printf("Masukan banyak N : ");
		scanf("%d",&b[i]);
		for(int j=1; j<=b[i]; j++){
			
			scanf("%d",&A[k]);
			Mak[k]=A[k];
			Min[k]=A[k];
			scanf("%d",&B[k]);
			if(Mak[k]<B[k]){
				Mak[k] = B[k];
			}
			else{}
			if(Min[k]>B[k]){
				Min[k]=B[k];
			}
			else{}
			scanf("%d",&C[k]);
			if(Mak[k]<C[k]){
				Mak[k] = C[k];
			}
			else{}
			if(Min[k]>C[k]){
				Min[k]=C[k];
			}
			else{}
			tot[l] += Mak[k];
			totMin[l] +=Min[k];
			k++;
			}
		l++;
		
	
	}
	/*for(int i=1; i<k; i++){
		printf("%d\n",Mak[i]);
	}*/
	for(int i=1;i<l;i++){
		printf("%d",tot[i]);
		printf(" %d\n",totMin[i]);
	}

return 0;

}
