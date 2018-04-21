#include<vector>
#include<iostream>
using namespace std;
void selectionSort(vector<int> &v);
void insertionSort(vector<int> &v);
void bubbleSort(vector<int> &v);
void printSort(vector<int> &v);
void merge(vector<int> &v,int meio,int inicio,int fim);
void mergeSort(vector<int> &v,int inicio,int tamanho);
int buscabin(vector<int> &v,int key,int inicio, int fim);
void quickSort(vector<int> &v,int inicio,int fim);
int partition(vector<int> &v,int inicio,int fim);
