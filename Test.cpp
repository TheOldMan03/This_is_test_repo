#include <iostream>
#include <string>

using namespace std;

int main(){
	
	cout<<endl;
	string s;
	cout<<"Enter a string: ";//Hello
	getline(cin,s);
	cout<<endl;
	
	int i,j,k,p;
	
	for(i=0;i<s.length();i++){
		
		for(p=0;p<((s.length())-i);p++)
			cout<<" ";
		
		for(j=0;j<=i;j++)
			cout<<s[j];
		
		for(k=j-2;k>=0;k--)
			cout<<s[k];
		
		cout<<endl;
	}
}