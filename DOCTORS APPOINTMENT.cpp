///DOCTORS APOOINTMENT PROJECT MADE BY AYUSH

#include<iostream>
#include<iomanip>
#include<string.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
char user[15],pass[8],p[8],d[15],ch;
class Registration{
	protected:
		int app,i;
	public:
		void login(){
			cout<<"\nFor Login  :  \n";
			cout<<"\nEnter your Username ";
        	cin>>user;
           	cout<<"\nEnter your Password ";
          	    while(i<=7){
    				ch = getch();
    				pass[i] = ch;
    				cout<<"*";
   				 	i++;
				}
				pass[i] = '\0';
          	
			if(strcmp(d,user)==0 && strcmp(p,pass)==0){
                city();
                	}
           	else
	             cout<<"\nWrong Password...!!!";
	       	}
	    void signup(){
	    	cout<<setw(70)<<"$  For Registration Follow the instructions  $\n\n\n" <<endl;
			cout<<"* USERNAME MUST BE CONTINOUS * \n"<<endl;
			cout<<"* PASSWORD MUST CONTAIN 8 CHARACTERS * \n\n"<<endl;
	    	cout<<"\nEnter your Username : ";
        	cin>>d;
           	cout<<"\nCreate your Password : ";
          	cin>>p;
          	long no1;
          	cout<<"\nEnter Mobile no. : "<<endl;
          	cin>>no1;
          	int age;
          	cout<<"\nEnter Age : "<<endl;
          	cin>>age;
          	cout<<"\nYour Registration Is Done Successfully...!!!\n\n"<<endl;
		}
		void city(){
			int c1;
			cout<<"Select your city : "<<endl;
			cout<<setw(20)<<"\n1.Nagpur \n2.Chandrapur \n3.Amravati \n4.Bhandara \n5.Wardha \n6. Yavatmal"<<endl;
			cin>>c1;
			switch (c1){
				
				case 1:
					int categ1;
					cout<<"\n1.General Physician \n2.Cardiologist \n3.Neurologist \n4.Dentist"<<endl;
					cout<<"\nSelect Speacialist : ";
					cin>>categ1;
					switch(categ1){
						case 1:
						case 2:
						case 3:
						case 4:
							int doc;
							cout<<"\nDOCTORS IN NAGPUR"<<endl;
							cout<<"\n1.Dr P Kotangale\n2.Dr A ASUTKAR\n3.Dr K VERMA\n4.Dr R RAMLAL"<<endl;
							cin>>doc;
							switch(doc){
								case 1:
									cout<<"Dr P Kotangale \n(M.B.B.S) & (M.D) \nHARVARD MEDICAL SCHOOL\nTime : 10am to 7pm"<<endl;
									appointment();
									break;
								case 2:
									cout<<"Dr A ASUTKAR \n(M.B.B.S) & (M.D) \nAIIMS DELHI \nTime : 9am to 10pm "<<endl;
									appointment();
									break;
								case 3:
									cout<<"Dr K VERMA \n(M.B.B.S)  \nAIIMS NAGPUR \nTime : 9am to 10pm "<<endl;
									appointment();
									break;
								case 4:
									cout<<"Dr R RAMLAL \n(M.B.B.S)  \nAFMC PUNE \nTime : 12am to 12pm "<<endl;
									appointment();
									break;
							}
							break;
						default:
							cout<<"WRONG SELECTION 1"<<endl;
							break;
					}
					break;
				case 2:
					int categ;
					cout<<"\n1.General Physician \n2.Cardiologist \n3.Neurologist \n4.Dentist"<<endl;
					cout<<"\nSelect Speacialist : ";
					cin>>categ;
					switch(categ){
						case 1:
						case 2:
						case 3:
						case 4:
							int doc;
							cout<<"\nDOCTORS IN CHANDRPUR"<<endl;
							cout<<"\n1.Dr P Kotangale\n2.Dr A ASUTKAR\n3.Dr K VERMA\n4.Dr R RAMLAL"<<endl;
							cin>>doc;
							switch(doc){
								case 1:
									cout<<"Dr P Kotangale \n(M.B.B.S) & (M.D) \nHARVARD MEDICAL SCHOOL\nTime : 10am to 7pm"<<endl;
									appointment();
									break;
								case 2:
									cout<<"Dr A ASUTKAR \n(M.B.B.S) & (M.D) \nAIIMS DELHI \nTime : 9am to 10pm "<<endl;
									appointment();
									break;
								case 3:
									cout<<"Dr K VERMA \n(M.B.B.S)  \nAIIMS NAGPUR \nTime : 9am to 10pm "<<endl;
									appointment();
									break;
								case 4:
									cout<<"Dr R RAMLAL \n(M.B.B.S)  \nAFMC PUNE \nTime : 12am to 12pm "<<endl;
									appointment();
									break;
							}
							break;
						default:
							cout<<"WRONG SELECTION..."<<endl;
							break;
					}
					break;
				case 3:
					int categ2;
					cout<<"\n1.General Physician \n2.Cardiologist \n3.Neurologist \n4.Dentist"<<endl;
					cout<<"\nSelect Speacialist : ";
					cin>>categ2;
					switch(categ2){
						case 1:
						case 2:
						case 3:
						case 4:
							int doc;
							cout<<"\nDOCTORS IN AMRAVATI"<<endl;
							cout<<"\n1.Dr P Kotangale\n2.Dr A ASUTKAR\n3.Dr K VERMA\n4.Dr R RAMLAL"<<endl;
							cin>>doc;
							switch(doc){
								case 1:
									cout<<"Dr P Kotangale \n(M.B.B.S) & (M.D) \nHARVARD MEDICAL SCHOOL\nTime : 10am to 7pm"<<endl;
									appointment();
									break;
								case 2:
									cout<<"Dr A ASUTKAR \n(M.B.B.S) & (M.D) \nAIIMS DELHI \nTime : 9am to 10pm "<<endl;
									appointment();
									break;
								case 3:
									cout<<"Dr K VERMA \n(M.B.B.S)  \nAIIMS NAGPUR \nTime : 9am to 10pm "<<endl;
									appointment();
									break;
								case 4:
									cout<<"Dr R RAMLAL \n(M.B.B.S)  \nAFMC PUNE \nTime : 12am to 12pm "<<endl;
									appointment();
									break;
							}
							break;
						default:
							cout<<"WRONG SELECTION..."<<endl;
							break;
					}
					break;
				case 4:
			    	int categ3;
				    
					cout<<"\n1.General Physician \n2.Cardiologist \n3.Neurologist \n4.Dentist"<<endl;
					cout<<"\nSelect Speacialist : ";
					cin>>categ3;
					switch(categ3){
						case 1:
						case 2:
						case 3:
						case 4:
							int doc;
							cout<<"\nDOCTORS IN BHANDARA"<<endl;
							cout<<"\n1.Dr P Kotangale\n2.Dr A ASUTKAR\n3.Dr K VERMA\n4.Dr R RAMLAL"<<endl;
							cin>>doc;
							switch(doc){
								case 1:
									cout<<"Dr P Kotangale \n(M.B.B.S) & (M.D) \nHARVARD MEDICAL SCHOOL\nTime : 10am to 7pm"<<endl;
									appointment();
									break;
								case 2:
									cout<<"Dr A ASUTKAR \n(M.B.B.S) & (M.D) \nAIIMS DELHI \nTime : 9am to 10pm "<<endl;
									appointment();
									break;
								case 3:
									cout<<"Dr K VERMA \n(M.B.B.S)  \nAIIMS NAGPUR \nTime : 9am to 10pm "<<endl;
									appointment();
									break;
								case 4:
									cout<<"Dr R RAMLAL \n(M.B.B.S)  \nAFMC PUNE \nTime : 12am to 12pm "<<endl;
									appointment();
									break;
							}
							break;
						default:
							cout<<"WRONG SELECTION..."<<endl;
							break;
							
					}
					break;
				case 5:
					int categ4;
					cout<<"\n1.General Physician \n2.Cardiologist \n3.Neurologist \n4.Dentist"<<endl;
					cout<<"\nSelect Speacialist : ";
					cin>>categ4;
					switch(categ4){
						case 1:
						case 2:
						case 3:
						case 4:
							int doc;
							cout<<"\nDOCTORS IN WARDHA "<<endl;
							cout<<"\n1.Dr P Kotangale\n2.Dr A ASUTKAR\n3.Dr K VERMA\n4.Dr R RAMLAL"<<endl;
							cin>>doc;
							switch(doc){
								case 1:
									cout<<"Dr P Kotangale \n(M.B.B.S) & (M.D) \nHARVARD MEDICAL SCHOOL\nTime : 10am to 7pm"<<endl;
									appointment();
									break;
								case 2:
									cout<<"Dr A ASUTKAR \n(M.B.B.S) & (M.D) \nAIIMS DELHI \nTime : 9am to 10pm "<<endl;
									appointment();
									break;
								case 3:
									cout<<"Dr K VERMA \n(M.B.B.S)  \nAIIMS NAGPUR \nTime : 9am to 10pm "<<endl;
									appointment();
									break;
								case 4:
									cout<<"Dr R RAMLAL \n(M.B.B.S)  \nAFMC PUNE \nTime : 12am to 12pm "<<endl;
									appointment();
									break;
							}
							break;
						default:
							cout<<"WRONG SELECTION..."<<endl;
							break;
							
					}
					break;
				case 6:
					int cate;
					cout<<"\n1.General Physician \n2.Cardiologist \n3.Neurologist \n4.Dentist"<<endl;
					cout<<"\nSelect Speacialist : ";
					cin>>cate;
					switch(cate){
						case 1:
						case 2:
						case 3:
						case 4:
							int doc;
							cout<<"\n$ DOCTORS IN YAVATMAL $"<<endl;
							cout<<"\n1.Dr P Kotangale\n2.Dr A ASUTKAR\n3.Dr K VERMA\n4.Dr R RAMLAL"<<endl;
							cin>>doc;
							switch(doc){
								case 1:
									cout<<"Dr P Kotangale \n(M.B.B.S) & (M.D) \nHARVARD MEDICAL SCHOOL\nTime : 10am to 7pm"<<endl;
									appointment();
									break;
								case 2:
									cout<<"Dr A ASUTKAR \n(M.B.B.S) & (M.D) \nAIIMS DELHI \nTime : 9am to 10pm "<<endl;
									appointment();
									break;
								case 3:
									cout<<"Dr K VERMA \n(M.B.B.S)  \nAIIMS NAGPUR \nTime : 9am to 10pm "<<endl;
									appointment();
									break;
								case 4:
									cout<<"Dr R RAMLAL \n(M.B.B.S)  \nAFMC PUNE \nTime : 12am to 12pm "<<endl;
									appointment();
									break;
							}
							break;
						default:
							cout<<"WRONG SELECTION...3"<<endl;
							break;
							
					}
					break;
				default:
					 cout<<"WRONG SELECTION..2"<<endl;
					 break;
					 
			}
		}
		void appointment(){
			cout<<setw(90)<<"\n\n\n APPOINTMENT PAGE \n\n\n"<<endl;
			cout<<" please select ur Appointment"<<endl;
			cout<<"\n\n1.Appointment \n2.Meeting \n3. Home Visit \n";
			cin>>app;
			switch(app){
				case 1:
					patdet();
					cout<<"Your Appointmnt is boooked ..!!!";
					break;
				case 2:
					patdet();
					cout<<"Your Meeting Requwst is Accepted ..!!!";
					break;
				case 3:
					patdet();
					cout<<"Your Home Visit Requwst is Accepted...!!!";
					break;
			}
		}
		void patdet();
		
};
void Registration::patdet(){
		char name[30],mob[10],add[30];
					int tym;
                 	cout<<"\n\n\n\nEnter name : "<<endl;
                 	cin.ignore();
                	cin.getline(name,20);
	                cout<<"\n\n\n\nEnter Mobile No. : "<<endl;
	                cin.ignore();
	                cin.getline(mob,10);
	                cout<<"\n\n\n\nEnter Time : "<<endl;
	                cin>>tym;
					cout<<"\n\n\n\nAddress : "<<endl;
					cin.ignore();
					cin.getline(add,30);
}
class Doctor{
	protected:
		int tym,reg,ctym,otym;
		char us[8],pas[8],add[30],name[20],cat[20],use[8],pasw[8];
		
	public:
		void signup(){
			cout<<setw(70)<<"$  For Registration Follow the instructions  $\n\n\n" <<endl;
			cout<<"* USERNAME MUST BE CONTINOUS * \n"<<endl;
			cout<<"* PASSWORD MUST CONTAIN 8 CHARACTERS * \n\n"<<endl;
			cout<<"\nEnter your Full Name : ";
			cin.ignore();
			cin.getline(name,20);
	    	cout<<"\nEnter your Username : ";
        	cin>>us;
           	cout<<"\nCreate your Password : ";
          	cin>>pas;
          	cout<<"\nEnter Location : ";
          	cin.ignore();
          	cin.getline(add,30);
          	cout<<"\nEnter Opening Time : ";
          	cin>>otym;
          	cout<<"\nEnter Closing Time : ";
          	cin>>ctym;
          	cout<<"\nEnter Regd.No : ";
          	cin>>reg;
          	cout<<"\nDoctor's Specialization : ";
          	cin.ignore();
			cin.getline(cat,20);
          	
          	cout<<setw(30)<<"Your Registration Is Done Successfully...!!!\n\n\n"<<endl;
		}
		void login(){
			cout<<"$ For DOCTOR Login   $\n\n";
			cout<<"\nEnter your Username :";
        	cin>>use;
           	cout<<"\nEnter your Password :";
          	cin>>pasw;
          	
			if(strcmp(use,us)==0 && strcmp(pasw,pas)==0){
            	cout<<"\n\n$ Welcome to Ayush's Hospital $'\n";
            	ay:
            	    cout<<"\n\n1.SHOW PROFILE "<<setw(40)<<"2.SHOW APPOINTMENTS"<<setw(40)<<"3.EDIT PROFILE "<<setw(40)<<"4.EXIT"<<"\n\n";
                	int f1;
                	cin>>f1;
                	switch(f1){
            	    	case 1:
            	    		showpro();
            	    		goto ay;
            	    		break;
                		case 2:
            	    		showapp();
            	    		goto ay;
            	    		break;
            	    	case 3:
            	    		edit();
            	    		goto ay;
            	    		break;
            	    	case 4 :
		                    exit(0);
		                    
            	    	default:
            		    	cout<<"WRONG SELECTION....!!!\n";
            			
				}
                	}
           	else
	             cout<<" Wrong Password...!!!";
	       	}
	    void showpro(){
	    	cout<<"\nDR "<<name<<"\n(M.B.B.S) & (M.D) \nHARVARD MEDICAL SCHOOL\n"<<cat<<"\nTime : "<<otym<<"am to "<<ctym<<"pm\nLocation: "<<add<<endl;
		}
		void edit(){
			cout<<"# EDIT PROFILE #"<<endl;
			cout<<"\nUpdate Qualifications : ";
			char cat1 [20],loc[10];
			int time;
			cin.ignore();
			cin.getline(cat1,20);
			cout<<"\nChange Timings : ";
			cin>>time;
			cout<<"\nChange Location : ";
			cin>>loc;
		}
		void showapp(){
			cout<<"\n\n# BOOKED APPOINTMENTS #"<<endl;
			cout<<"\n1.Mr Manohar A  \n   AT 11AM\n\n";
			cout<<"\n1.Mr Sam J  \n   AT 1PM";
			cout<<"\n1.Mrs Manisha G  \n   AT 3PM";
			cout<<"\n1.Mrs Nirmala G  \n   AT 4PM";
		}
		
};
class Admin{
	protected:
		int code,f2;
	public:
		void admin(){
			cout<<"\n\nENTER ADMINS PRIVATE CODE :\n";
			cin>>code;
			cout<<setw(45)<<"\n$ ADMIN'S PAGE $\n"<<endl;
			cout<<" \n1.ADD CITIES\ LOCATIONS \n2.PATIENTS REGISTRATION \n3.DOCTORS REGISTRATION \n4.PATIENTS LIST\n5.DOCTORS LIST \n\n";
			cin>>f2;
			switch(f2){
				case 1:
					char cit[20];
					cout<<"\nEnter new city : ";
					cin.ignore();
		        	cin.getline(cit,20);
					cout<<"\nEnter PINCODE  : ";
					int pin;
					cin>>pin;
					break;
				case 2:
					char name[10];
					cout<<"\nEnter Patients Name : ";
					cin>>name;
					cout<<"\nAppointment Time  : ";
					int alf;
					cin>>alf;
					break;
				case 3:
					char na[10];
					cout<<"\nEnter Doctor Name: ";
					cin>>na;
					cout<<"\nEnter ID  : ";
					int pi;
					cin>>pi;
					break;
				case 4:
					cout<<"\n# PATIENTS LIST #"<<endl;
					cout<<"\n1.Mr Manohar A  \n   AT 11AM";
					cout<<"\n1.Mr Sam J  \n   AT 1PM";
					cout<<"\n1.Mrs Manisha G  \n   AT 3PM";
					cout<<"\n1.Mrs Nirmala G  \n   AT 4PM";
					break;
				case 5:
					cout<<"# OUR DOCTORS #"<<endl;
					cout<<"\n1.Dr P Kotangale\n2.Dr A ASUTKAR\n3.Dr K VERMA\n4.Dr R RAMLAL"<<endl;
					break;
					
					
			}
		}
};

int main(){
	cout<<setw(70)<<"$  WELCOMES TO AYUSH'S HOSPITAL  $\n" <<endl;
	Registration q;
	   cat:
	   	int a;
	   	cout<<"\n\nARE YOU PATIENT OR DOCTOR OR ADMIN ?\n"<<endl;
    	cout<<"\n1.Patient "<<setw(40)<<"2.Doctor "<<setw(40)<<"3.Admin "<<endl;
    	cout<<"\nENTER YOUR CHOICE : ";
    	cin>>a;
    	switch (a){
    		
		case 1:
			
			cout<<"\n$ PATIENTS PAGE $"<<endl;
			cout<<"\n1.REGISTRATION  \n2.LOGIN "<<endl;
			int pat;
			cin>>pat;
			switch(pat){
				case 1:
				//	Registration q;
					q.signup();
					goto cat;
				case 2:
					q.login();
					goto cat;
			}
		    
			break;
		case 2:
			cout<<"\n$ DOCTORS PAGE $"<<endl;
			cout<<"\n1.REGISTRATION  \n2.LOGIN "<<endl;
			int doc;
			cin>>doc;
			switch(doc){
				case 1:
					Doctor d;
					d.signup();
					goto cat;
				case 2:
					d.login();
					goto cat;
			}
			break;
		case 3:
			cout<<"\n$ ADMIN'S PAGE $ "<<endl;
			Admin a;
			a.admin();
			goto cat;
		default:
			cout<<"You have entered wrong choice "<<endl;
			goto cat;
	}
	
	return 0;
	
}
