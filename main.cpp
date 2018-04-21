#include<iostream>
#include<vector>
#include"sort.h"
using namespace std;
int main(){
	vector<int> v={51,12,3,74,53,84,2,19,21,17,64,94,75};
	//mergeSort(v,0,v.size());
	//printSort(v);
	quickSort(v,0,(v.size()-1));
	printSort(v);
	cout<<endl;
	return 0;
}
