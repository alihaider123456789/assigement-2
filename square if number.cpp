/*
Name:
					Ali Haider
Department:
   					BS-Data Science
Session:
					2022 - 2026
Subject:
					Programming Foundament

Semester:
						1st
*/
#include<iostream>
using namespace std;
int main(){
	     
		 cout<<"\t\t\t\t\t          FOR loop              \n";
		 cout<<"\t\t\t\t\t--------------------------------\n";
	     cout<<"\t\t\t\t\tnumber"<<"\t"<<"square"<<endl;
	for(int no=1;no<=10;no++){
		if(no==5)
		{
		continue;
	}
	else
		cout<<"\t\t\t\t\t"<<no<<"\t"<<no*no<<endl;
	}
        
		 cout<<"\t\t\t\t\t          while loop           \n";
		 cout<<"\t\t\t\t\t--------------------------------\n";
	     cout<<"\t\t\t\t\tnumber"<<"\t"<<"square"<<endl;
	int no=1;
	while(no<=10){
		if(no==5){
	no++;
	continue;	
			}
			else{
			cout<<"\t\t\t\t\t"<<no<<"\t"<<no*no<<endl;
			no++;
			}
	}
	
	    
		 cout<<"\t\t\t\t\t         do while loop          \n";
		 cout<<"\t\t\t\t\t--------------------------------\n";
	     cout<<"\t\t\t\t\tnumber"<<"\t"<<"square"<<endl;
	no=1;
	do{
	
		if(no==5){
		no++;
	continue;	
			}
			else{
			cout<<"\t\t\t\t\t"<<no<<"\t"<<no*no<<endl;
			no++;
			}
	}while(no<=10);
}