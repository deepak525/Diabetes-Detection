#include<iostream>
#include<string.h>
#include<string>
#include<conio.h>
#include<windows.h>
#include<dos.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
#include<fstream>
#include<ctype.h>
#include<process.h>
#include<iomanip>
using namespace std;

class Diabities
{
	public:

		void login();
		void change();
}cha;
/*class passchange:public Diabities
{
	void friend change();
}
 */
class patient
{
	public:
        char pname[12];
       	char age[5];
       	char sex[7];
       	char category[5];
       	char city[15];
       	char mobile[15];
       	char test[10];
       	char bloodgroup[5];
		void pregistration();
		void pdetail();
		void pserch();
		void pdelete();
	
}obj;



class doctor
{
   public:
   	char name[20];
    	char time[10];
    	char contect[20];
    	char room[10];
    	int id;
    	char speciality[20];
    void dregistration();
	void dserch();	
}obj1;

class logout
{
	public:
		void out();
}log;
int id1=0;;
class Detection
{
	public:
		char thirst;
		char hunger;
		char furine;
		char headche;
		char fatigue;
		char vision;
		float sugarlevel;
		float blpressurenum;
		float blpressuredem ;
		void analyse_symptoms();
	
}det;


//-------------------------------------------------------------------LOGIN SCREEN AND FORGOT PASSWORD-----------------------------------------------------------------------
void Diabities::login()
{
//	ofstream file;
   // file.open("password.txt");
	char c;
	char so[100],mo[100];
	int i,f,p,length,j,s,y,x,n,z;
	string password1;
	char password[100],username[100],username1[100],user1[100],pass1[20]="helloguy",user[20]="Deepak";
	
	f:cout<<"\t\t###################################################################################";
	cout<<"\t\t\t*********************** @ CODMAS - Centre for Obesity, Diabetes & Minimal Access Surgery @ ***********************";
	printf("\n\t\t###################################################################################");
//	textcolor(yellow);
	cout<<"\n\n\t\t\t \t      ********* W E L C O M E ********* ";
	cout<<"\n\n\t\t\t\t\tUSER NAME = ";
	cin>>username;
	cout<<"\t\t\t\t\tpassword = ";
	for(i=0;i<100;i++)
	{
		c=getch();
		if(c==13)
		{
			break;
		}
		if(c==8)
		{
		
		}
		password[i]=c;
		c='*';
		cout<<c;
	}
	password[i]='\0';
//	file<<username;
//	file<<"  ";
//	file<<password;
//	file.close();
	if(strcmp(username,user)==0 && strcmp(password,pass1)==0)
	{
		cout<<"\a\n\n\t\t\t\t\t** login successfully **";
     	//	sound(2000);
        //delay(120);
		sleep(1);
		cout<<"\n\n\t\t\t\t\tLogin in 1 sec.......";
		sleep(1);
		cout<<"\n\n\t\t\t\t\tLogin in ............";
		sleep(2);
		system("cls");
	}
	else
	{
		cout<<"\n\n\t\t\t\t\tinvalid user name or password";
	n:	cout<<"\n\t\t\t\t\tTRY  AGAIN / Forgot Password /exit(1/2/3): ";
		cin>>z;
		if(z==1)
		{
			system("cls");
			goto f;
		}
		if(z==2)
		{
			sleep(2);
			system("cls");
		  x: s: cout<<"\n\n\t\t\t\t\tENTER YOUR USER NAME = ";
	    cin>>username1;
	    if(strcmp(username1,user)==0)
	    {
	    	cout<<"\n\t\t\t\t\tSEQURITY QUESTIONS: ";
	    	cout<<"\n\n\t\t\t\t\t1.Enter your mobile number: ";
	    	cin>>mo;
	    	cout<<"\n\t\t\t\t\t2.Enter your favorite food(case sensitive): ";
	    	cin>>so;
	    	if(strcmp(mo,"7508518182")==0 && strcmp(so,"indian")==0)
	    	{
	    		ifstream infile;
	    		infile.open("password.txt");
	    		infile>>user1;
	    		infile>>password1;
	    		cout<<"\n\n\t\t\t\t\tyour Password is : "<<password1;
	    		cout<<"\n\n\t\t\t\t\tTry again with this password";
	    		sleep(3);
	    		system("cls");
	    		goto f;
			}
			else{
			cout<<"\n\t\t\t\t\tSomething Went Wrong";
			cout<<"\n\t\t\t\t\tTry again/Exit(1/0): ";
			cin>>y;
			if(y==1)
			{
				sleep(2);
				system("cls");
				goto x;
			}
			else
			exit(0);
		}
		}
		else
			cout<<"\n\n\t\t\t\t\tUser Name doesn't exist!!! ";
			cout<<"\n\t\t\t\t\t Try Again";
			sleep(2);
			system("cls");
			goto s;
	 
		}
		if(z==3)
		{
			exit(0);
		}
		else
		cout<<"\n\n\t\t\t\t\t Please Choose a correct option";
		goto n;
		
}

}

//--------------------------------------------------------------------------------MAIN---------------------------------------------------------

main()
{
	int choise,p;
	char c;
	    Diabities lo;
     	lo.login();
	//registration obj;
	cout<<"\n\n******W E L C O M E*****";
  p:  cout<<"\a\n\nPlease select a option :";
    cout<<"\n\n1.Patient Ragistration form  \n\n2.Docter Registration  \n\n3.Doctor Serch \n\n4.Patient Details \n\n5.Serch Patient \n\n6.Analysis Symptoms  \n\n7.Change Password \n\n8.patient delete \n\n9.Logout";
    cout<<"\n\nEnter your choise: ";
    cin>>choise;
    switch(choise)
    {
    	case 1:
    		obj.pregistration();
         	cout<<"\n\nwould you want to go back in main menu (y/n): ";
			cin>>c;
		    if(c=='y')
			{
				sleep(1);
				system("cls");
				goto p;
			}	
			else
			{
				break;
			}
    		
    	case 2:
    		obj1.dregistration();
    		cout<<"\n\nwould you want to go back in main menu (y/n): ";
			cin>>c;
		    if(c=='y')
			{
				sleep(1);
				system("cls");
				goto p;
			}	
		else
			{
				break;
			}
			
		case 3:
		     obj1.dserch();
			  cout<<"\n\nwould you want to go back in main menu (y/n): ";
			cin>>c;
		    if(c=='y')
			{
				sleep(1);
				system("cls");
				goto p;
			}	
		else
			{
				break;
			}
				
    		
    		
    	case 4:
		     patient pt;
		     pt.pdetail();
		     cout<<"\n\nwould you want to go back in main menu (y/n): ";
			cin>>c;
		    if(c=='y')
			{
				sleep(1);
				system("cls");
				goto p;
			}	
		else
			{
				break;
			}
			
		case 5:	
		     obj.pserch();
		     cout<<"\n\nwould you want to go back in main menu (y/n): ";
			cin>>c;
		    if(c=='y')
			{
				sleep(1);
				system("cls");
				goto p;
			}	
		else
			{
				break;
			}
			
		case 6:
		    det.analyse_symptoms();
			 cout<<"\n\nwould you want to go back in main menu (y/n): ";
			cin>>c;
		    if(c=='y')
			{
				sleep(1);
				system("cls");
				goto p;
			}	
		else
			{
				break;
			}
					
			
			
    	case 7:
		     cha.change();
			 
		
		 
		 case 8:
		     obj.pdelete();
			 
			 cout<<"\n\nwould you want to go back in main menu (y/n): ";
			cin>>c;
		    if(c=='y')
			{
				sleep(1);
				system("cls");
				goto p;
			}	
		else
			{
				break;
			}    
		case 9:
		     	log.out();
		     	sleep(1);
		     	system("cls");
				 main();
    		
    		
		    	
    	
    	
	}
}


//---------------------------------------------------------------Logout Screen-----------------------------------------------------------------------------
void logout::out()
{
	system("cls");
	int i;
	cout<<"\t\t###################################################################################";
	cout<<"\t\t\t*********************** @ CODMAS - Centre for Obesity, Diabetes & Minimal Access Surgery @ ***********************";
	printf("\n\t\t###################################################################################");
	cout<<"\n\n\n\t\t\t\t\tDo you want to logged out to the software(1/0): ";
	cin>>i;
	if(i==1)
	{
		cout<<"\n\t\t\t\t\tYou will be logged out in 5 sec";
		sleep(1);
		cout<<"\n\n\t\t\t\t\tLogged out in 4 sec....";
		sleep(1);
		cout<<"\n\n\t\t\t\t\tLogged out in 3 sec....";
		sleep(1);
		cout<<"\n\n\t\t\t\t\tLogged out in 2 sec....";
		sleep(1);
		cout<<"\n\n\t\t\t\t\tLogged out in 1 sec....";
		sleep(1);
		cout<<"\n\n\t\t\t\t\tLogged out.........";
		exit;
		
	}
}


//-----------------------------------------------------------------------------CHANGE PASSWORD-------------------------------------------------------------------------------
void Diabities::change()
{
	char pass1[20]="helloguy",user[20]="Deepak";
	int i,j,k;
	char c,d,e;
	char oldpass[100],newpass[100],newpass1[100];
	cout<<"\n\n***Change Password***";
k:	cout<<"\n\nEnter Old Password: ";
	for(i=0;i<100;i++)
	{
		c=getch();
		if(c==13)
		{
			break;
		}
		if(c==8)
		{
		
		}
		oldpass[i]=c;
		c='*';
		cout<<c;
	}
	oldpass[i]='\0';
	if(strcmp(oldpass,pass1)==0)
	{
		cout<<"\nEnter New Password: ";
		for(i=0;i<100;i++)
    	{
	    	d=getch();
	    	if(d==13)
	        	{
		        	break;
	           	}
	     	if(d==8)
	        	{
		
	          	}
	     	newpass[i]=d;
		    d='*';
	     	cout<<d;
     	}
        	newpass[i]='\0';
	j:	cout<<"\nconfirm password: ";
		for(i=0;i<100;i++)
     	{
	    	e=getch();
	    	if(e==13)
	    	{
		    	break;
	     	}
	     	if(e==8)
	    	{
		
	    	}
	    	newpass1[i]=e;
	    	e='*';
	    	cout<<e;
    	}
       	newpass1[i]='\0';
		if(strcmp(newpass,newpass1)==0)
		{
			cout<<"\nYour password has been changed";
			cout<<"\nL O G I N   A G A I N";
			sleep(2);
			system("cls");
			cha.login();
		}
		else
		{
			cout<<"\nyour password doesn't match !!Try Again";
			goto j;
		}
	}
	else
	cout<<"\n\nyou have entered wrong password   !!TRY AGAIN";
//	goto k;
	
}

//----------------------------------------------------------------Doctor Registration--------------------------------------------------------------------------
void doctor::dregistration()
{
	int i,j,s,p;
	char c;
	
	
	ofstream file;
	file.open("Doctor.txt");
	cout<<"<<<<<<<<<<<<DOCTOR REGISTRATION>>>>>>>>>>>>>>>\n";
			cout<<"ENTER NUMBER OF DOCTORS IN HOSPITAL:";
			cin>>i;
			id=20250;
			for(j=0;j<i;j++)
			{
				id++;
				cout<<"\nEnter Details For Docter "<<":"<<j+1;
				cout<<"\nDocter Id: "<<obj1.id;
				cout<<"\nName: ";
				cin>>obj1.name;
				cout<<"Speciality: ";
				cin>>obj1.speciality;
				cout<<"Available At: ";
				cin>>obj1.time;
				cout<<"Contect No: ";
				cin>>obj1.contect;
				cout<<"Room No: ";
				cin>>obj1.room;
				file.write((char*)&obj1,sizeof(obj1));
			}
			 
             file.close();                   
  
		
	     /*	else 
	     	cout<<"\nplese choose a correct option!!";
	     	goto p;*/
		
}

//-----------------------------------------------------------------------PATIENT REGISTRATION-------------------------------------------------------------------
void patient::pregistration()
{
	           
	            
             	int j,n;
	            cout<<"\n\t\t\t\t@@@@@@@@@  PATIENT REGISTRATION  @@@@@@@@";
				cout<<"\n\nHOW Many Patient Details You Want To Fill: ";
				cin>>n;
				ofstream outfile;
				outfile.open("patient.txt");
				cout<<" \nP E R S O N A L   I N F O R M A T I O N\n";
				id1=100;
				for(j=0;j<n;j++)
				{
					id1++;
				    cout<<"\nEnter Details For Patient "<<":"<<j+1;
					cout<<"\nPatient Id: "<<id1;
					cout<<"\nPatient Name: ";
					cin>>obj.pname;
					cout<<"Age:";
					cin>>obj.age;
					cout<<"Sex: ";
				    cin>>obj.sex;
					cout<<"Category: ";
					cin>>obj.category;
					cout<<"City: ";
					cin>>obj.city;
					cout<<"Mobile No.: ";
					cin>>obj.mobile;
					cout<<"Test: ";
					cin>>obj.test;
					cout<<"Bloodgroup: ";
					cin>>obj.bloodgroup;
		           outfile.write((char*)&obj,sizeof(obj));
		            
		            
		        }
		        
		        outfile.close();
}

//----------------------------------------------------------------PATIENT DETAIL-------------------------------------------------------------------

void patient::pdetail()
{
	    fstream fp;
	    int n;
	    char ch;
		cout<<"\n\t\t------------------------------------------------------------------------------";
		    cout<<"\n\t\t\t\t\t@@@@@@  PATIENT RECORD  @@@@@\n";
		    cout<<"\t\t------------------------------------------------------------------------------\n";
		    fp.open("patient.txt",ios::in);
		    while(fp.read((char*)&obj,sizeof(obj))) 
		    {
		        cout<<"\n\n\t\t\t\t\tPatient Id:"<<id1;
				cout<<"\n\n\t\t\t\t\tPatient name: "<<obj.pname;
				cout<<"\n\n\t\t\t\t\tAge: "<<obj.age;
				cout<<"\n\n\t\t\t\t\tSex: "<<obj.sex;
				cout<<"\n\n\t\t\t\t\tCategory: "<<obj.category;
				cout<<"\n\n\t\t\t\t\tCity: "<<obj.city;
				cout<<"\n\n\t\t\t\t\tMobile: "<<obj.mobile;
				cout<<"\n\n\t\t\t\t\tTest: "<<obj.test;
				cout<<"\n\n\t\t\t\t\tBloodgroup: "<<obj.bloodgroup;
				cout<<"\n\n\t\t\t---------------------------------------------------";
				
		        
			}
			fp.close();
	
}

//----------------------------------------------------------------PATIENT SERCH-----------------------------------------------------------------------------
void patient::pserch()
{
	char pname1[20];
	fstream outfile;
	    char ch;
	    int r,flag=0;
	   r: outfile.open("patient.txt",ios::in);
		cout<<"\n\t\t------------------------------------------------------------------------------";
		    cout<<"\n\t\t\t\t\t@@@@@@  Patient Serch  @@@@@\n";
		    cout<<"\t\t------------------------------------------------------------------------------\n";
		    cout<<"\n\n\t\t\tEnter patient name for serch: ";
		    cin>>pname1;
		   while(outfile.read((char*)&obj,sizeof(obj)))
		    {
		    	if(strcmp(pname1,obj.pname)==0)
		    	{
		    		flag=1;
		    	cout<<"\n\n\t\t\t\t\tPatient Id:"<<id1;
				cout<<"\n\n\t\t\t\t\tPatient name: "<<obj.pname;
				cout<<"\n\n\t\t\t\t\tAge: "<<obj.age;
				cout<<"\n\n\t\t\t\t\tSex: "<<obj.sex;
				cout<<"\n\n\t\t\t\t\tCategory: "<<obj.category;
				cout<<"\n\n\t\t\t\t\tCity: "<<obj.city;
				cout<<"\n\n\t\t\t\t\tMobile: "<<obj.mobile;
				cout<<"\n\n\t\t\t\t\tTest: "<<obj.test;
				cout<<"\n\n\t\t\t\t\tBloodgroup: "<<obj.bloodgroup;
				cout<<"\n\n\t\t\t---------------------------------------------------";
				}
			
			}
			if(flag==0)
			{
					cout<<"\nThis Name Doesn't Exist In Your List";
					cout<<"\tTry Again!!";
					goto r;
				
			}
		    
}

//---------------------------------------------------------------------DOCTOR SERCH---------------------------------------------------------------------------
void doctor::dserch()
{
	int did;
	int r,flag=0;
	fstream file;
r:	file.open("Doctor.txt",fstream::in);
     cout<<"\n\t\t------------------------------------------------------------------------------";
     cout<<"\n\t\t\t\t\t@@@@@ Doctor Serch  @@@@@\n";
     cout<<"\t\t------------------------------------------------------------------------------\n";
	cout<<"\n\n\t\t\t\t\tEnter Doctor ID: ";
	cin>>did;
	while(file.read((char*)&obj1,sizeof(obj1)))
	{
		if(id==did)
		{
			flag=1;
			cout<<"\n\n\t\t\t\t\tDoctor ID"":->"<<setw(18)<<":->"<<obj1.id;
			cout<<"\n\n\t\t\t\t\t\t\t\tName"<<":->"<<setw(23)<<":->"<<obj1.name;
			cout<<"\n\n\t\t\t\t\tSpeciality"<<":->"<<setw(17)<<":->"<<obj1.speciality;
			cout<<"\n\n\t\t\t\t\tAvailable At"<<":->"<<setw(15)<<":->"<<obj1.time;
			cout<<"\n\n\t\t\t\t\tContect No"<<":->"<<setw(17)<<":->"<<obj1.contect;
			cout<<"\n\n\t\t\t\t\tRoom No"<<":->"<<setw(20)<<":->"<<obj1.room;
		}
	}
	if(flag==0)
	{
		cout<<"\nThis ID Doesn't Exist In Your List";
	    cout<<"\tTry Again!!";
		goto r;
	}
}

//------------------------------------------------------------DIABITIES ANALYSIS-------------------------------------------------------------------------
void Detection::analyse_symptoms()
{
	int checka=0,checkb=0;

cout<<" *** MEDICAL DIAGONOSIS FORM *** ";
cout<<"\n Let's have a look at  symptoms: ";

	    char ch[20];
	    int r,flag=0;
	   ofstream file;
      file.open("record1.txt");
	   r=0;
	   r++;
//	cout<<" Patient name: ";
//	cout<<mainobj.name;
	cout<<"\n\n\n";
	cout<<" 1:Thirsty frequently (d-high / c-medium / b-low  / a-no) :  ";
	cin>>det.thirst;
	cout<<"\n";
	cout<<" Thirst Level : ";
    if(det.thirst=='a')
    cout<<" NO PROBLEM";
    else if(det.thirst=='b')
    cout<<" LOW";
    else if(det.thirst=='c')
    cout<<" MEDIUM";
    else if(det.thirst=='d')
    cout<<" HIGH";
    cout<<"\n\n";

	cout<<" 2:Hunger Level  (d-high / c-medium / b-low / a-no): ";
	cin>>det.hunger;
	
	cout<<" Hunger Level: ";
    if(det.hunger=='a')
    cout<<" NO PROBLEM";
    else if(det.hunger=='b')
    cout<<" LOW";
    else if(det.hunger=='c')
    cout<<" MEDIUM";
    else if(det.hunger=='d')
    cout<<" HIGH";
    cout<<"\n\n";

	

    cout<<"\n";
    
	cout<<" 3:Urine frequently  (d-high / c-medium / b-low / a-no) :  ";
	cin>>det.furine;
	cout<<" Urine Frequency: ";
    if(det.furine=='a')
    cout<<" NO PROBLEM";
    else if(det.furine=='b')
    cout<<" LOW";
    else if(det.furine=='c')
    cout<<" MEDIUM";
    else if(det.furine=='d')
    cout<<" HIGH";
    cout<<"\n\n";
	cout<<"\n";
	cout<<" 4:Headches (d-high / c-medium / b-low / a-no) : ";
	cin>>det.headche;
	cout<<" Headche Level: ";
    if(det.headche=='a')
    cout<<" NO PROBLEM";
    else if(det.headche=='b')
    cout<<" LOW";
    else if(det.headche=='c')
    cout<<" MEDIUM";
    else if(det.headche=='d')
    cout<<" HIGH";
    cout<<"\n\n";
	cout<<"\n";
	cout<<" 5:Fatiguness (d-high / c-medium / b-low / a-no) : ";
	cin>>det.fatigue;
	cout<<" Fatigue Level: ";
    if(det.fatigue=='a')
    cout<<" NO PROBLEM";
    else if(det.fatigue=='b')
    cout<<" LOW";
    else if(det.fatigue=='c')
    cout<<" MEDIUM";
    else if(det.fatigue=='d')
    cout<<" HIGH";
    cout<<"\n\n";
	cout<<"\n";
	cout<<" 6:Vision  Enter the level(d-highly Blurred / c-Partially Blurred / b-Sometimes Blurred / a-Good) : ";
	cin>>det.vision;
	cout<<" Vision: ";
    if(det.furine=='a')
    cout<<" NO PROBLEM";
    else if(det.furine=='b')
    cout<<" LOW PROBLEM";
    else if(det.furine=='c')
    cout<<" MEDIUM PROBLEM";
    cout<<" HIGH PROBLEM";
    cout<<"\n\n";
	cout<<"\n\n\n\t\t\t Thanks! Please Take the Test from doctor ";
	cout<<"\n\n Enter Readings of Glucometer : ";
	cin>>det.sugarlevel;
	cout<<"\n\n\n";
	cout<<" Enter the blood pressure(num) : ";
	cin>>det.blpressurenum;
	cout<<" Enter the blood pressure(den) : ";
	cin>>det.blpressuredem;
 

cout<<" BloodPressure :";
if(det.blpressurenum>140)
{
	if(det.blpressuredem>80)
    {
	cout<<"High Blood Pressure\n";
	checka++;
    }
	else
	cout<<"High Blood Pressure(cond(II))\n";
}
else if(det.blpressurenum<=140 && det.blpressurenum>=120)
{
	if(det.blpressuredem>=80 && det.blpressuredem<=100)
	cout<<" Normal Blood Pressure";
	else
	cout<<" Normal Blood Pressure(II)";
}
else
{
	cout<<" Low Blood Pressure";
}


cout<<"\n\n";
cout<<" Sugar Level : ";
if(det.sugarlevel>7.0)
{
cout<<" High Sugar Level\n";
checkb++;
cout<<" Diabetic person\n";
}
else if(det.sugarlevel>4.0 && det.sugarlevel<6.8)
{
cout<<" Normal Sugar Level\n";
cout<<" Not a diabetic person\n";
}
else
cout<<" Low Sugar Level\n";
}

void patient::pdelete()

{
		int pid;
	fstream fin,fout,fin1;
	cout<<"\n\n\tEnter Patient ID which you want to delete : ";
	cin>>pid;
	fin.open("patient.txt",ios::in);
	fout.open("temp.txt",ios::out);
	while(fin.read((char*)&obj,sizeof(obj)))
	{
		if(pid==id1)
		continue;	
		fout.write((char*)&obj,sizeof(obj));
	}
	fout.close();
	fin.close();
	fin.open("temp.txt",ios::in);
	fout.open("patient.txt",ios::out);
	while(fin.read((char*)&obj,sizeof(obj)))
	{
		fout.write((char*)&obj,sizeof(obj));
	}
	fout.close();
	fin.close();
}

	






