#ifndef SORT
#define SORT
#include<iostream>
#include<vector>
#include"sort.h"
using namespace std;
void selectionSort(vector<int> &v){
	int auxiliar=0;
	int tamanho=v.size();	
	for(int i=0;i<tamanho;i++){
		for(int j=(i+1);j<tamanho;j++){
			if(v[j]<v[i]){
				auxiliar=v[i];
				v[i]=v[j];
				v[j]=auxiliar;
				
			}
		}
	}
}
void insertionSort(vector<int> &v){
	int tamanho=v.size();
	int k;
	for(int i=1;i<tamanho;i++){
		k=v[i];
		for(int j=(i-1);j>=0;j--){
			if(v[j] >= k){
				v[j+1]=v[j];
			}
			else if (v[j] < k)
			{
				v[j+1]=k;
				break;
			}
			if(j == 0)
			{	
				v[j]=k;
			}			

				
		}	
	}
	
}
void bubbleSort(vector<int> &v){
	int tamanho=v.size();
	int auxiliar;
	for(int i=0;i<tamanho;i++){
		for(int j=i+1;j<(tamanho-i-1);j++){
			if(v[j]<v[i])
				auxiliar=v[i];
				v[i]=v[j];
				v[j]=auxiliar;
		}
	}


}
void merge(vector<int> &v,int meio,int inicio,int fim){
	int i=0,j=0;
	int k;
	vector<int> auxa,auxb;
	for(k= inicio ; k < meio; k++){
		auxa.push_back(v[k]);
	}
	for(k = meio ; k<fim ; k++){
		auxb.push_back(v[k]);	
	}
	k=inicio;	
	while(i<auxa.size()&&j<auxb.size()){
		if(auxa[i]<=auxb[j]){
			v[k]=auxa[i];
			i++;
			k++;
		}
		else if(auxb[j]<=auxa[i]){
			v[k]=auxb[j];		
			j++;
			k++;		
		}
	}
	if(i < auxa.size()){
		for(; i<auxa.size();i++){
			v[k] = auxa[i];
			k++;
		}
	}
	if(j < auxb.size()){
		for(; j < auxb.size(); j++){
			v[k] = auxb[j];
			k++;
		}
	}		
}
void mergeSort(vector<int> &v, int inicio, int fim){
	if(inicio+1 < fim){
		int meio = (inicio+fim)/2;	
		mergeSort(v, inicio, meio);
		mergeSort(v, meio, fim);			
		merge(v, meio, inicio, fim);
	}
}
int buscabin(vector<int> &v, int key, int inicio, int fim){
	int meio=((fim-inicio)/2);
	if(fim<=inicio)
		return -1;	
	if(key==v[meio])
		return meio;	
	else if(key>v[meio])
		return buscabin(v,key,meio+1,fim);
	else if(key<v[meio])
		return buscabin(v,key,inicio,meio-1);

}
void quickSort(vector<int> &v,int inicio, int fim){
	if(inicio<fim){
		int auxiliar;		
		auxiliar=partition(v , inicio,fim);
		quickSort(v,auxiliar+1,fim);
		quickSort(v,inicio,auxiliar-1);
	}

}
int partition(vector<int> &v, int inicio, int fim){
	int pivo=v[fim],i=(inicio-1),j;
	int auxiliar;
	for(j=inicio;j<=(fim-1);j++){
		if(v[j]<=pivo){
			i++;
			auxiliar=v[j];
			v[j]=v[i];
			v[i]=auxiliar;
		}
	}
	auxiliar=v[fim];
	v[fim]=v[i+1];
	v[i+1]=auxiliar;
	return (i+1);
	

}
void printSort(vector<int> &v){
	int tamanho=v.size();
	for(int i=0;i<tamanho;i++){
		cout<<v[i]<<" ";
	}
}
#endif
