#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdlib.h>
#include<string.h>

using namespace std;

class Card
{
 int sno;
 string date1;
 int card_no;
 int year;
 char month[12];
 char mon1[20];
 int yea1;

 char name_customer[20];
 char gender;
 int type;
 int byear;
 char contact_no[10];
 char address[50];
 char maddress[50];
 char bridename[20],fbridename[20],mbridename[20],brotherbride[20],unclebride[20],bridegroomname[20],fbridegroomname[20],mbridegroomname[20],brotherbridegroom[20],unclebridegroom[20];
 char fname[20],mname[20],birthdayname[20];
	
	char shop[20];
    
 public:
  void getData();
  void showData();
  void marriage();
  void birthday();
  void dmarriage();
  void bdisplay();
  void inagu();
  void dinagu();
  int getAdmno(){return sno;}
}s;
void Card:: marriage()
{
cout<<"Enter Full Name of Bride                  : ";getchar(); cin.getline(bridename,20);
cout<<"Enter Name of Bride's Father             : "; getchar(); cin.getline(fbridename,20);
cout<<"Enter Name of Bride's Mother             : "; getchar(); cin.getline(mbridename,20);
cout<<"Enter Name of Bride's Brother            : "; getchar(); cin.getline(brotherbride,20);
cout<<"Enter Name of Bride's uncle              : "; getchar(); cin.getline(unclebride,20);
cout<<"Enter Full Name of Bridegroom            : "; getchar(); cin.getline(bridegroomname,20);
cout<<"Enter Name of Bridegroom's Father        : "; getchar(); cin.getline(fbridegroomname,20);
cout<<"Enter Name of Bridegroom's Mother        : "; getchar(); cin.getline(mbridegroomname,20);
cout<<"Enter Name of Bridegroom's Brother       : "; getchar(); cin.getline(brotherbridegroom,20);
cout<<"Enter Name of Bridegroom's uncle         : "; getchar(); cin.getline(unclebridegroom,20);

}
void Card::dmarriage()
{
cout<<"******BRIDE DETAILS******"<<endl;
cout<<"Enter Full Name of Bride             : "<<bridename<<endl;
cout<<"Enter Name of Bride's Father'        : "<<fbridename<<endl; 
cout<<"Enter Name of Bride's Mother'        : "<<mbridename<<endl; 
cout<<"Enter Name of Bride's Brother'       : "<<brotherbride<<endl; 
cout<<"Enter Name of Bride's uncle'         : "<<unclebride<<endl;
cout<<"******BRIDEGROOM DETAILS******"<<endl; 
cout<<"Enter Full Name of Bridegroom        : "<<bridegroomname<<endl; 
cout<<"Enter Name of Bridegroom's Father    : "<<fbridegroomname<<endl; 
cout<<"Enter Name of Bridegroom's Mother    : "<<mbridegroomname<<endl; 
cout<<"Enter Name of Bridegroom's Brother   : "<<brotherbridegroom<<endl; 
cout<<"Enter Name of Bridegroom's uncle     : "<<unclebridegroom<<endl; 
	
	
	cout<<bridename<<"  " <<"WEDS" <<"  "<<bridegroomname<<endl;
                        	
}
void Card::birthday()
{
	
cout<<"Enter Name of Birthday Boy              :";cin>>birthdayname;
cout<<"Father's Name                           :";cin>>fname;
cout<<"Mother's Name                           :";cin.getline(mname,20);
cout<<"Year                                    :";cin>>byear;
}
void Card::bdisplay() 
{
cout<<"Name of Birthday Boy                    :"<<birthdayname<<endl;
cout<<"Father's Name                           :"<<fname<<endl;
cout<<"Mother's Name                           :"<<mname<<endl;
cout<<"Year                                    :"<<byear<<endl;
	
}
void Card::inagu(){
	cout<<" Enter Your Shop's name            :";cin>>shop;
	cout<<" Contact number                    :";cin>>contact_no;
}
void Card::dinagu()
{
	cout<<"Shop's Name                        :"<<shop<<endl;
	cout<<"Contact number                     :"<<contact_no<<endl;
}
void Card::getData()
{
 cout<<"\n\nEnter Cards Details......\n";
 cout<<"Enter Serial Number No.               : "; cin>>sno;
 cout<<"Enter Full Name of Customer           : "; cin.ignore(); cin.getline(name_customer,20);
 cout<<"Enter Gender (M/F)                    : "; cin>>gender;
 cout<<"Enter Address                         : "; cin.ignore(); cin.getline(address,50);
 cout<<"Number Of Cards Require               :" ;  cin>>card_no;
 cout<<"Enter Type of Card"<<endl;  
 cout<<"\n     Press 1. Marriage Cards";
    cout<<"\n     Press 2. Letter pads";
    cout<<"\n     Press 3. Birthday Invitation Card";
    cout<<"\n     Press 4. Inaguration Cards";
    cout<<"\n     Press 5. Other";
    cout<<"\n     Press 6. Exit";
    cout<<"\n\n   Your Choice - :";
	 cin >> type;
    switch(type)
    {
    case 1:
        marriage();
        break;
    case 2:
    	
        break;
    case 3:
    	birthday();
        break;
    case 4:
    	inagu();
        break;
    case 5:
        break;
    case 6:
        system ("CLS");
        cout<<"\n                                                                                          <<----- Thanks For Visit ------>>                                                             \n";
        exit(0);
    default:
        cout<<"\n\n Invalid Input ";
    }
 
 cout<<"Date of Occasion                      : "; cin>>date1;
 cout<<"Month of Occasion                     : "; cin>>mon1;
 cout<<"year of Occasion                      : "; cin>>yea1;
 cout<<"Enter Occasion Address                : "; cin.ignore(); cin.getline(maddress,50);
	
}


void Card::showData()
{
 cout<<"\n\n.......Cards Details......\n";
cout<<"Serial Number                         : "<<sno<<endl;
cout<<"Full Name                             : "<<name_customer<<endl;
cout<<"Gender                                : "<<gender<<endl;
cout<<"Address                               : "<<address<<endl;
cout<<"Number Of Cards Printed               : "<<card_no<<endl;
cout<<"Type of Card                          : "<<type<<endl;
  
    if(type==1)
    {
    	dmarriage();
    	cout<<"******OCCASION TIMING DETAILS:******"<<endl;
  cout<<"Date in DD/MM/YYYY format :" <<date1<<endl;
   cout<<"Venue of Invitation:"<<maddress<<endl;
  
	}
	else if (type==3)
	{
		bdisplay();
		cout<<"******OCCASION TIMING DETAILS:******"<<endl;
  cout<<"Date in DD/MM/YYYY format  :" <<date1<<endl;
   cout<<"Venue of Invitation:"<<maddress<<endl;
   cout<<"HAPPY BIRTHDAY "<<"  "<<birthdayname<<endl;
  
	}
	else if (type==4)
	{
		dinagu();
		cout<<"******OCCASION TIMING DETAILS:******"<<endl;
  cout<<"Date in DD/MM/YYYY format  :" <<date1<<endl;
   cout<<"Venue of Invitation:"<<maddress<<endl;
  
	}
	
/*
 cout<<"******OCCASION TIMING DETAILS:******"<<endl;
  cout<<"Date :" <<date<<endl;
  cout<<"Month :" <<month<<endl;
   cout<<"year:"<<year<<endl;
   cout<<"Venue of Invitation:"<<maddress<<endl;*/
  
}

void addData()
{
 ofstream fout;
 fout.open("invitesks.txt",ios::binary|ios::out|ios::app);
 s.getData();
 fout.write((char*)&s,sizeof(s));
 fout.close();
 cout<<"\n\nData Successfully Saved to File....\n";
}

void displayData()
{
 ifstream fin;
 fin.open("invitesks.txt",ios::in|ios::binary);
 while(fin.read((char*)&s,sizeof(s)))
 {
  s.showData();
 }
 fin.close();
 cout<<"\n\nData Reading from File Successfully Done....\n";
}

void searchData()
{
 int n, flag=0;
 ifstream fin;
 fin.open("invitesks.txt",ios::in|ios::binary);
 cout<<"Enter Serial Number you want to search : ";
 cin>>n;
 
 while(fin.read((char*)&s,sizeof(s)))
 {
  if(n==s.getAdmno())
  {
   cout<<"The Details of Serial Number No. "<<n<<" shown herewith:\n";
   s.showData();
   flag++;
  }
 }
 fin.close();
 if(flag==0)
  cout<<"The Serial Number "<<n<<" not found....\n\n";
 cout<<"\n\nData Reading from File Successfully Done....\n";
}

void deleteData()
{
 int n, flag=0;
 ifstream fin;
 ofstream fout,tout;

 fin.open("invitesks.txt",ios::in|ios::binary);
 fout.open("Tempcardbsks.txt",ios::out|ios::app|ios::binary);
 tout.open("Trashcardbsks.txt",ios::out|ios::app|ios::binary);
 cout<<"Enter Serial Number you want to move to Trash : ";
 cin>>n;

 while(fin.read((char*)&s,sizeof(s)))
 {
  if(n==s.getAdmno())
  {
   cout<<"The Following Serial Number "<<n<<" has been moved to Trash:\n";
   s.showData();
   tout.write((char*)&s,sizeof(s));
   flag++;
  }
  else
  {
   fout.write((char*)&s,sizeof(s));
  }
 }
 fout.close();
 tout.close();
 fin.close();
 if(flag==0)
  cout<<"The Serial Number "<<n<<" not found....\n\n";
 remove("invitesks.txt");
 rename("tempcardbsks.txt","invitesks.txt");
}

void getTrash()
{
 ifstream fin;
 fin.open("Trashcardbsks.txt",ios::in|ios::binary);
 while(fin.read((char*)&s,sizeof(s)))
 {
  s.showData();
 }
 fin.close();
 cout<<"\n\nData Reading from Trash File Successfully Done....\n";
}

void modifyData()
{
 int n, flag=0, pos;
 fstream fio;

 fio.open("invitesks.txt",ios::in|ios::out|ios::binary);
 
 cout<<"Enter Serial Number you want to Modify : ";
 cin>>n;
 
 while(fio.read((char*)&s,sizeof(s)))
 {
  pos=fio.tellg();
  if(n==s.getAdmno())
  {
   cout<<"The Following Users with serial number "<<n<<" will be modified with new data:\n";
   s.showData();
   cout<<"\n\nNow Enter the New Details Of Users....\n";
   s.getData();
   fio.seekg(pos-sizeof(s));
   fio.write((char*)&s,sizeof(s));
   flag++;
  }
 }
 fio.close();
 
 if(flag==0)
  cout<<"Users with serial number" <<n<<" not found....\n\n";
}

void project()
{
 int ch;
 do
 {
  system("cls");
  cout<<"...............INVITATION CARDS..............\n";
  cout<<"======================================================\n";
  cout<<"0. Exit from Program\n";
  cout<<"1. Write Card Detail to File\n";
  cout<<"2. Read  Order Details From File\n";
  cout<<"3. Search Order Details From File\n";
  cout<<"4. Delete Order From File\n";
  cout<<"5. Get Deleted Records from Trash file\n";
  cout<<"6. Modify Card Details in File\n";
  cout<<"Enter your choice  : ";
  cin>>ch;
  system("cls");
  switch(ch)
  {
   case 1: addData(); break;
   case 2: displayData(); break;
   case 3: searchData(); break;
   case 4: deleteData(); break;
   case 5: getTrash(); break;
   case 6: modifyData(); break;
  }
  system("pause");
 }while(ch);
}
int main()
{
 int i=0;
 string s="NULL01";
 ifstream fin1;
 fin1.open("pwdsks.txt",ios::app);
 while(!fin1.eof())
 {
     fin1>>s[i++];
 }
 fin1.close();
 if(s=="NULL01")
 {
     R:
     cout<<"\n SET your 6 Digit password";
     cin>>s;
     if(s.length()!=6)
     {
     cout<<"\n\n Password should not be NULL01 \n";
     cout<<"\n\n Password Must be 6 or more than 6 digit long\n";
     goto R;
     }
     ofstream fout1;
     fout1.open("pwdsks.txt",ios::app);
     fout1<<s;
     fout1.close();

 }
 else
 {
    int c=0;
    string s1;
    R1:
    c++;
    if(c>5)
    {
        cout<<"\n\n Password Limit Exceed";
        exit(0);
    }
    cout<<"\n\n Enter your 6 Digit password";
    cin>>s1;
    if(s1==s) cout<<"\n\n Welcome\n\n";
    else
    {
        cout<<"\n\n Wrong Password\n\n";
        goto R1;
    }
 }
 project();
}
 
