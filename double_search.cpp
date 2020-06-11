#include<iostream>

int Queue :: double_traverse(int a,int b)
{
    int s1=0,i;
    if(isEmpty())
    {
        cout<<"No Elements Found"<<endl;
        cout<<"1.Back\n2.Main Menu\n3.Exit"<<endl;
        cin>>s1;
        switch(s1)
        {
            case 1:
                return 1;
            case 2:
                return 2;
            case 3:
                return 0;
            default:
                cout<<"Invalid input"<<endl;
        }
    }
    do
    {
        i=head;
    switch(a)
    {
    	case 1:
        	switch(b)
        	{
			case 2:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(15)<<"Period"<<endl;
				while(i<tail && E[i].period!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<setw(15)<<E[i].period<<endl;
					i++;
				}
				break;
			case 3:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(15)<<"Group"<<endl;
				while(i<tail && E[i].group!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<setw(15)<<E[i].group<<endl;
					i++;
				}
				break;
			case 4:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(14)<<"Melting Point"<<endl;
				while(i<tail && E[i].melting_point!=0)
				{
					cout<<setw(7)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<setw(14)<<E[i].melting_point<<endl;
					i++;
				}
				break;
			case 5:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(20)<<"Boiling Point"<<endl;
				while(i<tail && E[i].boiling_point!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<setw(20)<<E[i].boiling_point<<endl;
					i++;
				}
				break;
			case 6:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(20)<<"Density"<<endl;
				while(i<tail && E[i].density!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<setw(20)<<E[i].density<<endl;
					i++;
				}
				break;
			case 7:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(20)<<"Atomic Radius"<<endl;
				while(i<tail && E[i].atm_radius!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<setw(20)<<E[i].atm_radius<<endl;
					i++;
				}
				break;
			case 8:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(20)<<"Specific Heat"<<endl;
				while(i<tail && E[i].specific_heat!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<setw(20)<<E[i].specific_heat<<endl;
					i++;
				}
				break;
			case 9:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(20)<<"Valency"<<endl;
				while(i<tail && E[i].valency!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<setw(20)<<E[i].valency<<endl;
					i++;
				}
				break;
			case 10:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(15)<<"Cost"<<endl;
				while(i<tail && E[i].cost!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<setw(15)<<E[i].cost<<endl;
					i++;
				}
				break;
			case 11:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(10)<<"Block"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<setw(10)<<E[i].block<<endl;
					i++;
				}
				break;
			case 12:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(20)<<"Colour"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<setw(20)<<E[i].colour<<endl;
					i++;
				}
                		break;
          		case 13:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(20)<<"Phase"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<setw(20)<<E[i].phase<<endl;
					i++;
				}
				break;
			case 14:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Mass"<<setw(20)<<"Category"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_mass<<setw(20)<<E[i].category<<endl;
					i++;
				}
				break;
		}
        break;
	case 2:
        	switch(b)
        	{
			case 1:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Period"<<setw(20)<<"Atomic Mass"<<endl;
				while(i<tail && E[i].atm_mass!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].period<<setw(20)<<E[i].atm_mass<<endl;
					i++;
				}
				break;
			case 3:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Period"<<setw(15)<<"Group"<<endl;
				while(i<tail && E[i].group!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].period<<setw(15)<<E[i].group<<endl;
					i++;
				}
				break;
			case 4:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Period"<<setw(14)<<"Melting Point"<<endl;
				while(i<tail && E[i].melting_point!=0)
				{
					cout<<setw(7)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].period<<setw(14)<<E[i].melting_point<<endl;
					i++;
				}
				break;
			case 5:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Period"<<setw(20)<<"Boiling Point"<<endl;
				while(i<tail && E[i].boiling_point!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].period<<E[i].boiling_point<<endl;
					i++;
				}
				break;
			case 6:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Period"<<setw(20)<<"Density"<<endl;
				while(i<tail && E[i].density!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].period<<setw(20)<<E[i].density<<endl;
					i++;
				}
				break;
			case 7:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Period"<<setw(20)<<"Atomic Radius"<<endl;
				while(i<tail && E[i].atm_radius!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].period<<setw(20)<<E[i].atm_radius<<endl;
					i++;
				}
				break;
			case 8:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Period"<<setw(20)<<"Specific Heat"<<endl;
				while(i<tail && E[i].specific_heat!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].period<<setw(20)<<E[i].specific_heat<<endl;
					i++;
				}
				break;
			case 9:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Period"<<setw(20)<<"Valency"<<endl;
				while(i<tail && E[i].valency!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].period<<setw(20)<<E[i].valency<<endl;
					i++;
				}
				break;
			case 10:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Period"<<setw(15)<<"Cost"<<endl;
				while(i<tail && E[i].cost!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].period<<setw(15)<<E[i].cost<<endl;
					i++;
				}
				break;
			case 11:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Period"<<setw(10)<<"Block"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].period<<setw(10)<<E[i].block<<endl;
					i++;
				}
				break;
			case 12:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Period"<<setw(20)<<"Colour"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].period<<setw(20)<<E[i].colour<<endl;
					i++;
				}
                		break;
          		case 13:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Period"<<setw(20)<<"Phase"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].period<<setw(20)<<E[i].phase<<endl;
					i++;
				}
				break;
			case 14:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Period"<<setw(20)<<"Category"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].period<<setw(20)<<E[i].category<<endl;
					i++;
				}
				break;
		}
        break;
	case 3:
        	switch(b)
        	{
			case 1:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Group"<<setw(20)<<"Atomic Mass"<<endl;
				while(i<tail && E[i].atm_mass!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].group<<setw(15)<<E[i].atm_mass<<endl;
					i++;
				}
				break;
			case 2:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Group"<<setw(15)<<"Period"<<endl;
				while(i<tail && E[i].period!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].group<<setw(15)<<E[i].period<<endl;
					i++;
				}
				break;
			case 4:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Group"<<setw(14)<<"Melting Point"<<endl;
				while(i<tail && E[i].melting_point!=0)
				{
					cout<<setw(7)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].group<<setw(14)<<E[i].melting_point<<endl;
					i++;
				}
				break;
			case 5:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Group"<<setw(20)<<"Boiling Point"<<endl;
				while(i<tail && E[i].boiling_point!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].group<<setw(20)<<E[i].boiling_point<<endl;
					i++;
				}
				break;
			case 6:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Group"<<setw(20)<<"Density"<<endl;
				while(i<tail && E[i].density!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].group<<setw(20)<<E[i].density<<endl;
					i++;
				}
				break;
			case 7:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Group"<<setw(20)<<"Atomic Radius"<<endl;
				while(i<tail && E[i].atm_radius!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].group<<setw(20)<<E[i].atm_radius<<endl;
					i++;
				}
				break;
			case 8:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Group"<<setw(20)<<"Specific Heat"<<endl;
				while(i<tail && E[i].specific_heat!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].group<<setw(20)<<E[i].specific_heat<<endl;
					i++;
				}
				break;
			case 9:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Group"<<setw(20)<<"Valency"<<endl;
				while(i<tail && E[i].valency!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].group<<setw(20)<<E[i].valency<<endl;
					i++;
				}
				break;
			case 10:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Group"<<setw(15)<<"Cost"<<endl;
				while(i<tail && E[i].cost!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].group<<setw(15)<<E[i].cost<<endl;
					i++;
				}
				break;
			case 11:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Group"<<setw(10)<<"Block"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].group<<setw(10)<<E[i].block<<endl;
					i++;
				}
				break;
			case 12:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Group"<<setw(20)<<"Colour"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].group<<setw(20)<<E[i].colour<<endl;
					i++;
				}
                		break;
          		case 13:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Group"<<setw(20)<<"Phase"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].group<<setw(20)<<E[i].phase<<endl;
					i++;
				}
				break;
			case 14:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Group"<<setw(20)<<"Category"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].group<<setw(20)<<E[i].category<<endl;
					i++;
				}
				break;
		}
        break;
	case 4:
        	switch(b)
        	{
			case 1:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(14)<<"Melting Point"<<setw(20)<<"Atomic Mass"<<endl;
				while(i<tail && E[i].atm_mass!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(14)<<E[i].melting_point<<setw(20)<<E[i].atm_mass<<endl;
					i++;
				}
				break;
			case 2:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(14)<<"Melting Point"<<setw(15)<<"Period"<<endl;
				while(i<tail && E[i].period!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(14)<<E[i].melting_point<<setw(15)<<E[i].period<<endl;
					i++;
				}
				break;
			case 3:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(14)<<"Melting Point"<<setw(15)<<"Group"<<endl;
				while(i<tail && E[i].group!=0)
				{
					cout<<setw(7)<<i+1<<setw(20)<<E[i].element_name<<setw(14)<<E[i].melting_point<<setw(15)<<E[i].group<<endl;
					i++;
				}
				break;
			case 5:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(14)<<"Melting Point"<<setw(20)<<"Boiling Point"<<endl;
				while(i<tail && E[i].boiling_point!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(14)<<E[i].melting_point<<setw(20)<<E[i].boiling_point<<endl;
					i++;
				}
				break;
			case 6:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(14)<<"Melting Point"<<setw(20)<<"Density"<<endl;
				while(i<tail && E[i].density!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(14)<<E[i].melting_point<<setw(20)<<E[i].density<<endl;
					i++;
				}
				break;
			case 7:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(14)<<"Melting Point"<<setw(20)<<"Atomic Radius"<<endl;
				while(i<tail && E[i].atm_radius!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(14)<<E[i].melting_point<<setw(20)<<E[i].atm_radius<<endl;
					i++;
				}
				break;
			case 8:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(14)<<"Melting Point"<<setw(20)<<"Specific Heat"<<endl;
				while(i<tail && E[i].specific_heat!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(14)<<E[i].melting_point<<setw(20)<<E[i].specific_heat<<endl;
					i++;
				}
				break;
			case 9:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(14)<<"Melting Point"<<setw(20)<<"Valency"<<endl;
				while(i<tail && E[i].valency!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(14)<<E[i].melting_point<<setw(20)<<E[i].valency<<endl;
					i++;
				}
				break;
			case 10:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(14)<<"Melting Point"<<setw(15)<<"Cost"<<endl;
				while(i<tail && E[i].cost!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(14)<<E[i].melting_point<<setw(15)<<E[i].cost<<endl;
					i++;
				}
				break;
			case 11:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(14)<<"Melting Point"<<setw(10)<<"Block"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(14)<<E[i].melting_point<<setw(10)<<E[i].block<<endl;
					i++;
				}
				break;
			case 12:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(14)<<"Melting Point"<<setw(20)<<"Colour"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(14)<<E[i].melting_point<<setw(20)<<E[i].colour<<endl;
					i++;
				}
                		break;
          		case 13:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(14)<<"Melting Point"<<setw(20)<<"Phase"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(14)<<E[i].melting_point<<setw(20)<<E[i].phase<<endl;
					i++;
				}
				break;
			case 14:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(14)<<"Melting Point"<<setw(20)<<"Category"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(14)<<E[i].melting_point<<setw(20)<<E[i].category<<endl;
					i++;
				}
				break;
		}
        break;
	case 5:
        	switch(b)
        	{
			case 1:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Boiling Point"<<setw(20)<<"Atomic Mass"<<endl;
				while(i<tail && E[i].atm_mass!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].boiling_point<<setw(20)<<E[i].atm_mass<<endl;
					i++;
				}
				break;
			case 2:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Boiling Point"<<setw(15)<<"Period"<<endl;
				while(i<tail && E[i].period!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].boiling_point<<setw(15)<<E[i].period<<endl;
					i++;
				}
				break;
			case 3:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Boiling Point"<<setw(15)<<"Group"<<endl;
				while(i<tail && E[i].group!=0)
				{
					cout<<setw(7)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].boiling_point<<setw(15)<<E[i].group<<endl;
					i++;
				}
				break;
			case 4:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Boiling Point"<<setw(14)<<"Melting Point"<<endl;
				while(i<tail && E[i].melting_point!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].boiling_point<<setw(14)<<E[i].melting_point<<endl;
					i++;
				}
				break;
			case 6:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Boiling Point"<<setw(20)<<"Density"<<endl;
				while(i<tail && E[i].density!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].boiling_point<<setw(20)<<E[i].density<<endl;
					i++;
				}
				break;
			case 7:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Boiling Point"<<setw(20)<<"Atomic Radius"<<endl;
				while(i<tail && E[i].atm_radius!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].boiling_point<<setw(20)<<E[i].atm_radius<<endl;
					i++;
				}
				break;
			case 8:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Boiling Point"<<setw(20)<<"Specific Heat"<<endl;
				while(i<tail && E[i].specific_heat!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].boiling_point<<setw(20)<<E[i].specific_heat<<endl;
					i++;
				}
				break;
			case 9:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Boiling Point"<<setw(20)<<"Valency"<<endl;
				while(i<tail && E[i].valency!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].boiling_point<<setw(20)<<E[i].valency<<endl;
					i++;
				}
				break;
			case 10:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Boiling Point"<<setw(15)<<"Cost"<<endl;
				while(i<tail && E[i].cost!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].boiling_point<<setw(15)<<E[i].cost<<endl;
					i++;
				}
				break;
			case 11:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Boiling Point"<<setw(10)<<"Block"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].boiling_point<<setw(10)<<E[i].block<<endl;
					i++;
				}
				break;
			case 12:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Boiling Point"<<setw(20)<<"Colour"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].boiling_point<<setw(20)<<E[i].colour<<endl;
					i++;
				}
                		break;
          		case 13:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Boiling Point"<<setw(20)<<"Phase"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].boiling_point<<setw(20)<<E[i].phase<<endl;
					i++;
				}
				break;
			case 14:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Boiling Point"<<setw(20)<<"Category"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].boiling_point<<setw(20)<<E[i].category<<endl;
					i++;
				}
				break;
		}
        break;
	case 6:
        	switch(b)
        	{
			case 1:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Density"<<setw(20)<<"Atomic Mass"<<endl;
				while(i<tail && E[i].atm_mass!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].density<<setw(20)<<E[i].atm_mass<<endl;
					i++;
				}
				break;
			case 2:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Density"<<setw(15)<<"Period"<<endl;
				while(i<tail && E[i].period!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].density<<setw(15)<<E[i].period<<endl;
					i++;
				}
				break;
			case 3:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Density"<<setw(15)<<"Group"<<endl;
				while(i<tail && E[i].group!=0)
				{
					cout<<setw(7)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].density<<setw(15)<<E[i].group<<endl;
					i++;
				}
				break;
			case 4:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Density"<<setw(14)<<"Melting Point"<<endl;
				while(i<tail && E[i].melting_point!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].density<<setw(14)<<E[i].melting_point<<endl;
					i++;
				}
				break;
			case 5:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Density"<<setw(20)<<"Boiling Point"<<endl;
				while(i<tail && E[i].boiling_point!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].density<<setw(20)<<E[i].boiling_point<<endl;
					i++;
				}
				break;
			case 7:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Density"<<setw(20)<<"Atomic Radius"<<endl;
				while(i<tail && E[i].atm_radius!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].density<<setw(20)<<E[i].atm_radius<<endl;
					i++;
				}
				break;
			case 8:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Density"<<setw(20)<<"Specific Heat"<<endl;
				while(i<tail && E[i].specific_heat!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].density<<setw(20)<<E[i].specific_heat<<endl;
					i++;
				}
				break;
			case 9:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Density"<<setw(20)<<"Valency"<<endl;
				while(i<tail && E[i].valency!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].density<<setw(20)<<E[i].valency<<endl;
					i++;
				}
				break;
			case 10:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Density"<<setw(15)<<"Cost"<<endl;
				while(i<tail && E[i].cost!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].density<<setw(15)<<E[i].cost<<endl;
					i++;
				}
				break;
			case 11:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Density"<<setw(10)<<"Block"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].density<<setw(10)<<E[i].block<<endl;
					i++;
				}
				break;
			case 12:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Density"<<setw(20)<<"Colour"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].density<<setw(20)<<E[i].colour<<endl;
					i++;
				}
                		break;
          		case 13:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Density"<<setw(20)<<"Phase"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].density<<setw(20)<<E[i].phase<<endl;
					i++;
				}
				break;
			case 14:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Density"<<setw(20)<<"Category"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].density<<setw(20)<<E[i].category<<endl;
					i++;
				}
				break;
		}
        break;
	case 7:
        	switch(b)
        	{
			case 1:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Radius"<<setw(20)<<"Atomic Mass"<<endl;
				while(i<tail && E[i].atm_mass!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_radius<<setw(20)<<E[i].atm_mass<<endl;
					i++;
				}
				break;
			case 2:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Radius"<<setw(15)<<"Period"<<endl;
				while(i<tail && E[i].period!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_radius<<setw(15)<<E[i].period<<endl;
					i++;
				}
				break;
			case 3:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Radius"<<setw(15)<<"Group"<<endl;
				while(i<tail && E[i].group!=0)
				{
					cout<<setw(7)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_radius<<setw(15)<<E[i].group<<endl;
					i++;
				}
				break;
			case 4:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Radius"<<setw(14)<<"Melting Point"<<endl;
				while(i<tail && E[i].melting_point!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_radius<<setw(14)<<E[i].melting_point<<endl;
					i++;
				}
				break;
			case 5:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Radius"<<setw(20)<<"Boiling Point"<<endl;
				while(i<tail && E[i].boiling_point!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_radius<<setw(20)<<E[i].boiling_point<<endl;
					i++;
				}
				break;
			case 6:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Radius"<<setw(20)<<"Density"<<endl;
				while(i<tail && E[i].density!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_radius<<setw(20)<<E[i].density<<endl;
					i++;
				}
				break;
			case 8:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Radius"<<setw(20)<<"Specific Heat"<<endl;
				while(i<tail && E[i].specific_heat!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_radius<<setw(20)<<E[i].specific_heat<<endl;
					i++;
				}
				break;
			case 9:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Radius"<<setw(20)<<"Valency"<<endl;
				while(i<tail && E[i].valency!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_radius<<setw(20)<<E[i].valency<<endl;
					i++;
				}
				break;
			case 10:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Radius"<<setw(15)<<"Cost"<<endl;
				while(i<tail && E[i].cost!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_radius<<setw(15)<<E[i].cost<<endl;
					i++;
				}
				break;
			case 11:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Radius"<<setw(10)<<"Block"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_radius<<setw(10)<<E[i].block<<endl;
					i++;
				}
				break;
			case 12:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Radius"<<setw(20)<<"Colour"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_radius<<setw(20)<<E[i].colour<<endl;
					i++;
				}
                		break;
          		case 13:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Radius"<<setw(20)<<"Phase"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_radius<<setw(20)<<E[i].phase<<endl;
					i++;
				}
				break;
			case 14:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Atomic Radius"<<setw(20)<<"Category"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].atm_radius<<setw(20)<<E[i].category<<endl;
					i++;
				}
				break;
		}
        break;
	case 8:
        	switch(b)
        	{
			case 1:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Specific Heat"<<setw(20)<<"Atomic Mass"<<endl;
				while(i<tail && E[i].atm_mass!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].specific_heat<<setw(20)<<E[i].atm_mass<<endl;
					i++;
				}
				break;
			case 2:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Specific Heat"<<setw(15)<<"Period"<<endl;
				while(i<tail && E[i].period!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].specific_heat<<setw(15)<<E[i].period<<endl;
					i++;
				}
				break;
			case 3:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Specific Heat"<<setw(15)<<"Group"<<endl;
				while(i<tail && E[i].group!=0)
				{
					cout<<setw(7)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].specific_heat<<setw(15)<<E[i].group<<endl;
					i++;
				}
				break;
			case 4:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Specific Heat"<<setw(14)<<"Melting Point"<<endl;
				while(i<tail && E[i].melting_point!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].specific_heat<<setw(14)<<E[i].melting_point<<endl;
					i++;
				}
				break;
			case 5:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Specific Heat"<<setw(20)<<"Boiling Point"<<endl;
				while(i<tail && E[i].boiling_point!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].specific_heat<<setw(20)<<E[i].boiling_point<<endl;
					i++;
				}
				break;
			case 6:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Specific Heat"<<setw(20)<<"Density"<<endl;
				while(i<tail && E[i].density!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].specific_heat<<setw(20)<<E[i].density<<endl;
					i++;
				}
				break;
			case 7:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Specific Heat"<<setw(20)<<"Atomic Radius"<<endl;
				while(i<tail && E[i].atm_radius!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].specific_heat<<setw(20)<<E[i].atm_radius<<endl;
					i++;
				}
				break;
			case 9:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Specific Heat"<<setw(20)<<"Valency"<<endl;
				while(i<tail && E[i].valency!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].specific_heat<<setw(20)<<E[i].valency<<endl;
					i++;
				}
				break;
			case 10:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Specific Heat"<<setw(15)<<"Cost"<<endl;
				while(i<tail && E[i].cost!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].specific_heat<<setw(15)<<E[i].cost<<endl;
					i++;
				}
				break;
			case 11:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Specific Heat"<<setw(10)<<"Block"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].specific_heat<<setw(10)<<E[i].block<<endl;
					i++;
				}
				break;
			case 12:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Specific Heat"<<setw(20)<<"Colour"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].specific_heat<<setw(20)<<E[i].colour<<endl;
					i++;
				}
                		break;
          		case 13:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Specific Heat"<<setw(20)<<"Phase"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].specific_heat<<setw(20)<<E[i].phase<<endl;
					i++;
				}
				break;
			case 14:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Specific Heat"<<setw(20)<<"Category"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].specific_heat<<setw(20)<<E[i].category<<endl;
					i++;
				}
				break;
		}
        break;
	case 9:
        	switch(b)
        	{
			case 1:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Valency"<<setw(20)<<"Atomic Mass"<<endl;
				while(i<tail && E[i].atm_mass!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].valency<<setw(20)<<E[i].atm_mass<<endl;
					i++;
				}
				break;
			case 2:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Valency"<<setw(15)<<"Period"<<endl;
				while(i<tail && E[i].period!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].valency<<setw(15)<<E[i].period<<endl;
					i++;
				}
				break;
			case 3:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Valency"<<setw(15)<<"Group"<<endl;
				while(i<tail && E[i].group!=0)
				{
					cout<<setw(7)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].valency<<setw(15)<<E[i].group<<endl;
					i++;
				}
				break;
			case 4:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Valency"<<setw(14)<<"Melting Point"<<endl;
				while(i<tail && E[i].melting_point!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].valency<<setw(14)<<E[i].melting_point<<endl;
					i++;
				}
				break;
			case 5:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Valency"<<setw(20)<<"Boiling Point"<<endl;
				while(i<tail && E[i].boiling_point!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].valency<<setw(20)<<E[i].boiling_point<<endl;
					i++;
				}
				break;
			case 6:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Valency"<<setw(20)<<"Density"<<endl;
				while(i<tail && E[i].density!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].valency<<setw(20)<<E[i].density<<endl;
					i++;
				}
				break;
			case 7:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Valency"<<setw(20)<<"Atomic Radius"<<endl;
				while(i<tail && E[i].atm_radius!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].valency<<setw(20)<<E[i].atm_radius<<endl;
					i++;
				}
				break;
			case 8:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Valency"<<setw(20)<<"Specific Heat"<<endl;
				while(i<tail && E[i].specific_heat!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].valency<<setw(20)<<E[i].specific_heat<<endl;
					i++;
				}
				break;
			case 10:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Valency"<<setw(15)<<"Cost"<<endl;
				while(i<tail && E[i].cost!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].valency<<setw(15)<<E[i].cost<<endl;
					i++;
				}
				break;
			case 11:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Valency"<<setw(10)<<"Block"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].valency<<setw(10)<<E[i].block<<endl;
					i++;
				}
				break;
			case 12:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Valency"<<setw(20)<<"Colour"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].valency<<setw(20)<<E[i].colour<<endl;
					i++;
				}
                		break;
          		case 13:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Valency"<<setw(20)<<"Phase"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].valency<<setw(20)<<E[i].phase<<endl;
					i++;
				}
				break;
			case 14:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Valency"<<setw(20)<<"Category"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].valency<<setw(20)<<E[i].category<<endl;
					i++;
				}
				break;
		}
        break;
	case 10:
        	switch(b)
        	{
			case 1:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Cost"<<setw(20)<<"Atomic Mass"<<endl;
				while(i<tail && E[i].atm_mass!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].cost<<setw(20)<<E[i].atm_mass<<endl;
					i++;
				}
				break;
			case 2:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Cost"<<setw(15)<<"Period"<<endl;
				while(i<tail && E[i].period!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].cost<<setw(15)<<E[i].period<<endl;
					i++;
				}
				break;
			case 3:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Cost"<<setw(15)<<"Group"<<endl;
				while(i<tail && E[i].group!=0)
				{
					cout<<setw(7)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].cost<<setw(15)<<E[i].group<<endl;
					i++;
				}
				break;
			case 4:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Cost"<<setw(14)<<"Melting Point"<<endl;
				while(i<tail && E[i].melting_point!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].cost<<setw(14)<<E[i].melting_point<<endl;
					i++;
				}
				break;
			case 5:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Cost"<<setw(20)<<"Boiling Point"<<endl;
				while(i<tail && E[i].boiling_point!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].cost<<setw(20)<<E[i].boiling_point<<endl;
					i++;
				}
				break;
			case 6:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Cost"<<setw(20)<<"Density"<<endl;
				while(i<tail && E[i].density!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].cost<<setw(20)<<E[i].density<<endl;
					i++;
				}
				break;
			case 7:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Cost"<<setw(20)<<"Atomic Radius"<<endl;
				while(i<tail && E[i].atm_radius!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].cost<<setw(20)<<E[i].atm_radius<<endl;
					i++;
				}
				break;
			case 8:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Cost"<<setw(20)<<"Specific Heat"<<endl;
				while(i<tail && E[i].specific_heat!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].cost<<setw(20)<<E[i].specific_heat<<endl;
					i++;
				}
				break;
			case 9:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Cost"<<setw(20)<<"Valency"<<endl;
				while(i<tail && E[i].valency!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].cost<<setw(20)<<E[i].valency<<endl;
					i++;
				}
				break;
			case 11:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Cost"<<setw(10)<<"Block"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].cost<<setw(10)<<E[i].block<<endl;
					i++;
				}
				break;
			case 12:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Cost"<<setw(20)<<"Colour"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].cost<<setw(20)<<E[i].colour<<endl;
					i++;
				}
                		break;
          		case 13:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Cost"<<setw(20)<<"Phase"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].cost<<setw(20)<<E[i].phase<<endl;
					i++;
				}
				break;
			case 14:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(15)<<"Cost"<<setw(20)<<"Category"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(15)<<E[i].cost<<setw(20)<<E[i].category<<endl;
					i++;
				}
				break;
		}
        break;
	case 11:
        	switch(b)
        	{
			case 1:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(10)<<"Block"<<setw(20)<<"Atomic Mass"<<endl;
				while(i<tail && E[i].atm_mass!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(10)<<E[i].block<<setw(20)<<E[i].atm_mass<<endl;
					i++;
				}
				break;
			case 2:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(10)<<"Block"<<setw(15)<<"Period"<<endl;
				while(i<tail && E[i].period!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(10)<<E[i].block<<setw(15)<<E[i].period<<endl;
					i++;
				}
				break;
			case 3:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(10)<<"Block"<<setw(15)<<"Group"<<endl;
				while(i<tail && E[i].group!=0)
				{
					cout<<setw(7)<<i+1<<setw(20)<<E[i].element_name<<setw(10)<<E[i].block<<setw(15)<<E[i].group<<endl;
					i++;
				}
				break;
			case 4:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(10)<<"Block"<<setw(14)<<"Melting Point"<<endl;
				while(i<tail && E[i].melting_point!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(10)<<E[i].block<<setw(14)<<E[i].melting_point<<endl;
					i++;
				}
				break;
			case 5:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(10)<<"Block"<<setw(20)<<"Boiling Point"<<endl;
				while(i<tail && E[i].boiling_point!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(10)<<E[i].block<<setw(20)<<E[i].boiling_point<<endl;
					i++;
				}
				break;
			case 6:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(10)<<"Block"<<setw(20)<<"Density"<<endl;
				while(i<tail && E[i].density!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(10)<<E[i].block<<setw(20)<<E[i].density<<endl;
					i++;
				}
				break;
			case 7:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(10)<<"Block"<<setw(20)<<"Atomic Radius"<<endl;
				while(i<tail && E[i].atm_radius!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(10)<<E[i].block<<setw(20)<<E[i].atm_radius<<endl;
					i++;
				}
				break;
			case 8:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(10)<<"Block"<<setw(20)<<"Specific Heat"<<endl;
				while(i<tail && E[i].specific_heat!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(10)<<E[i].block<<setw(20)<<E[i].specific_heat<<endl;
					i++;
				}
				break;
			case 9:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(10)<<"Block"<<setw(20)<<"Valency"<<endl;
				while(i<tail && E[i].valency!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(10)<<E[i].block<<setw(20)<<E[i].valency<<endl;
					i++;
				}
				break;
			case 10:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(10)<<"Block"<<setw(15)<<"Cost"<<endl;
				while(i<tail && E[i].cost!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(10)<<E[i].block<<setw(15)<<E[i].cost<<endl;
					i++;
				}
				break;
			case 12:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(10)<<"Block"<<setw(20)<<"Colour"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(10)<<E[i].block<<setw(20)<<E[i].colour<<endl;
					i++;
				}
                		break;
          		case 13:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(10)<<"Block"<<setw(20)<<"Phase"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(10)<<E[i].block<<setw(20)<<E[i].phase<<endl;
					i++;
				}
				break;
			case 14:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(10)<<"Block"<<setw(20)<<"Category"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(10)<<E[i].block<<setw(20)<<E[i].category<<endl;
					i++;
				}
				break;
		}
        break;
	case 12:
        	switch(b)
        	{
			case 1:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Colour"<<setw(20)<<"Atomic Mass"<<endl;
				while(i<tail && E[i].atm_mass!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].colour<<setw(20)<<E[i].atm_mass<<endl;
					i++;
				}
				break;
			case 2:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Colour"<<setw(15)<<"Period"<<endl;
				while(i<tail && E[i].period!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].colour<<setw(15)<<E[i].period<<endl;
					i++;
				}
				break;
			case 3:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Colour"<<setw(15)<<"Group"<<endl;
				while(i<tail && E[i].group!=0)
				{
					cout<<setw(7)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].colour<<setw(15)<<E[i].group<<endl;
					i++;
				}
				break;
			case 4:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Colour"<<setw(14)<<"Melting Point"<<endl;
				while(i<tail && E[i].melting_point!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].colour<<setw(14)<<E[i].melting_point<<endl;
					i++;
				}
				break;
			case 5:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Colour"<<setw(20)<<"Boiling Point"<<endl;
				while(i<tail && E[i].boiling_point!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].colour<<setw(20)<<E[i].boiling_point<<endl;
					i++;
				}
				break;
			case 6:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Colour"<<setw(20)<<"Density"<<endl;
				while(i<tail && E[i].density!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].colour<<setw(20)<<E[i].density<<endl;
					i++;
				}
				break;
			case 7:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Colour"<<setw(20)<<"Atomic Radius"<<endl;
				while(i<tail && E[i].atm_radius!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].colour<<setw(20)<<E[i].atm_radius<<endl;
					i++;
				}
				break;
			case 8:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Colour"<<setw(20)<<"Specific Heat"<<endl;
				while(i<tail && E[i].specific_heat!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].colour<<setw(20)<<E[i].specific_heat<<endl;
					i++;
				}
				break;
			case 9:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Colour"<<setw(20)<<"Valency"<<endl;
				while(i<tail && E[i].valency!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].colour<<setw(20)<<E[i].valency<<endl;
					i++;
				}
				break;
			case 10:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Colour"<<setw(15)<<"Cost"<<endl;
				while(i<tail && E[i].cost!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].colour<<setw(15)<<E[i].cost<<endl;
					i++;
				}
				break;
			case 11:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Colour"<<setw(10)<<"Block"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].colour<<setw(10)<<E[i].block<<endl;
					i++;
				}
                		break;
          		case 13:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Colour"<<setw(20)<<"Phase"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].colour<<setw(20)<<E[i].phase<<endl;
					i++;
				}
				break;
			case 14:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Colour"<<setw(20)<<"Category"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].colour<<setw(20)<<E[i].category<<endl;
					i++;
				}
				break;
		}
        break;
	case 13:
        	switch(b)
        	{
			case 1:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Phase"<<setw(20)<<"Atomic Mass"<<endl;
				while(i<tail && E[i].atm_mass!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].phase<<setw(20)<<E[i].atm_mass<<endl;
					i++;
				}
				break;
			case 2:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Phase"<<setw(15)<<"Period"<<endl;
				while(i<tail && E[i].period!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].phase<<setw(15)<<E[i].period<<endl;
					i++;
				}
				break;
			case 3:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Phase"<<setw(15)<<"Group"<<endl;
				while(i<tail && E[i].group!=0)
				{
					cout<<setw(7)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].phase<<setw(15)<<E[i].group<<endl;
					i++;
				}
				break;
			case 4:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Phase"<<setw(14)<<"Melting Point"<<endl;
				while(i<tail && E[i].melting_point!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].phase<<setw(14)<<E[i].melting_point<<endl;
					i++;
				}
				break;
			case 5:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Phase"<<setw(20)<<"Boiling Point"<<endl;
				while(i<tail && E[i].boiling_point!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].phase<<setw(20)<<E[i].boiling_point<<endl;
					i++;
				}
				break;
			case 6:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Phase"<<setw(20)<<"Density"<<endl;
				while(i<tail && E[i].density!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].phase<<setw(20)<<E[i].density<<endl;
					i++;
				}
				break;
			case 7:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Phase"<<setw(20)<<"Atomic Radius"<<endl;
				while(i<tail && E[i].atm_radius!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].phase<<setw(20)<<E[i].atm_radius<<endl;
					i++;
				}
				break;
			case 8:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Phase"<<setw(20)<<"Specific Heat"<<endl;
				while(i<tail && E[i].specific_heat!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].phase<<setw(20)<<E[i].specific_heat<<endl;
					i++;
				}
				break;
			case 9:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Phase"<<setw(20)<<"Valency"<<endl;
				while(i<tail && E[i].valency!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].phase<<setw(20)<<E[i].valency<<endl;
					i++;
				}
				break;
			case 10:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Phase"<<setw(15)<<"Cost"<<endl;
				while(i<tail && E[i].cost!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].phase<<setw(15)<<E[i].cost<<endl;
					i++;
				}
				break;
			case 11:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Phase"<<setw(10)<<"Block"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].phase<<setw(10)<<E[i].block<<endl;
					i++;
				}
                		break;
          		case 12:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Phase"<<setw(20)<<"Colour"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].phase<<setw(20)<<E[i].colour<<endl;
					i++;
				}
				break;
			case 14:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Phase"<<setw(20)<<"Category"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].phase<<setw(20)<<E[i].category<<endl;
					i++;
				}
				break;
		}
        break;
	case 14:
        	switch(b)
        	{
			case 1:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Category"<<setw(20)<<"Atomic Mass"<<endl;
				while(i<tail && E[i].atm_mass!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].category<<setw(20)<<E[i].atm_mass<<endl;
					i++;
				}
				break;
			case 2:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Category"<<setw(15)<<"Period"<<endl;
				while(i<tail && E[i].period!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].category<<setw(15)<<E[i].period<<endl;
					i++;
				}
				break;
			case 3:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Category"<<setw(15)<<"Group"<<endl;
				while(i<tail && E[i].group!=0)
				{
					cout<<setw(7)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].category<<setw(15)<<E[i].group<<endl;
					i++;
				}
				break;
			case 4:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Category"<<setw(14)<<"Melting Point"<<endl;
				while(i<tail && E[i].melting_point!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].category<<setw(14)<<E[i].melting_point<<endl;
					i++;
				}
				break;
			case 5:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Category"<<setw(20)<<"Boiling Point"<<endl;
				while(i<tail && E[i].boiling_point!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].category<<setw(20)<<E[i].boiling_point<<endl;
					i++;
				}
				break;
			case 6:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Category"<<setw(20)<<"Density"<<endl;
				while(i<tail && E[i].density!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].category<<setw(20)<<E[i].density<<endl;
					i++;
				}
				break;
			case 7:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Category"<<setw(20)<<"Atomic Radius"<<endl;
				while(i<tail && E[i].atm_radius!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].category<<setw(20)<<E[i].atm_radius<<endl;
					i++;
				}
				break;
			case 8:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Category"<<setw(20)<<"Specific Heat"<<endl;
				while(i<tail && E[i].specific_heat!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].category<<setw(20)<<E[i].specific_heat<<endl;
					i++;
				}
				break;
			case 9:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Category"<<setw(20)<<"Valency"<<endl;
				while(i<tail && E[i].valency!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].category<<setw(20)<<E[i].valency<<endl;
					i++;
				}
				break;
			case 10:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Category"<<setw(15)<<"Cost"<<endl;
				while(i<tail && E[i].cost!=0)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].category<<setw(15)<<E[i].cost<<endl;
					i++;
				}
				break;
			case 11:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Category"<<setw(10)<<"Block"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].category<<setw(10)<<E[i].block<<endl;
					i++;
				}
                		break;
          		case 12:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Category"<<setw(20)<<"Colour"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].category<<setw(20)<<E[i].colour<<endl;
					i++;
				}
				break;
			case 13:
				cout<<setw(6)<<"sr.no."<<setw(20)<<"Element Name"<<setw(20)<<"Category"<<setw(20)<<"Phase"<<endl;
				while(i<tail)
				{
					cout<<setw(6)<<i+1<<setw(20)<<E[i].element_name<<setw(20)<<E[i].category<<setw(20)<<E[i].phase<<endl;
					i++;
				}
				break;
        }
        break;
    }
    LA1000: cout<<"\n1.View element details\n2.Back\n3.Main Menu\n4.Exit"<<endl;
			cin>>s1;
			switch(s1)
			{
				case 1:
					cout<<"Enter element number : ";
					cin>>i;
					if(i>tail)
                    {
                        cout<<"Invalid Serial Number"<<endl;
                        goto LA1000;
                    }
					display_atm_no(E[i-1].atm_no);
					system("pause");
					system("cls");
					break;
				case 2:
					return 1;
				case 3:
					return 2;
				case 4:
					return 0;
				default:
					cout<<"Invalid input"<<endl;
			}
		}while(s1!=4);
}





