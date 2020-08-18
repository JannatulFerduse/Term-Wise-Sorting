#include<bits/stdc++.h>

using namespace std;

class office
{
    string name[7]={"Rony","Mashud","Mashiur","Mamun","Rayiaan","Hriddo","Rini"};
    int id[7]={11,22,33,16,38,8,12};
    string position[7]={"Admin","HR","IT","SR","CR","Analyst","DM"};
    int salary[7]={200000,532452,90000,50000,40000,80000,120000};

public:
    void case_show();
    void sort_id();
    void sort_salary();
    void sort_name();
    void sort_position();
    void design();
    int display();
};

void office::design()
{
    cout<<"================================"<<endl;        //////
    cout<<"Name----ID----Position---Salary "<<endl;       ///DESIGN
    cout<<"================================"<<endl<<endl;       //////
}
void office::sort_name()
{
	for(int i=0;i<7;i++)
	{
		for(int j=i;j<7;j++)
		{
            if(name[i]>name[j])
            {
                int temp=id[i];
                string temp1=name[i];                            /////
                string temp2=position[i];                       ///SORTING BY NAME
                int temp3=salary[i];                            //////
                id[i]=id[j];
                name[i]=name[j];
                position[i]=position[j];
                salary[i]=salary[j];
                id[j]=temp;
                name[j]=temp1;
                position[j]=temp2;
                salary[j]=temp3;
            }
		}
	}
}

void office::sort_position()
{
	for(int i=0;i<7;i++)
	{
		for(int j=i;j<7;j++)
		{
            if(position[i]>position[j])
            {
                int temp=id[i];
                string temp1=name[i];                            /////
                string temp2=position[i];                       ///SORTING BY POSITION
                int temp3=salary[i];                            //////
                id[i]=id[j];
                name[i]=name[j];
                position[i]=position[j];
                salary[i]=salary[j];
                id[j]=temp;
                name[j]=temp1;
                position[j]=temp2;
                salary[j]=temp3;
            }
		}
	}
}

void office::sort_id()
{
	for(int i=0;i<7;i++)
	{
		for(int j=i;j<7;j++)
		{
		    if(id[i]>id[j])
            {
                int temp=id[i];
                string temp1=name[i];                            /////
                string temp2=position[i];                       ///SORTING BY ID
                int temp3=salary[i];                            //////
                id[i]=id[j];
                name[i]=name[j];
                position[i]=position[j];
                salary[i]=salary[j];
                id[j]=temp;
                name[j]=temp1;
                position[j]=temp2;
                salary[j]=temp3;
            }
		}
	}
}

void office::sort_salary()
{
    for(int i=0;i<7;i++)
    {
        for(int j=i;j<7;j++)
        {
            if(salary[i]<salary[j])
            {
                int temp=id[i];
                string temp1=name[i];
                string temp2=position[i];                    //////
                int temp3=salary[i];                     ///SORTING BY SALARY
                id[i]=id[j];                             //////
                name[i]=name[j];
                position[i]=position[j];
                salary[i]=salary[j];
                id[j]=temp;
                name[j]=temp1;
                position[j]=temp2;
                salary[j]=temp3;
            }
        }
    }
}

int office::display()
{
    for(int i=0;i<7;i++)                                                            //////
    {                                                                               ///DISPLAY ALL DATA
        cout<<name[i]<<"\t"<<id[i]<<"\t"<<position[i]<<"\t"<<salary[i]<<endl;          //////
    }
    return 0;
}

void office::case_show()
{
    cout<<endl<<"- : Term Wise Sorting - ";
    cout<<endl<<"------------------------";                 //////
    cout<<endl<<"ID Wise             : 1";                  ///CASE SHOW
    cout<<endl<<"Salary Wise         : 2";                  /////
    cout<<endl<<"Position Wise       : 3";
    cout<<endl<<"Name Wise           : 4";
    cout<<endl<<"Exit from Program   : 0";
    cout<<endl<<"Enter Your Choice   : ";
}


int main()
{
	office s;
	int c;
	do
    {
        system("cls");
        s.design();
        s.display();
        s.case_show();
        cin>>c;
        cout<<endl<<endl;
        switch(c)
        {
            case 1:
            s.design();
            s.sort_id();
            s.display();
            break;
        case 2:
            s.design();
            s.sort_salary();
            s.display();
            break;
        case 3:
            s.design();
            s.sort_position();
            s.display();
            break;
        case 4:
            s.design();
            s.sort_name();
            s.display();
            break;
        case 0:
            {
                cout<<"Thank You";
                return 0;
            }
        default:
            cout<<"\nInvalid Choice";
        }
        cout<<endl;
        cout<<"Press enter to continue... ";
        cin.get();
        cin.ignore();

    }while(c<=4);

	return 0;
}
