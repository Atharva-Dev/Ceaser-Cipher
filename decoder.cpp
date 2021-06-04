#include<bits/stdc++.h>
using namespace std;
string decrypter(string plain, int key)
{
	key*=-1;
	string encoded = "";
	char processed;
	for(auto ele : plain)
	{
		if(ele>='a' && ele<='z')
		{
			processed =('a'+((ele+key-'a')%26));
			processed += processed<'a'?26:0;
		}
		else if(ele>='A' && ele<='Z')
		{
			processed =('A'+((ele+key-'A')%26));
			processed += processed<'A'?26:0;
		}
		else
		{
			processed=ele;
		}
		encoded+=processed;
	}
	return encoded;
}

int main()
{
	string text;
	int key;
	cout<<"\nEnter text to be decrypted: ";
	getline(cin,text);

	cout<<"\nEnter Decryption key: ";
	cin>>key;
	cout<<"\n\nDecrypted text: "<<decrypter(text,key)<<endl;
}
