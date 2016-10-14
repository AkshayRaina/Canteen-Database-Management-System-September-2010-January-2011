//************* SAI CANTEEN MANAGEMENT *****************

/*		     &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
		     & COMPUTER SCIENCE PROJECT WORK&
		     &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

	      SOFTWARE FOR THE USE OF SAI CANTEEN MANAGEMENT

////INTRODUCTION////
/////////////////////////////
//NAME:- Akshay Raina
/////////////////////////////
########################
#SAI CANTEEN MANAGEMENT#
########################       

*/

/*## HEADER FILES ##*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
#include<iomanip.h>
#include<dos.h>

main()
 {
  //clrscr();
  unsigned int sum,add,d,i,j,e,f,g,h,k,l,w,x,y,z;
  unsigned int bir=10,per=36,der=110,mur=8,par=110,cor=90,twr=1199, lur=17,tir=107,
	       rer=1499;
  int qubis=1000,abis=0,qupep=1000,apep=0,quden=110,aden=0,qumun=1000,amun=0,quperk=500,aperk=0,qucoc=400,acoc=0,qutit=100,atit=0,qulux=1000,alux=0,qutid=1000,atid=0,quree=300,aree=0;
  unsigned int m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0;
  char name[50],rank[10],pu,c[20],a[15],b[15],ok;
  //clrscr();
 cout<<"\n +++++++++++++++++++++++++++++++++++++++*++++++++++++++++++++++++++++++++++++++";
 cout<<"\n +                                     ***                                    +";
 cout<<"\n +                                    *****                                   +";
 cout<<"\n +                                   *******                                  +";
 cout<<"\n +                                  *********                                 +";
 cout<<"\n +                                 ***********                                +";
 cout<<"\n +                                *************                               +";
 cout<<"\n +                               ***************                              +";
 cout<<"\n +                              *****************                             +";
 cout<<"\n +                             *******************                            +";
 cout<<"\n +                            *********************                           +";
 cout<<"\n +                           ***********************                          +";
 cout<<"\n +                          *************************                         +";
 cout<<"\n +                         ***************************                        +";
 cout<<"\n +                        *****************************                       +";
 cout<<"\n +                       *******************************                      +";
 cout<<"\n +                      *********************************                     +";
 cout<<"\n +                     ***********************************                    +";
 cout<<"\n +                    *************************************                   +";
 cout<<"\n +                   ***************************************                  +";
 cout<<"\n +                  *****************************************                 +";
 cout<<"\n +                 *******************************************                +";
 cout<<"\n +                *********************************************               +";
 cout<<"\n +               ***********************************************              +";
 cout<<"\n +              *************************************************             +";
 cout<<"\n +             *********************WELCOME***********************            +";
 cout<<"\n +              *************************************************             +";
 cout<<"\n +               ***********************************************              +";
 cout<<"\n +                *********************************************               +";
 cout<<"\n +                 *******************************************                +";
 cout<<"\n +                   ***************************************                  +";
 cout<<"\n +                    *************************************                   +";
 cout<<"\n +                     ***********************************                    +";
 cout<<"\n +                      *********************************                     +";
 cout<<"\n +                       *******************************                      +";
 cout<<"\n +                        *****************************                       +";
 cout<<"\n +                         ***************************                        +";
 cout<<"\n +                          *************************                         +";
 cout<<"\n +                           ***********************                          +";
 cout<<"\n +                            *********************                           +";
 cout<<"\n +                             *******************                            +";
 cout<<"\n +                              *****************                             +";
 cout<<"\n +                               ***************                              +";
 cout<<"\n +                                *************                               +";
 cout<<"\n +                                 ***********                                +";
 cout<<"\n +                                  *********                                 +";
 cout<<"\n +                                   *******                                  +";
 cout<<"\n +                                    *****                                   +";
 cout<<"\n +                                     ***                                    +";
 cout<<"\n +++++++++++++++++++++++++++++++++++++++*++++++++++++++++++++++++++++++++++++++";
  getch();
  //clrscr();
  cout<<"\n\n\t      w             w    e e e e e e e e    l            ";
  cout<<"\n\n\t      w      w      w    e                  l            ";
  cout<<"\n\n\t      w     w w     w    e                  l            ";
  cout<<"\n\n\t      w    w   w    w    e e e e e e e e    l            ";
  cout<<"\n\n\t      w   w     w   w    e e e e e e e e    l            ";
  cout<<"\n\n\t      w  w       w  w    e                  l            ";
  cout<<"\n\n\t      w w         w w    e                  l            ";
  cout<<"\n\n\t      w             w    e e e e e e e e    l l l l l l l l";
  cout<<"\n\n   c c c c c c c      o o o o o o o     m               m    e e e e e e e e  ";
  cout<<"\n\n  c                  o             o    m m           m m    e                ";
  cout<<"\n\n  c                  o             o    m  m         m  m    e                ";
  cout<<"\n\n  c                  o             o    m   m       m   m    e e e e e e e e  ";
  cout<<"\n\n  c                  o             o    m    m     m    m    e e e e e e e e  ";
  cout<<"\n\n  c                  o             o    m     m   m     m    e                ";
  cout<<"\n\n  c                  o             o    m      m m      m    e                ";
  cout<<"\n\n   c c c c c c c      o o o o o o o     m       m       m    e e e e e e e e  ";
  getch();
  //clrscr();
  main:;
  cout<<"\n\n\n\t\t\t     SAI CANTEEN MANAGEMENT";
      cout<<"\n\n\n CONSUMER INFORMATION";
      cout<<"\n\n\n\n NAME:";
      gets(name);
      cout<<"\n RANK:";
      gets(rank);
      cout<<"\n SERVICE NO.:";
      cin>>a;
      cout<<"\n SMART CARD NO.:";
      cin>>b;
      cout<<"\n PHONE NO.:";
      cin>>c;
      cout<<"\n ENTER BILL NO.:";
      cin>>i;
      again:;
 //     clrscr();
      cout<<"\n\n\n\n\ 1.MENU & PURCHASE";
      cout<<"\n\n\n\ 2.DETAILS";
      cout<<"\n\n\n\ 3.NEW CUSTOMER";
      cout<<"\n\n\n\ 4.QUANTITY AVAILABLE";
      cout<<"\n\n\n\ 5.EXIT";
      cout<<"\n\n\n ENTER YOUR CHOICE:";
      cin>>d;
     // clrscr();
  switch(d)
  {
     case 1:
      cout<<"\n ITEMS\t\t\t\t\t\t\t      RATE(RS)";
      cout<<"\n\n\n BISCUTE\t\t\t\t\t\t\t\t10  ";
      cout<<"\n\n PEPSODENT\t\t\t\t\t\t\t36";
      cout<<"\n\n DENIM POWDER\t\t\t\t\t\t\t110   ";
      cout<<"\n\n MUNCH\t\t\t\t\t\t\t\t8  ";
      cout<<"\n\n PARK AVENUE PERFUME\t\t\t\t\t\t110   ";
      cout<<"\n\n COCONUT HAIR OIL\t\t\t\t\t\t90  ";
      cout<<"\n\n TITAN WATCH\t\t\t\t\t\t\t1199   ";
      cout<<"\n\n LUX SOAP\t\t\t\t\t\t\t17   ";
      cout<<"\n\n TIDE\t\t\t\t\t\t\t\t107   ";
      cout<<"\n\n REEBOK SHOES\t\t\t\t\t\t\t1499   ";
      start:
      cout<<"\n\n\n DO YOU WANT TO PURCHASE(Y/N):\n";
      cin>>pu;
	if(pu=='Y'||pu=='y')
	{switch(pu)
	 case 1:
//	  clrscr();
	  cout<<"\n\n\n\t\t\t\t PURCHASE LIST";
	  bis:;
	  cout<<"\n BISCUTE(MAX 30): ";
	  cin>>m;

	  if(m>30)
	  {
	   cout<<"Enter Quantity Smaller than 30";
	  getch();
	  goto bis;
	  }
	  else
	  abis=qubis-m;
	  pep:;
	  cout<<"\n PEPSODENT(MAX 2): ";
	  cin>>n;
	   if(n>2)
	  {
	   cout<<"Enter Quantity Smaller than 2";
	  getch();
	  goto pep;
	  }
	  else
	  apep=qupep-n;
	  den:;
	  cout<<"\n DENIM POWDER(MAX 2): ";
	  cin>>o;
	  if(o>2)
	  {
	   cout<<"Enter Quantity Smaller then 2";
	  getch();
	  goto den;
	  }
	  else
	  aden=quden-o;
	  mun:;
	  cout<<"\n MUNCH(MAX 50): ";
	  cin>>p;

	  if(p>50)
	  {
	   cout<<"Enter Quantity Smaller then 50";
	  getch();
	  goto mun;
	  }
	  else
	  amun=qumun-p;
	  park:;
	  cout<<"\n PARK AVENUE PERFUME(MAX 2): ";
	  cin>>q;

	  if(q>2)
	  {
	   cout<<"Enter Quantity Smaller then 2";
	  getch();
	  goto park;
	  }
	  else
	  aperk=quperk-q;
	  coco:;
	  cout<<"\n COCONUT HAIR OIL(MAX 2): ";
	  cin>>r;

	  if(r>2)
	  {
	   cout<<"Enter Quantity Smaller then 2";
	  getch();
	  goto coco;
	  }
	  else
	  acoc=qucoc-r;
	  titan:;
	  cout<<"\n TITAN WATCH(MAX 2): ";
	  cin>>s;

	  if(s>2)
	  {
	   cout<<"Enter Quantity Smaller then 2";
	  getch();

	  goto titan;
	  }
	  else
	  atit=qutit-s;
	  lux:;
	  cout<<"\n LUX SOAP(MAX 10): ";
	  cin>>t;

	  if(t>10)
	  {
	   cout<<"Enter Quantity Smaller then 10";
	  getch();
	  goto lux;
	  }
	  else
	  alux=qulux-t;
	  tid:;
	  cout<<"\n TIDE(MAX 2): ";
	  cin>>u;

	  if(u>2)
	  {
	   cout<<"Enter Quantity Smaller then 2";
	  getch();
	  goto tid;
	  }
	  else
	  atid=qutid-u;
	  ree:;
	  cout<<"\n REEBOK SHOES(MAX 4): ";
	  cin>>v;

	  if(v>4)
	  {
	   cout<<"Enter Quantity Smaller then 4";
	  getch();
	  goto ree;
	  }
	  else
	  aree=quree-v;
	  cout<<"\n";
//	  clrscr();
	  cout<<"\n\n\n\n\n\n\t\t\t\t SAI CANTEEN\n";
	  cout<<"\n\n\t\t\t\t CASH MEMO\n";
	  cout<<"\n\n BILL NO.:"<<i;
	  cout<<"\n\n NAME:";
	  cout<<name;
	  cout<<"\n\n RANK:"<<rank;
	  cout<<"\n\n SERVICE NO.:"<<a;
	  cout<<"\n\n SMART CARD NO.:"<<b;
	  cout<<"\n\n PHONE NO.:"<<c;
	  cout<<"\n\n\n\n\n";
	  cout<<"===============================================================================";
	  cout<<"\n ITEMS"<<setw(40)<<"QUANTITY"<<setw(35)<<"PRICE(Rs.)";
	  cout<<"===============================================================================";
	  if(m>0)
	    cout<<"\n\n BISCUTE"        <<setw(38)<<m<<setw(28)<<"Rs."<<m*bir;
	  if(n>0)
	    cout<<"\n\n PEPSODENT"        <<setw(36)<<n<<setw(28)<<"Rs."<<n*per;
	  if(o>0)
	    cout<<"\n\n DENIM POWDER"     <<setw(33)<<o<<setw(28)<<"Rs."<<o*der;
	  if(p>0)
	    cout<<"\n\n MUNCH"            <<setw(40)<<p<<setw(28)<<"Rs."<<p*mur;
	  if(q>0)
	    cout<<"\n\n PARK AVENUE PERFUME"<<setw(26)<<q<<setw(28)<<"Rs."<<q*par;
	  if(r>0)
	    cout<<"\n\n COCONUT HAIR OIL" <<setw(29)<<r<<setw(28)<<"Rs."<<r*cor;
	  if(s>0)
	    cout<<"\n\n TITAN WATCH"      <<setw(34)<<s<<setw(28)<<"Rs."<<s*twr;
	  if(t>0)
	    cout<<"\n\n LUX SOAP"         <<setw(37)<<t<<setw(28)<<"Rs."<<t*lur;
	  if(u>0)
	    cout<<"\n\n TIDE"             <<setw(41)<<u<<setw(28)<<"Rs."<<u*tir;
	  if(v>0)
	    cout<<"\n\n REEBOK SHOES"     <<setw(33)<<v<<setw(28)<<"Rs."<<v*rer;
		e=m*bir;
		f=n*per;
		g=o*der;
		h=p*mur;
		k=q*par;
		l=r*cor;
		w=s*twr;
		x=t*lur;
		y=u*tir;
		z=v*rer;
		sum=e+f+g+h+k+l+w+x+y+z;
		add=m+n+o+p+q+r+s+t+u+v;
	    cout<<"\n ===============================================================================";
	    cout<<"\n TOTAL:"<<setw(40)<<add<<setw(27)<<"Rs."<<sum;
	    cout<<"\n\n THANK YOU .\t\t\t     VISIT US AGAIN\n";
	getch();
//	clrscr();
	goto again;
	}
	else
	{goto again;

	}


	case 2:
	cout<<"\n\n\n\n\n\t\t\t\t CANTEEN DETAILS";
	cout<<"\n\n TIMING:\n\n 11 AM TO 02 PM \n 03 PM TO 05 PM";
	cout<<"\n\n CANTEEN WILL CLOSED ON TUESDAY";
	cout<<"\n\n GOODS ONCE SOLD WILL NOT BE EXCHANGED/REPLACED";
	cout<<"\n\n TAKE YOUR SMART CARD WITH YOU";
	cout<<"\n\n COLLECT YOUR SMART CARD & BILL AFTER PAYMENT";
	cout<<"\n\n DO NOT BREAK ANY CANTEEN ITEMS";
	getch();
//	clrscr();
	goto again;
	case 3:
	goto main;
	case 4:
	   if(m>0||n>0||o>0||p>0||q>0||r>0||s>0||t>0||u>0||v>0)
	  {cout<<"\n\t\t\t Items Avaliable in Canteen.\n\n\n";
	  cout<<"===============================================================================";
	  cout<<"\n ITEMS"            <<setw(40)<<"QUANTITY";
	  cout<<"\n===============================================================================";
	  cout<<"\n\n\n BISCUTE"          <<setw(38)<<abis;
	  cout<<"\n\n\n PEPSODENT"        <<setw(36)<<apep;
	  cout<<"\n\n\n DENIM POWDER"     <<setw(33)<<aden;
	  cout<<"\n\n\n MUNCH"            <<setw(40)<<amun;
	  cout<<"\n\n\n PARK AVENUE PERFUME"<<setw(26)<<aperk;
	  cout<<"\n\n\n COCONUT HAIR OIL" <<setw(29)<<acoc;
	  cout<<"\n\n\n TITAN WATCH"      <<setw(34)<<atit;
	  cout<<"\n\n\n LUX SOAP"         <<setw(37)<<alux;
	  cout<<"\n\n\n TIDE"             <<setw(41)<<atid;
	  cout<<"\n\n\n REEBOK SHOES"     <<setw(33)<<aree;
	  cout<<"\n*******************************************************************************";
	  getch();
	  goto again;
	  }
	  else
	  {{cout<<"\n\t\t\t Items Avaliable in Canteen.\n\n\n";
	  cout<<"===============================================================================";
	  cout<<"\n ITEMS"            <<setw(40)<<"QUANTITY";
	  cout<<"\n===============================================================================";
	  cout<<"\n\n\n BISCUTE"        <<setw(38)<<qubis;
	  cout<<"\n\n\n PEPSODENT"        <<setw(36)<<qupep;
	  cout<<"\n\n\n DENIM POWDER"     <<setw(33)<<quden;
	  cout<<"\n\n\n MUNCH"            <<setw(40)<<qumun;
	  cout<<"\n\n\n PARK AVENUE PERFUME"<<setw(26)<<quperk;
	  cout<<"\n\n\n COCONUT HAIR OIL" <<setw(29)<<qucoc;
	  cout<<"\n\n\n TITAN WATCH"      <<setw(34)<<qutit;
	  cout<<"\n\n\n LUX SOAP"         <<setw(37)<<qulux;
	  cout<<"\n\n\n TIDE"             <<setw(41)<<qutid;
	  cout<<"\n\n\n REEBOK SHOES"     <<setw(33)<<quree;
	  cout<<"\n\n *******************************************************************************";
	  getch();
	  goto again;

	  }
	case 5:
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t THANKS";
//	sleep(1);
//	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANKS";
//	sleep(1);
//	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANKS";
//	sleep(1);
//	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANKS";
//  sleep(1);
//	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANKS";
//	sleep(1);
//	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANKS";
//	sleep(1);
//	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANKS";
//	sleep(1);
//	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANKS";
//	sleep(1);
//	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANKS\n\n\n\t\t\t\tPress any key to Exit.......";
	getch();
//	exit(0);
	default:
		cout<<"Your choice is wrong";
	getch();
	goto again;
	 }
 //getch();
// return 0;
 }

}
