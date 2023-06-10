#include <iostream>
#include <climits>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cctype>
#include <stdio.h>
#include <queue>
#include <set>
#include <stack>
#include <vector>
using namespace std;
void jia(string s){
	int j[30]={21,35,33,23,13,24,25,26,18,27,28,29,37,36,19,10,11,14,22,15,17,14,12,32,16,31};
	int a; 
	for(int i=0;i<s.size();i++){
		a=s[i]-'a';
		cout<<j[a];
	}
	cout<<" ";
}
void jie(string s){
	char f[11]={'p','q','w','e','r','t','y','u','i','o'};
	char se[11]={'0','a','s','d','f','g','h','j','k','l'};
	char t[11]={'0','z','x','c','v','b','n','m'};
	int n,m;
	for(int i=0;i<s.size();i+=2){
		n=s[i]-'0';
		m=s[i+1]-'0';
		if(n==1){
			cout<<f[m];
		}else if(n==2){
			cout<<se[m];
		}else if(n==3){
			cout<<t[m];
		}
	} 
	cout<<" ";
}
int main(){
	string s;
	while(true){
		cin>>s;
		if(isalpha(s[0])){
			jia(s);
		}else{
			jie(s);
		}
	}
	return 0;
}