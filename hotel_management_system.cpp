#include<iostream>
using namespace std;
int main()
{
    int quant;
    int choice;
    //quantity of each
    int Qrooms=0,Qpasta=0,Qburger=0,Qnoodles,Qshake=0,Qchicken_roll=0;
    //no of items sold
    int Srooms=0,Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schicken_roll=0;
    //price of items
    int Total_rooms=0,Total_pasta=0,Total_burger=0,Total_noodles=0,Total_shake=0,Total_chicken_roll=0;
    
    cout<<"\n\t quantity of items we have";
    cout<<"\n Rooms available";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta";
    cin>>Qpasta;
    cout<<"\n Quantity of burger";
    cin>>Qburger;
    cout<<"\n Quantity of noodles";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake";
    cin>>Qshake;
    cout<<"\n Quantity of chicken_roll";
    cin>>Qchicken_roll;

    m:
    cout<<"\n\t\t please select from menu options";
    cout<<"\n\n1) Rooms";
    cout<<"\n\n2) Pasta";
    cout<<"\n\n3) Burger";
    cout<<"\n\n4) Noodles";
    cout<<"\n\n5) Shakes";
    cout<<"\n\n6) Chicken_roll";
    cout<<"\n\n7) Information regarding sales and collections";
    cout<<"\n\n8) Exit";

    cout<<"\n\n Please enter your choice";
    cin>>choice;

    switch(choice)
    {
        case 1:cout<<"\n\n Enter the number of rooms you want";
        cin>>quant;
        if(Qrooms-Srooms>=quant)
        {
            Srooms=Srooms+quant;
            Total_rooms=Total_rooms+quant*1200;
            cout<<"\n\n\t\t"<<quant<<" Room/Rooms have been alloted to you";
        }
        else
        {
            cout<<"\n\tOnly"<<Qrooms-Srooms<<" Rooms remaining in hotel";
        }
        break;


         case 2:cout<<"\n\n Enter the Pasta Quantity you want";
        cin>>quant;
        if(Qpasta-Spasta>=quant)
        {
            Spasta=Spasta+quant;
            Total_pasta=Total_pasta+quant*40;
            cout<<"\n\n\t\t"<<quant<<" Pasta is the order!";
        }
        else
        {
            cout<<"\n\tOnly"<<Qpasta-Spasta<<" pasta remaining in hotel";
        }
        break;


        case 3:cout<<"\n\n Enter the burger Quantity you want";
        cin>>quant;
        if(Qburger-Sburger>=quant)
        {
            Sburger=Sburger+quant;
            Total_burger=Total_burger+quant*80;
            cout<<"\n\n\t\t"<<quant<<" Burger is the order!";
        }
        else
        {
            cout<<"\n\tOnly"<<Qburger-Sburger<<" Burger remaining in hotel";
        }
        break;

        case 4:cout<<"\n\n Enter the Noodles Quantity you want";
        cin>>quant;
        if(Qnoodles-Snoodles>=quant)
        {
            Snoodles=Snoodles+quant;
            Total_noodles=Total_noodles+quant*50;
            cout<<"\n\n\t\t"<<quant<<" Noodles is the order!";
        }
        else
        {
            cout<<"\n\tOnly"<<Qnoodles-Snoodles<<" Noodles remaining in hotel";
        }
        break;

        case 5:cout<<"\n\n Enter the Shake Quantity you want";
        cin>>quant;
        if(Qshake-Sshake>=quant)
        {
            Sshake=Sshake+quant;
            Total_shake=Total_shake+quant*60;
            cout<<"\n\n\t\t"<<quant<<" Shake is the order!";
        }
        else
        {
            cout<<"\n\tOnly"<<Qshake-Sshake<<" Shake remaining in hotel";
        }
        break;

        case 6:cout<<"\n\n Enter the Chicken_roll Quantity you want";
        cin>>quant;
        if(Qchicken_roll-Schicken_roll>=quant)
        {
            Schicken_roll=Schicken_roll+quant;
            Total_chicken_roll=Total_chicken_roll+quant*150;
            cout<<"\n\n\t\t"<<quant<<" Chicken_roll is the order!";
        }
        else
        {
            cout<<"\n\tOnly"<<Qchicken_roll-Schicken_roll<<" Chicken_roll remaining in hotel";
        }
        break;

        case 7:cout<<"\n\tDetails of sales and collections";
        cout<<"\n\n Number of Rooms we had: "<<Qrooms;
        cout<<"\n\n Number of Rooms we gave for rent "<<Srooms;
        cout<<"\n\n Remaining Rooms "<<Qrooms-Srooms;
        cout<<"\n\n Total Rooms collection for the day "<<Total_rooms;

        cout<<"\n\n Number of Pastas we had: "<<Qpasta;
        cout<<"\n\n Number of  Pastas we sold "<<Spasta;
        cout<<"\n\n Remaining pasta "<<Qpasta-Spasta;
        cout<<"\n\n Total pasta collection for the day "<<Total_pasta;

        cout<<"\n\n Number of burger we had: "<<Qburger;
        cout<<"\n\n Number of burgers we sold "<<Sburger;
        cout<<"\n\n Remaining burgers "<<Qburger-Sburger;
        cout<<"\n\n Total burger collection for the day "<<Total_burger;

        cout<<"\n\n Number of noodles we had: "<<Qnoodles;
        cout<<"\n\n Number of noodles we sold "<<Snoodles;
        cout<<"\n\n Remaining noodles "<<Qnoodles-Snoodles;
        cout<<"\n\n Total noodles collection for the day "<<Total_noodles;

        cout<<"\n\n Number of shakes we had: "<<Qshake;
        cout<<"\n\n Number of shakes we sold "<<Sshake;
        cout<<"\n\n Remaining shakes "<<Qshake-Sshake;
        cout<<"\n\n Total shakes collection for the day "<<Total_shake;

        cout<<"\n\n Number of Chicken_rolls we had: "<<Qchicken_roll;
        cout<<"\n\n Number of chicken_rolls  we sold "<<Schicken_roll;
        cout<<"\n\n Remaining chicken_rolls "<<Qchicken_roll-Schicken_roll;
        cout<<"\n\n Total chicken_rolls collection for the day "<<Total_chicken_roll;
        
        break;

        case 8:exit(0);

        default:cout<<"\n please select the numbers from above!";
    }
    goto m;
}