#include<fstream>
#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;

class emp
                {
                    char name[25],gender,fnam[25];
                    int eno;
                    float basic;

                    public:

                    void input()
                    {
                        cout<<"\nName:";
                        cin>>name;

                        cout<<"Gender :";
                        cin>>gender;

                        cout<<"Enter the employee number assigned :";
                        cin>>eno;

                        cout<<"Basic Pay :";
                        cin>>basic;

                   }

                    void output()
                    {
                        cout<<"Name :";
                        puts(name);

                        cout<<"Gender :";
                        cout<<gender;

                        cout<<"\nEmployee number :";
                        cout<<eno;

                        cout<<"\nBasic Pay :";
                        cout<<basic<<endl<<endl;

                   }

                   void write()
                   {
                       emp obj;
                       ofstream f;
                       f.open("emp.txt",ios::app);
                       cout << "\x1b[2J\x1b[1;1H" << flush;
                       obj.input();
                       f.write((char*)&obj,sizeof(obj));
                       f.close();

                   }

                    void read()
                   { cout<<"2";

                       emp obj;
                       ifstream f;
                       f.open("emp.txt");
                       cout << "\x1b[2J\x1b[1;1H" << flush;

                       while(f.read((char*)&obj,sizeof(obj)));
                       obj.output();
                       f.close();

                   }

                };

        int main()
        {
            emp e;
            int a;
            cout << "\x1b[2J\x1b[1;1H" << flush;

        do
	     {

            cout << "\x1b[2J\x1b[1;1H" << flush;
	       cout<<"\n1.Enter biodata";
	       cout<<"\n2.Display biodata";
	       cout<<"\n3.Exit";
	       cout<<"\nEnter your choice"<<endl;

	       cin>>a;

	       switch(a)
	       {
		 case 1:
		 e.write();
		 break;

		 case 2:
		 e.read();
		 break;

	       }
	     }while(a!=3);
	  return 0;


        }
