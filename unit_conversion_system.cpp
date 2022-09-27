#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;



class Meters {
    private:
        int primary;
        
    public:
    
        void setPrimary(int pr){
            primary = pr;
        }
        int getPrimary(){
            return primary;
        }
        float getMMtoM(){
            return primary*0.001;
        }
        float getCMtoM(){
            return primary*0.01;
        }
        float getKMtoM(){
            return primary*1000;
        }
};


class Kelvin{
    private:
        int primary;
    public:
        void setPrimary(int pr){
            primary = pr;
        }
        int getPrimary(){
            return primary;
        }
        float getCtoK(){
            return primary+273.15;
        }
        float getFtoK(){
            return (((primary-32)*5)/9)+273.15;
        }
};


class Amperes{
    private:
        int primary;
    public:
        void setPrimary(int pr){
            primary = pr;
        }
        int getPrimary(){
            return primary;
        }
        float getMicroAtoA(){
            return primary*0.000001;
        }
        float getMegaAtoA(){
            return primary*1000000 ;
        }
};


class Seconds{
    private:
        int primary;
    public:
        void setPrimary(int pr){
            primary = pr;
        }
        int getPrimary(){
            return primary;
        }
        float getMinutesToSeconds(){
            return primary*60;
        }
        float getHoursToSeconds(){
            return primary*3600 ;
        }
};

class Moles{
    private:
        int primary;
    public:
        void setPrimary(int pr){
            primary = pr;
        }
        int getPrimary(){
            return primary;
        }
        float getKMolesToMoles(){
            return primary*1000;
        }

};


class Kilogram{
    private:
        int primary;
    public:
        void setPrimary(int pr){
            primary = pr;
        }
        int getPrimary(){
            return primary;
        }
        float getGramsToKG(){
            return primary*0.001;
        }
        float getTonesToKG(){
            return primary*1000 ;
        }
};


class Candela{
    private:
        int primary, apex_angle;
    public:
        void setPrimary(int pr){
            primary = pr;
        }
        void setApex_angle(int ap){
            apex_angle = ap;
        }
        int getPrimary(){
            return primary;
        }
        int getApex_angle(){
            return apex_angle;
        }
        float getLumensToCandela(){
            return primary/(2*M_PI*(1-cos(apex_angle/2)));
        }

};

class AmericanMass{
    private:
        int primary;
    public:
        void setPrimary(int pr){
            primary = pr;
        }
        int getPrimary(){
            return primary;
        }
        float getOuncesToKG(){
            return primary*0.02834;
        }
        float getPoundsToKG(){
            return primary*0.4535 ;
        }
    
};


class AmericanLength{
    private:
        int primary;
    public:
        void setPrimary(int pr){
            primary = pr;
        }
        int getPrimary(){
            return primary;
        }
        float getMilesToKM(){
            return primary*1.6093;
        }
        float getYardsToKM(){
            return primary*0.00091 ;
        }
    
};


class AmericanVolume{
    private:
        int primary;
    public:
        void setPrimary(int pr){
            primary = pr;
        }
        int getPrimary(){
            return primary;
        }
        float getPintsToLitres(){
            return primary*0.47317;
        }
        float getGallonsToLitres(){
            return primary*3.7854 ;
        }
};


void MenuDisplay(){
        printf("\n########################################################################\n");
        printf("\n Pick a conversion system to get possible international units\n");
        printf("1. Distance (Meter)\n");
        printf("2. Temperature (Kelvin)\n");
        printf("3. Electric current (Ampere)\n");
        printf("4. Time (second)\n");
        printf("5. Amount of substance (mole)\n");
        printf("6. Mass (kilogram)\n");
        printf("7. Intensity of Light (candela)\n");
        printf("\nBonus for the Americans:\n");
        printf("8. American mass units to IS\n");
        printf("9. American length units to IS\n");
        printf("10. American volume units to IS\n");
        printf("11. Exit\n");
        printf("\n\n");
    }

int main()
{
    MenuDisplay();
    Meters Meters1;
    Kelvin Kelvin1;
    Amperes Amperes1;
    Seconds Seconds1;
    Moles Moles1;
    Kilogram Kilogram1;
    Candela Candela1;
    AmericanMass AmericanMass1;
    AmericanLength AmericanLength1;
    AmericanVolume AmericanVolume1;
    
    
    
    
    
    
    int menu,primary;
    cin>> menu;
    
    
    bool Flag=true;
    while (Flag){
        switch(menu){
            MenuDisplay();
            case 1:
                cout<<"Input any integer unit value\n";
                cin>>primary;
                Meters1.setPrimary(primary);
                cout<< Meters1.getPrimary()<<"mm="<<Meters1.getMMtoM()<<"m"<<endl;
                cout<< Meters1.getPrimary()<<"cm="<<Meters1.getCMtoM()<<"m"<<endl;
                cout<< Meters1.getPrimary()<<"km="<<Meters1.getKMtoM()<<"m"<<endl;
                cout<<"\nInput new menu option\n";
                cin>>menu;
                break;
            case 2:
                cout<<"Input any integer unit value\n";
                cin>>primary;
                Kelvin1.setPrimary(primary);
                cout<< Kelvin1.getPrimary()<<"*C="<<Kelvin1.getCtoK()<<"*K"<<endl;
                cout<< Kelvin1.getPrimary()<<"*F="<<Kelvin1.getFtoK()<<"*K"<<endl;
                cout<<"\nInput new menu option\n";
                cin>>menu;
                break;
            case 3:
                cout<<"Input any integer unit value\n";
                cin>>primary;
                Amperes1.setPrimary(primary);
                cout<< Amperes1.getPrimary()<<"MicroAmperes="<<Amperes1.getMicroAtoA()<<"A"<<endl;
                cout<< Amperes1.getPrimary()<<"MegaAmperes="<<Amperes1.getMegaAtoA()<<"A"<<endl;
                cout<<"\nInput new menu option\n";
                cin>>menu;
                break;
            case 4:
                cout<<"Input any integer unit value\n";
                cin>>primary;
                Seconds1.setPrimary(primary);
                cout<< Seconds1.getPrimary()<<"min="<<Seconds1.getMinutesToSeconds()<<"s"<<endl;
                cout<< Seconds1.getPrimary()<<"h="<<Seconds1.getHoursToSeconds()<<"s"<<endl;
                cout<<"\nInput new menu option\n";
                cin>>menu;
                break;
            case 5:
                cout<<"Input any integer unit value\n";
                cin>>primary;
                Moles1.setPrimary(primary);
                cout<<Moles1.getPrimary()<<"Kmol="<<Moles1.getKMolesToMoles()<<"moles"<<endl;
                cout<<"\nInput new menu option\n";
                cin>>menu;
                break;
            case 6:
                cout<<"Input any integer unit value\n";
                cin>>primary;
                Kilogram1.setPrimary(primary);
                cout<<Kilogram1.getPrimary()<<"grams="<<Kilogram1.getGramsToKG()<<"kg"<<endl;
                cout<<Kilogram1.getPrimary()<<"tons="<<Kilogram1.getTonesToKG()<<"kg"<<endl;
                cout<<"\nInput new menu option\n";
                cin>>menu;
                break;
            case 7:
                int angle;
                cout<<"Input any integer unit value\n";
                cin>>primary;
                cout<<"Input any integer apex angle value\n";
                cin>>angle;
                Candela1.setPrimary(primary);
                Candela1.setApex_angle(angle);
                cout<<Candela1.getPrimary()<<" flux in lumens and "<<Candela1.getApex_angle()<<" apex angle(degrees) ="<<Candela1.getLumensToCandela()<<"cd"<<endl;
                cout<<"\nInput new menu option\n";
                cin>>menu;
                break;
            case 8:
                cout<<"Input any integer unit value\n";
                cin>>primary;
                AmericanMass1.setPrimary(primary);
                cout<<AmericanMass1.getPrimary()<<"oz="<<AmericanMass1.getOuncesToKG()<<"kg"<<endl;
                cout<<AmericanMass1.getPrimary()<<"lbs="<<AmericanMass1.getPoundsToKG()<<"kg"<<endl;
                cout<<"\nInput new menu option\n";
                cin>>menu;
                break;
            case 9:
                cout<<"Input any integer unit value\n";
                cin>>primary;
                AmericanLength1.setPrimary(primary);
                cout<<AmericanLength1.getPrimary()<<"miles="<<AmericanLength1.getMilesToKM()<<"km"<<endl;
                cout<<AmericanLength1.getPrimary()<<"yards="<<AmericanLength1.getYardsToKM()<<"km"<<endl;
                cout<<"\nInput new menu option\n";
                cin>>menu;
                break;
            case 10:
                cout<<"Input any integer unit value\n";
                cin>>primary;
                AmericanVolume1.setPrimary(primary);
                cout<<AmericanVolume1.getPrimary()<<"pints="<<AmericanVolume1.getPintsToLitres()<<"l"<<endl;
                cout<<AmericanVolume1.getPrimary()<<"gallons="<<AmericanVolume1.getGallonsToLitres()<<"l"<<endl;
                cout<<"\nInput new menu option\n";
                cin>>menu;
                break;
            case 11:
                Flag=false;
            default:
                cout<<"No such menu option.";
            
             }
        
        }
    
    
    
    return 0;
    
}
