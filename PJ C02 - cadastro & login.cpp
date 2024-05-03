#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	char email[50], emaillogin[50];
	char senha[50], senhalogin[50];
	char senha1[50];
	int aux = 0;
	int result, resultlogin, resultpass;
	
	while(1)
	{
		
		while(aux == 0)
		{
			
			cin.getline(email,50);
			cin.getline(senha,50);
			cin.getline(senha1,50);
			
			strcmp(senha,senha1);
			result = strcmp(senha,senha1);
		
			if (result != 0)
			{
				cout << "As senhas nao correspondem." << endl;
			}
			
			else if (result == 0)
			{
				aux += 1;
			}
			
		}	
		
		cout << "login" << endl;
		cin.getline(emaillogin,50);
		strcmp(email, emaillogin);
		resultlogin = strcmp(email, emaillogin);
		
		if (resultlogin == 0)
		{
			cout << "senha" << endl;	
		}
		
		cin.getline(senhalogin,50);
		strcmp(senha, senhalogin);
		resultpass = strcmp(senha, senhalogin);
		
		if (resultpass == 0)
		{
			cout << "login validado" << endl;
			return 0;
		}
			
		
			
	}
	
	return 0;
}