#include <bits/stdc++.h>
using namespace std;
void encryption(string s){
	int j[30]={21,35,33,23,13,24,25,26,18,27,28,29,37,36,19,10,11,14,22,15,17,14,12,32,16,31};
	int a; 
	for(int i=0;i<s.size();i++){
		a=s[i]-'a';
		cout<<j[a];
	}
	cout<<" ";
}
void decrypt(string s){
	char first[11]={'p','q','w','e','r','t','y','u','i','o'};
	char second[11]={'0','a','s','d','f','g','h','j','k','l'};
	char third[11]={'0','z','x','c','v','b','n','m'};
	int n,m;
	for(int i=0;i<s.size();i+=2){
		n=s[i]-'0';
		m=s[i+1]-'0';
		if(n==1){
			cout<<first[m];
		}else if(n==2){
			cout<<second[m];
		}else if(n==3){
			cout<<third[m];
		}
	} 
	cout<<" ";
}
int main(){
	string s;
	while(true){
		cin>>s;
		if(isalpha(s[0])){
			decrypt(s);
		}else{
			decrypt(s);
		}
	}
	return 0;
}
