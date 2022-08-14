#include<iostream>
#include<string>
#include<stdlib.h>  //used for clear screen function 
#include<windows.h>  //used for time delay function
using namespace std;
int size;
int DATA;
int tryme=0;
struct YOU
{
	int ID;
	string NAME;
	string DEP;
	string ADD;
    long long int CELL;
	int SALARY;
}ALL[100];

void star(){
	for(int i=0; i<120;i++){
		cout<<"^";
	}
	cout<<"\n";
}

bool login(){
	system("cls");
	bool flag=true;
	string username;
	string password;
	string user="MOEEZ RAJPOOT";
	string pass="Hello world";
	system("color 03");
	cout<<"\n\n";
	star();
	cout<<"\t\t\t\t\t\t EMPLOYEE MANGEMENT SYSTEM \t\t\t\t\t\t ";
	star();
	
	   if(tryme<3){
	     cout<<"\n\n\n\n\n\t\t\t\t              ENTER USERNAME :";
		 getline(cin,username);
	    if(username==user)
      	{
		cout<<"\n\t\t\t\t\t      ENTER PASSWORD :";getline(cin,password);
		star();
		if(password==pass)
		{
			flag=false;
			cout<<"\n\n\n\t\t\t\t\t\t\t ACCESS GRANTED ";
			cout<<"\n\n";
			star();
			Sleep(900);
			return flag;
			}
		else{
			tryme++;
			cout<<"\t\t\t\t\t\tINVALID PASSWORD !!";
		    Sleep(1000);
			flag=true;
			flag=login();
			return flag;
			}
		}
	else{
		star();
	    cout<<"\n\t\t\t\t\t\tINVALID USERNAME !!";
		tryme++;
		Sleep(1000);
		flag=true;
	    flag=login();
	    return flag;
	}
}
flag=true;
return flag;
}

int errorinput(){
	int choice;
		while(true) 
           {
                cout<<"ENTER PLEASE ";
				cin>>choice;
                if( cin.good()) {
                cin.ignore(10,'\n');
                break;
            }
                cin.clear();
                cout<< "\nINCORRECT INPUT !!\n";
                cin.ignore(10,'\n');
            }
            return choice;
}
int error_free_EMP_ID(){
	int empid;
	while(true) 
           {
                cout<<"\nENTER EMP ID NUMBER   :";
				cin>>empid;
                if( cin.good()) {
                cin.ignore(10,'\n');
                break;
            }
                cin.clear();
                cout<< "INCORRECT INPUT !!\n";
                cin.ignore(10,'\n');
            }
            return empid;
}
long long int error_free_EMP_CELL(){
	long long int empcell;
	while(true) 
           {
                cout<<"ENTER EMP CELL NUMBER :";
				cin>>empcell;
                if( cin.good()) {
                cin.ignore(20,'\n');
                break;
            }
                cin.clear();
                cout<< "\nINCORRECT INPUT !!\n";
                cin.ignore(20,'\n');
            }
            return empcell;
}




int inputdata(int ID, string NAME, string DEP, string ADD, long long int CELL, int SALARY){
	if(DATA==size){
		cout<<"\nSORRY YOU HAVE MET YOUR REQUIRED LIMIT "<<endl;
	}
	else{
		ALL[DATA].ID=ID;
		ALL[DATA].NAME=NAME;
		ALL[DATA].DEP=DEP;
		ALL[DATA].ADD=ADD;
		ALL[DATA].CELL=CELL;
		ALL[DATA].SALARY=SALARY;
		DATA++;
	}
}
int IDSEARCH(int n){
	if(DATA==0){
		return 0;
	}
	else{
		for(int i =0;i<DATA;i++)
		{
			if(ALL[i].ID==n)
			{
			return ALL[i].ID;
			}	
		}
}
}

long long int CELLSEARCH(long long int n){
	
	if(DATA==0){
		return 0;
	}
	else{
		for(int i =0;i<DATA;i++)
		{
			if(ALL[i].CELL==n)
			{
			return ALL[i].CELL;
			}	
		}
}
}


void displaydata(){
	system("cls");
	system("color 0F");
	if(DATA==0){
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t     SORRY NO DATA IN YOUR DATABASE \n\n\n\n\n"<<endl;
	}
	else{
		cout<<"\n\n";
		star();
		cout<<"\t\t\t\t\t\t\t OUTPUT \t\t\t\t\t\t"<<endl;
		star();
		for(int i=0; i<DATA ;++i)
		{
			cout<<"\t\t\t\t\t\t  EMPLOYEE ID :"<<ALL[i].ID<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE NAME :"<<ALL[i].NAME<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE DEPARTMENT :"<<ALL[i].DEP<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE ADDRESS :"<<ALL[i].ADD<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE CELL NO :"<<ALL[i].CELL<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE SALARY :"<<ALL[i].SALARY<<endl;
		star();
		}
	}
}
void searchid(int n){
	system("cls");
	if(DATA==0)
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t     SORRY NO DATA IN YOUR DATABASE \n\n\n\n\n"<<endl;
	}
	else
	{
	
		bool flag = true;
		for(int i =0;i<DATA;i++)
		{
			if(ALL[i].ID==n)
			{
				star();
				cout<<"\t\t\t\t\t\t\t RECORD \t\t\t\t\t\t"<<endl;
				star();
			cout<<"\t\t\t\t\t\t  EMPLOYEE ID :"<<ALL[i].ID<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE NAME :"<<ALL[i].NAME<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE DEPARTMENT :"<<ALL[i].DEP<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE ADDRESS :"<<ALL[i].ADD<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE CELL NO :"<<ALL[i].CELL<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE SALARY :"<<ALL[i].SALARY<<endl;
			star();
				flag = false;
				break;
			}	
		}
		if(flag)
		{
			cout<<"\nSORRY NO DATA FOUND AGAINST THE GIVEN ID \n"<<endl;
			
		}		
}
}

void searchname(string n){
	system("cls");
	if(DATA==0)
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t     SORRY NO DATA IN YOUR DATABASE \n\n\n\n\n"<<endl;
	}
	else
	{
	
		bool flag = true;
		for(int i =0;i<DATA;i++)
		{
			if(ALL[i].NAME==n)
			{
				star();
				cout<<"\t\t\t\t\t\t\t RECORD \t\t\t\t\t\t"<<endl;
				star();
			cout<<"\t\t\t\t\t\t  EMPLOYEE ID :"<<ALL[i].ID<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE NAME :"<<ALL[i].NAME<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE DEPARTMENT :"<<ALL[i].DEP<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE ADDRESS :"<<ALL[i].ADD<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE CELL NO :"<<ALL[i].CELL<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE SALARY :"<<ALL[i].SALARY<<endl;
				flag = false;
				break;
			}	
		}
		if(flag)
		{
			cout<<"\nSORRY NO DATA FOUND AGAINST THE GIVEN NAME \n"<<endl;
		}		
}
}
void searchdep(string n){
	system("cls");
	if(DATA==0)
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t     SORRY NO DATA IN YOUR DATABASE \n\n\n\n\n"<<endl;
	}
	else
	{
	
		bool flag = true;
		for(int i =0;i<DATA;i++)
		{
			if(ALL[i].DEP==n)
			{
				star();
				cout<<"\t\t\t\t\t\t\t RECORD \t\t\t\t\t\t"<<endl;
				star();
			cout<<"\t\t\t\t\t\t  EMPLOYEE ID :"<<ALL[i].ID<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE NAME :"<<ALL[i].NAME<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE DEPARTMENT :"<<ALL[i].DEP<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE ADDRESS :"<<ALL[i].ADD<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE CELL NO :"<<ALL[i].CELL<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE SALARY :"<<ALL[i].SALARY<<endl;
			star();
				flag = false;
				break;
			}	
		}
		if(flag)
		{
			cout<<"\nSORRY NO DATA FOUND AGAINST THE GIVEN DEPARTMENT \n"<<endl;
		}		
}
}
void searchcell(long long int n){
	system("cls");
	if(DATA==0)
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t     SORRY NO DATA IN YOUR DATABASE \n\n\n\n\n"<<endl;
	}
	else
	{
	
		bool flag = true;
		for(int i =0;i<DATA;i++)
		{
			if(ALL[i].CELL==n)
			{
				star();
				cout<<"\t\t\t\t\t\t\t RECORD \t\t\t\t\t\t"<<endl;
				star();
			cout<<"\t\t\t\t\t\t  EMPLOYEE ID :"<<ALL[i].ID<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE NAME :"<<ALL[i].NAME<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE DEPARTMENT :"<<ALL[i].DEP<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE ADDRESS :"<<ALL[i].ADD<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE CELL NO :"<<ALL[i].CELL<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE SALARY :"<<ALL[i].SALARY<<endl;
			star();
				flag = false;
				break;
			}	
		}
		if(flag)
		{
			cout<<"\nSORRY NO DATA FOUND AGAINST THE GIVEN CELL NO \n"<<endl;
		}		
}
	
}
void maximumsalary()
{
	system("cls");
	if(DATA==0)
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t     SORRY NO DATA IN YOUR DATABASE \n\n\n\n\n"<<endl;
	}
	else
	{
		int maxi=0,index;
	   for(int i=0;i<DATA;i++){
	   	if(ALL[i].SALARY>maxi){
	   		maxi=ALL[i].SALARY;
	        index=i;
		   }
	   }
	   cout<<"\n\n";
	        star(); 
	        cout<<"\t\t\t\t\t\t"<<ALL[index].NAME<<" HAVE MAXIMUM SALARY OF "<<ALL[index].SALARY<<endl<<endl;
	        star();
	        cout<<"\t\t\t\t\t\t\t RECORD \t\t\t\t\t\t"<<endl;
	        star();
	   	    cout<<"\t\t\t\t\t\t  EMPLOYEE ID :"<<ALL[index].ID<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE DEPARTMENT :"<<ALL[index].DEP<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE ADDRESS :"<<ALL[index].ADD<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE CELL NO :"<<ALL[index].CELL<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE SALARY :"<<ALL[index].SALARY<<endl;
	   
		
	}
	
}
void Usermaxrange(int n, int x){
	system("cls");
	system("color 0F");
	star();
	        cout<<"\t\t\t\t\t\t\t RECORD \t\t\t\t\t\t"<<endl;
	        star();
bool flag=true;
    for(int i=0;i<DATA;i++)	{
    	if(ALL[i].SALARY>=n&&ALL[i].SALARY<=x){
    		cout<<"\t\t\t\t\t\t  EMPLOYEE ID :"<<ALL[i].ID<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE NAME :"<<ALL[i].NAME<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE DEPARTMENT :"<<ALL[i].DEP<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE ADDRESS :"<<ALL[i].ADD<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE CELL NO :"<<ALL[i].CELL<<endl;
			cout<<"\t\t\t\t\t\t  EMPLOYEE SALARY :"<<ALL[i].SALARY<<endl;
			flag=false;
    		star();
		}
	}
	if(flag){
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t     SORRY NO DATA FOUND OF GIVEN RANGE \n\n\n\n\n";
	}
	
}
void modifydata()
{
	system("cls");
	system("color 0B");
	int n,index;
	bool flag=false;
	cout<<"\n\n";
	star();
	cout<<"\t\t\t\t\t\t   MODIFICATION MENU \t\t\t\t\t\t"<<endl;
	star();
	n=error_free_EMP_ID();
	if(DATA==0){
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t     SORRY NO DATA IN YOUR DATABASE \n\n\n\n\n"<<endl;
	}
	else{
		for(int i=0;i<DATA;i++){
			if(ALL[i].ID==n){
				index=i;
				flag=true;
				break;
			}
		}
		if(flag){
			system("cls");
			cout<<"\n\n\n";
			cout<<"ENTER NEW EMPLOYEE ID         :";
			cin>>ALL[index].ID;
			cin.ignore();
			cout<<"ENTER NEW EMPLOYEE NAME       :";
			getline(cin,ALL[index].NAME);
			cout<<"ENTER NEW EMPLOYEE DEPARTMENT :";
			getline(cin,ALL[index].DEP);
			cout<<"ENTER NEW EMPLOYEE ADDRESS    :";
			getline(cin,ALL[index].ADD);
			cout<<"ENTER NEW EMPLOYEE CELL NO    :";
			cin>>ALL[index].CELL;
			cin.ignore();
			cout<<"ENTER NEW EMPLOYEE SALARY     :";
			cin>>ALL[index].SALARY;
			cin.ignore();
			cout<<"\n\nRECORD HAS BEEN UPDATED"<<".";Sleep(900);cout<<".";Sleep(900);cout<<".";Sleep(900);cout<<".";Sleep(900);cout<<".";Sleep(900);cout<<".";
		}
		else{
			cout<<"\nSORRY NO GIVEN ID FOUND\n"<<endl;
		}
		
	}
	
	
	
}
void deletedata(){
	int n,index;
	bool flag=false;
	system("cls");
	system("color 04");
	star();
	        cout<<"\t\t\t\t\t\t     DELETION MENU \t\t\t\t\t\t"<<endl;
	        star();
	cout<<"ENTER THE ID NUMBER OF EMPLOYEE "<<endl;
	cin>>n;
	if(DATA==0){
		cout<<"SORRY DATABASE IS EMPTY "<<endl;
	}
	else{
		for(int i=0;i<DATA;i++){
			if(ALL[i].ID==n)
			{
				index=i;
				flag=true;
				break;
			}
		//	break;
		}
		if(flag){
		    ALL[index].NAME=-1;
	    	ALL[index].DEP=-1;
	    	ALL[index].ADD=-1;
	    	ALL[index].CELL=0;
    		ALL[index].SALARY=0;
			
			cout<<"\n\nRECORD HAS BEEN DELETED...."<<endl;
		}
		else{
			cout<<"\nSORRY NO GIVEN ID FOUND\n"<<endl;
		}
}
}
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ MAIN FUCTION ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
int main()
{
	if(login())
	{
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n\t\t\t    YOUR DATABASE HAS BEEN LOCKED PARMANENTLY CONTACT YOUR ADMINISTRATOR! \n\n\n\n";
		}
	else{
		
		system("cls");
	
	char choice;
	do{
		system("cls");
		system("color 0A");
	cout<<"\n\n";
	star();
	cout<<"\t\t\t\t\t  WELCOME TO EMPLOYEE MANGEMENT SYSTEM\t\t\t\t\t  "<<endl;
	star();
		cout<<"\t\t\t\t\t    ENTER YOUR CHOICE NUMBER:"<<endl;
		cout<<"\t\t\t\t\t    A) FOR ENTERING THE RECORD. "<<endl;
		cout<<"\t\t\t\t\t    B) FOR DISPLAYING THE RECORD. "<<endl;
		cout<<"\t\t\t\t\t    C) FOR SEARCHING SPECIFIC RECORD. "<<endl;
		cout<<"\t\t\t\t\t    D) FOR DISPLAYING MAXIMUM SALARY & ITS DETAILS. "<<endl;
		cout<<"\t\t\t\t\t    E) FOR MODIFYING AND DELEING RECORD. "<<endl;
		cout<<"\t\t\t\t\t    F) FOR EXITING THE PROGRAM. "<<endl;
		//cout<<endl;
		switch(choice){
			case 'a':
				{
				do{
				cout<<"\t\t\t\t   HOW MUCH NO OF EMPLOYEE DATA YOU WANT TO ENTER :"<<endl;
				cout<<"\t\t\t\t                  MAX NUMBER IS 100 "<<endl;
				size=errorinput();
				cout<<endl;
			}
			while(size>100);
			    cout<<endl;
				string EMP_NAME, EMP_DEP, EMP_ADD;
				int EMP_ID, EMP_SALARY,no=0;
			    long long int EMP_CELL; 
			    system("cls");
			    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t IF YOU ARE TRYING TO ENTER DATA AGAIN IT WONT BE SAVE ";
			    Sleep(2500);
				for(int i=0;i<size;i++){
				system("cls");
				system("color 0f");
				cout<<"\n\n";
				star();
				cout<<"\t\t\t\t\t\tRECORD ENTERY MENU\t\t\t\t\t\t\t ";
				star();
				cout<<"\n\t\t\t\t\t    NO OF EMPLOYEE DATA ENTER :"<<no<<endl;
				cout<<"\n\t\t\t\t\t    NO OF EMPLOYEE CAPACITY   :"<<size;
//**********************************************************************************************			
		
				EMP_ID=error_free_EMP_ID();
                if(EMP_ID==IDSEARCH(EMP_ID)){
					do{
                		cout<<"\nID ALREADY EXISTS "<<endl;
                		EMP_ID=error_free_EMP_ID();
                	//	cin.ignore();
						}					
                	while(EMP_ID==IDSEARCH(EMP_ID));
				}
//***********************************************************************************************			
				cout<<"ENTER EMP NAME        :";
			    getline(cin,EMP_NAME);
//***********************************************************************************************		    
				cout<<"ENTER EMP DEPARTMENT  :";
				getline(cin,EMP_DEP);
//***********************************************************************************************			
				cout<<"ENTER EMP ADDRESS     :";
				getline(cin,EMP_ADD);
//*********************************************************************************************				
				EMP_CELL=error_free_EMP_CELL();
			    if(EMP_CELL==CELLSEARCH(EMP_CELL)){
					do{
                		cout<<"\nNUMBER ALREADY EXISTS "<<endl;
                		EMP_CELL=error_free_EMP_CELL();
                		//cin.ignore();
						}					
                	while(EMP_CELL==CELLSEARCH(EMP_CELL));
				}
//**********************************************************************************************			
					while(true) 
           {
                cout<<"ENTER EMP SALARY      :";
				cin>>EMP_SALARY;
                if( cin.good()) {
                cin.ignore(10,'\n');
                break;
            }
                cin.clear();
                cout<< "INCORRECT INPUT !!\n";
                cin.ignore(10,'\n');
			}
//*********************************************************************************************		
			    no++;
			inputdata(EMP_ID,EMP_NAME,EMP_DEP,EMP_ADD,EMP_CELL,EMP_SALARY);
				
			}
			
		    	cout<<"\n\n\t\t\t\t\tYOUR NUMBER OF EMPLOYE RANGE IS FULL \n\n"<<endl;
			    Sleep(1500);
				break;
		}
		case 2:{
		    	displaydata();
		    	system("pause"); //used to stop until any key is pressed
		    	break;
		}
		case 3:{
		    	system("cls");
			    system("color 0B");
			    int choice;
	    		cout<<"\n\n";
		        star();
	        	cout<<"\t\t\t\t\t\t   SEARCHING MENU  \t\t\t\t\t\t"<<endl;
	        	star();
		    	cout<<"\t\t\t\t\t     ENTER YOUR CHOICE NUMBER:"<<endl;
		    	cout<<"\t\t\t\t\t     1) FOR SEARCH BY ID. "<<endl;
		    	cout<<"\t\t\t\t\t     2) FOR SEARCH BY NAME. "<<endl;
		    	cout<<"\t\t\t\t\t     3) FOR SEARCH BY DEPARTMENT. "<<endl;
		    	cout<<"\t\t\t\t\t     4) FOR SEARCH BY CELL NO. "<<endl;
		    	cout<<"\t\t\t\t\t     5) FOR MAIN MENU."<<endl;
		    	cout<<"\n\n";
		        choice=errorinput();
			switch(choice)
			{
				case 1:{
				    	int ID;
				    	cout<<"ENTER THE ID OF EMPLOYEE TO SEARCH :";
					    cin>>ID;
					    searchid(ID);
					    system("pause");
					    break;
				}
				case 2:{
					    string NAME;
					    cout<<"ENTER THE NAME OF EMPLOYEE TO SEARCH :";
					    cin>>NAME;
					    searchname(NAME );
					    system("pause");
					    break;
				}
				case 3:{
				    	string DEPART;
			    		cout<<"ENTER THE DEOARTMENT OF EMPLOYEE TO SEARCH :";
			    		cin>>DEPART;
			    		searchdep(DEPART);
			    		system("pause");
			    		break;
				}
				case 4:{
				        long long int CELL;
					    cout<<"ENTER THE CELL NO OF EMPLOYEE TO SEARCH :";
					    cin>>CELL;
					    searchcell(CELL);
					    system("pause");
				    	break;
				}
				case 5:{
				    	break;
				}
				default: {
					cout<<"\n\n\t\t\t INAVLID INPUT\n";
					break;
				}
				        break;
			}
			
			            break; //case 3 break
		}
		case 4:{
		    	system("cls");
		    	system("color 0B");
		    	int maxi;
		    	cout<<"\n\n";
		    	star();
	            cout<<"\t\t\t\t\t\t       SALARY MENU \t\t\t\t\t\t"<<endl;
		    	star();
		    	cout<<"\t\t\t\t\t\t   ENTER YOUR CHOICE :"<<endl;
		    	cout<<"\t\t\t\t  1) FOR DISPLAYING MAXIMUM SALARY AND ITS RECORD. "<<endl;
		    	cout<<"\t\t\t\t  2) FOR DISPLAYING USER DEFINED RANGE SALARIES AND ITS RECORD. "<<endl;
		    	cout<<"\t\t\t\t  3) FOR MAIN MENU. "<<endl;
		    	star();
				maxi=errorinput();
		switch(maxi)
	             	{
				case 1:{
					   maximumsalary();
				   	   system("pause");
					   break;
				}
				case 2:{
				   	   int start,end;
					   system("cls");
					   cout<<"\n\n";
					   star();
					   cout<<"\t\t\t\t\t\t  SALARY RANGE MENU \t\t\t\t\t\t"<<endl;
					   cout<<"ENTER STARTING RANGE VALUE :";
					   cin>>start;
					   cout<<"\nENTER ENDING RANGE VALUE :";
					   cin>>end;
					   Usermaxrange(start,end);
					   system("pause");
					   break;
				}
				case 3:{
					   break;
				}
				default: {
					cout<<"\n\n\t\t\t INAVLID INPUT\n";
					break;
				}
			}
			           break; //4th case break;
		}
		case 5:{
			    int n;
			    system("cls");
			    system("color 0F");
			    cout<<"\n\n";
			    star();
			    cout<<"\t\t\t\t\t\t DATA MODIFICATION MENU \t\t\t\t\t\t"<<endl;
			    star();
			    cout<<"\t\t\t\t\t      ENTER YOUR CHOICE NUMBER:"<<endl;
			    cout<<"\t\t\t\t\t   1) FOR MODIFYING RECORD OF EMPLOYEE. "<<endl;
			    cout<<"\t\t\t\t\t   2) FOR DELETING RECORD OF EMPLOYEE. "<<endl;
			    cout<<"\t\t\t\t\t   3) FOR MAIN MENU. "<<endl;
			    star();
			    n=errorinput();
			switch(n)
			{
				case 1:{
					
					    modifydata();
					    int x;
					    cout<<"\n\n1) FOR DISPLAYING RECORD. "<<endl;
					    cout<<"2) FOR MAIN MAIN. \n\n"<<endl;
					    star();
					    cout<<"ENTER PLEASE ";cin>>x;
					if(x==1){
						displaydata();
			            system("pause");
					}
					else{
						break;
					}
					    break;
				}
				case 2:{
					    deletedata();
					    int update;
					    cout<<"\nENTER 1) FOR UPDATING DELETED ID RECORD. ";
					    cout<<"\nENTER 2) FOR MAIN MENU. \n";
					    update=errorinput();
					if(update==1)
					{
						modifydata();
					}
					else{
						break;
					}
					    break;
				}
				case 3:{
					
					    break;
				}
				default: {
					cout<<"\n\n\t\t\t INAVLID INPUT\n";
					break;
				}
		}
			}
			case 6:{
				   break;
			}
			default:{
				
			 cout<<"\n\n\t\t\t INAVLID INPUT\n";
				break;
			}
		        star();
		}
	}
		while(choice!=6);
		system("cls");
		system("color 0C");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n";
		star();
			cout<<"\t\t\t\t\t\tTHANK YOU FOR USING OUR PRODUCT \t\t\t\t\t\t"<<endl;
			star();
			Sleep(2500);
			exit;
	}
}
