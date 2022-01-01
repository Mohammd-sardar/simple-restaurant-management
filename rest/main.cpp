#include <iostream>

using namespace std;

int main()
{
    cout<<endl;
    cout<<"               WELCOME TO MY RESTAURANT                 "<<endl;
    cout<<endl;
    cout<<"_________________________________________________________"<<endl;

    //era bo awaya aya kabra daway menu daka yan ba dli nya dachta dare

    cout<<endl;
    cout<<"* bo dawakrdne menu zhmara 1 daxil bka "<<endl;
    cout<<endl;
    cout<<"* bo chwna darawa zhmarayake tr daxil bka  "<<endl;
    cout<<endl;

    //bo daxil krdn pewesta ba int daxil bkay w vareblak ta3ref bkay

    int daxil;
    cout<<"tkaya zhmarayak daxil bka: ";
    cin>>daxil;

    cout<<endl;

    //bo away bzane kabra che daxil krdya if bakardaenen wa agar 1 bw awa hamw eshakanman dawexena new if aka

    if(daxil==1)
    {
        //wa bashtra jare nrx bdayna xwardnakan
        //aw n pesh nawakan mabastm nrxa
        int n_dolma=2000;
        int n_bryane=1500;
        int n_kfta=3000;
        int n_shfta=2500;
        int n_pacha=4000;
        int n_kabab=12000;
        int n_kwba=3500;
        int n_nesk=1000;
        int n_cola_fresh=1000;
        int n_cola=500;
        int n_mastaw=500;
        int n_aw=250;
        int n_cha=250;
        int n_coffee=500;

        cout<<" ____________________ ______________________"<<endl;
        cout<<"|                    |                      |"<<endl;
        cout<<"| 1) kabab 12000     |  2) pacha 4000       |"<<endl;
        cout<<"|____________________|______________________|"<<endl;
        cout<<" ____________________ ______________________"<<endl;
        cout<<"|                    |                      |"<<endl;
        cout<<"| 3) kwba 3500       |  4) kfta 3000        |"<<endl;
        cout<<"|____________________|______________________|"<<endl;
        cout<<" ____________________ ______________________"<<endl;
        cout<<"|                    |                      |"<<endl;
        cout<<"| 5) shfta 2500      |  6) dolma 2000       |"<<endl;
        cout<<"|____________________|______________________|"<<endl;
        cout<<" ____________________ ______________________"<<endl;
        cout<<"|                    |                      |"<<endl;
        cout<<"| 7) bryane 1500     |  8) nesk 1000        |"<<endl;
        cout<<"|____________________|______________________|"<<endl;
        cout<<" ____________________ ______________________"<<endl;
        cout<<"|                    |                      |"<<endl;
        cout<<"| 9) cola_fresh 1000 |  10) cola 500        |"<<endl;
        cout<<"|____________________|______________________|"<<endl;
        cout<<" ____________________ ______________________"<<endl;
        cout<<"|                    |                      |"<<endl;
        cout<<"| 11) mastaw 500     |  12) coffee 500      |"<<endl;
        cout<<"|____________________|______________________|"<<endl;
        cout<<" ____________________ ______________________"<<endl;
        cout<<"|                    |                      |"<<endl;
        cout<<"| 13) cha 250        |  14) aw  250         |"<<endl;
        cout<<"|____________________|______________________|"<<endl;
        cout<<endl;

        //aw stepay era bo awaya bzanen kabra chand jar dawa daka wata daway chand sht daka

        int zh_dawakrdn;
        cout<<"* barez daway chand babat dakayt lawanay sarawa ? : ";
        cin>>zh_dawakrdn;

        //pewestman baw vareblana dabe
        int babat;
        int nrx;
        int chand_lawbabata;
        int kotanrx_lawbabata;
        int result=0;
        int dawakare=1;
        cout<<endl;

        for(int i=1;i<=zh_dawakrdn;i++)
        {
              cout<<"----------------------------------------------------------------------"<<endl;
            cout<<"dawakare "<<dawakare<<" : tkaya zhmaray aw babata daxil bka ka la menu nwsrawa: ";
            cin>>babat;
            cout<<endl;
            switch(babat)
            {
            case 1:
                cout<<" Aw xwardnay dawat krdwa bretea la kabab"<<endl;
                cout<<" nrxakashe bretea la: "<<n_kabab<<endl;
                cout<<endl;
                cout<<"tkaya chand danat dawe law babata : ";
                cin>>chand_lawbabata;
                nrx=n_kabab;
                kotanrx_lawbabata=nrx*chand_lawbabata;
                break;

            case 2:
                 cout<<" Aw xwardnay dawat krdwa bretea la pacha"<<endl;
                cout<<" nrxakashe bretea la: "<<n_pacha<<endl;
                cout<<endl;
                cout<<"tkaya chand danat dawe law babata : ";
                cin>>chand_lawbabata;
                nrx=n_pacha;
                kotanrx_lawbabata=nrx*chand_lawbabata;
                break;

            case 3:
                cout<<" Aw xwardnay dawat krdwa bretea la kwba"<<endl;
                cout<<" nrxakashe bretea la: "<<n_kwba<<endl;
                cout<<endl;
                cout<<"tkaya chand danat dawe law babata : ";
                cin>>chand_lawbabata;
                nrx=n_kwba;
                kotanrx_lawbabata=nrx*chand_lawbabata;
                break;

            case 4:
                cout<<" Aw xwardnay dawat krdwa bretea la kfta"<<endl;
                cout<<" nrxakashe bretea la: "<<n_kfta<<endl;
                cout<<endl;
                cout<<"tkaya chand danat dawe law babata : ";
                cin>>chand_lawbabata;
                nrx=n_kfta;
                kotanrx_lawbabata=nrx*chand_lawbabata;
                break;

            case 5:
                cout<<" Aw xwardnay dawat krdwa bretea la shfta"<<endl;
                cout<<" nrxakashe bretea la: "<<n_shfta<<endl;
                cout<<endl;
                cout<<"tkaya chand danat dawe law babata : ";
                cin>>chand_lawbabata;
                nrx=n_shfta;
                kotanrx_lawbabata=nrx*chand_lawbabata;
                break;

            case 6:
                cout<<" Aw xwardnay dawat krdwa bretea la dolma"<<endl;
                cout<<" nrxakashe bretea la: "<<n_dolma<<endl;
                cout<<endl;
                cout<<"tkaya chand danat dawe law babata : ";
                cin>>chand_lawbabata;
                nrx=n_dolma;
                kotanrx_lawbabata=nrx*chand_lawbabata;
                break;

            case 7:
                cout<<" Aw xwardnay dawat krdwa bretea la bryane"<<endl;
                cout<<" nrxakashe bretea la: "<<n_bryane<<endl;
                cout<<endl;
                cout<<"tkaya chand danat dawe law babata : ";
                cin>>chand_lawbabata;
                nrx=n_bryane;
                kotanrx_lawbabata=nrx*chand_lawbabata;
                break;

            case 8:
                cout<<" Aw xwardnay dawat krdwa bretea la nesk"<<endl;
                cout<<" nrxakashe bretea la: "<<n_nesk<<endl;
                cout<<endl;
                cout<<"tkaya chand danat dawe law babata : ";
                cin>>chand_lawbabata;
                nrx=n_nesk;
                kotanrx_lawbabata=nrx*chand_lawbabata;
                break;

            case 9:
                cout<<" Aw xwardnay dawat krdwa bretea la cola_fresh"<<endl;
                cout<<" nrxakashe bretea la: "<<n_cola_fresh<<endl;
                cout<<endl;
                cout<<"tkaya chand danat dawe law babata : ";
                cin>>chand_lawbabata;
                nrx=n_cola_fresh;
                kotanrx_lawbabata=nrx*chand_lawbabata;
                break;

            case 10:
                cout<<" Aw xwardnay dawat krdwa bretea la cola"<<endl;
                cout<<" nrxakashe bretea la: "<<n_cola<<endl;
                cout<<endl;
                cout<<"tkaya chand danat dawe law babata : ";
                cin>>chand_lawbabata;
                nrx=n_cola;
                kotanrx_lawbabata=nrx*chand_lawbabata;
                break;

            case 11:
                cout<<" Aw xwardnay dawat krdwa bretea la mastaw"<<endl;
                cout<<" nrxakashe bretea la: "<<n_mastaw<<endl;
                cout<<endl;
                cout<<"tkaya chand danat dawe law babata : ";
                cin>>chand_lawbabata;
                nrx=n_mastaw;
                kotanrx_lawbabata=nrx*chand_lawbabata;
                break;

            case 12:
                cout<<" Aw xwardnay dawat krdwa bretea la coffee"<<endl;
                cout<<" nrxakashe bretea la: "<<n_coffee<<endl;
                cout<<endl;
                cout<<"tkaya chand danat dawe law babata : ";
                cin>>chand_lawbabata;
                nrx=n_coffee;
                kotanrx_lawbabata=nrx*chand_lawbabata;
                break;

            case 13:
                cout<<" Aw xwardnay dawat krdwa bretea la cha"<<endl;
                cout<<" nrxakashe bretea la: "<<n_cha<<endl;
                cout<<endl;
                cout<<"tkaya chand danat dawe law babata : ";
                cin>>chand_lawbabata;
                nrx=n_cha;
                kotanrx_lawbabata=nrx*chand_lawbabata;
                break;

            case 14:
                cout<<" Aw xwardnay dawat krdwa bretea la aw"<<endl;
                cout<<" nrxakashe bretea la: "<<n_aw<<endl;
                cout<<endl;
                cout<<"tkaya chand danat dawe law babata : ";
                cin>>chand_lawbabata;
                nrx=n_aw;
                kotanrx_lawbabata=nrx*chand_lawbabata;
                break;

            default:
                cout<<"error";



            }
            result+=kotanrx_lawbabata;
            dawakare++;

        }
        cout<<"__________________________________________________________________"<<endl;

        cout<<"koy paraka bretea la : "<<result;
        cout<<endl;
        cout<<"supas ka emat halbzhard ";

    }
    else
        cout<<"baxerche sarchawm ";



    return 0;
}
