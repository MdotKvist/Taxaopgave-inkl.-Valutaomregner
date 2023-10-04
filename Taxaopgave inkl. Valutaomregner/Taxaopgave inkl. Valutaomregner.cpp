
#include <iostream>
using namespace std;

float omregn();
int valuta;
float Resultat;
int kurs;
double resultatEfterOmreg;
float visResultat;

int main()
{
    
    float omregning;
    float indtastetKM;
    float opstart = 75;
    float opkastgebyr = 1500;
    float kundenHarKastetOp;
    float prisprkm = 2;
    float udregnetPrisForKørteKMFoerGebyr;
    float sumindenrabat;
    float kastetop;
    float Rabatten;

label:

    cout << "Hvor mange KM vil kunden k\x9Bres? ";
    cin >> indtastetKM;

    string Opkast;
    cout << "Har kunden kastet op ? \n 1) ja \n 2) nej\n";
    cin >> Opkast;

    if (Opkast == "1" || Opkast == "ja") {
        kastetop = 1;
    }
    else if (Opkast == "2" || Opkast == "nej") {
        kastetop = 0;
    }


    if (indtastetKM <= 100) {
        udregnetPrisForKørteKMFoerGebyr = prisprkm * indtastetKM;
        Resultat = udregnetPrisForKørteKMFoerGebyr + opstart;
        if (kastetop == 1) {
            visResultat = Resultat + opkastgebyr;
            cout << visResultat << ",- Kr\n";
            omregn();
        }
        else if (kastetop == 0) {
            //Resultat = visResultat;
            cout << Resultat << ",-Kr\n";
            omregn();
        }
    }

    if (indtastetKM > 100) {
        //Renger indtastet km om til prisen på kørte kilometer
        sumindenrabat = prisprkm * indtastetKM;
        //regner rabatten ud
        Rabatten = sumindenrabat * 10 / 100;
        //trækker rabatten fra beregnet pris
        udregnetPrisForKørteKMFoerGebyr = sumindenrabat - Rabatten;
        // ligger opstart gebyr til prisen
        visResultat = udregnetPrisForKørteKMFoerGebyr + opstart;

        if (kastetop == 1) {
            Resultat = visResultat + opkastgebyr;
            Resultat = visResultat;
            cout << Resultat << ",-Kr\n";
            omregn();
        }
        else if (kastetop == 0) {
            Resultat = visResultat;
            cout << Resultat << ",-Kr\n";
            omregn();
        }

    }
    if (indtastetKM > 150) {
        //Renger indtastet km om til prisen på kørte kilometer
        sumindenrabat = prisprkm * indtastetKM;
        //regner rabatten ud
        Rabatten = sumindenrabat * 20 / 100;
        //trækker rabatten fra beregnet pris
        udregnetPrisForKørteKMFoerGebyr = sumindenrabat - Rabatten;
        // ligger opstart gebyr til prisen
        visResultat = udregnetPrisForKørteKMFoerGebyr + opstart;

        if (kastetop == 1) {
            Resultat = visResultat + opkastgebyr;
            cout << Resultat << ",- Kr\n";
            omregn();
        }
        else if (kastetop == 0) {
            Resultat = visResultat;
            cout << Resultat << ",-Kr\n";
            omregn();
        }

    }


    if (indtastetKM > 200) {
        //Renger indtastet km om til prisen på kørte kilometer
        sumindenrabat = prisprkm * indtastetKM;
        //regner rabatten ud
        Rabatten = sumindenrabat * 30 / 100;
        //trækker rabatten fra beregnet pris
        udregnetPrisForKørteKMFoerGebyr = sumindenrabat - Rabatten;
        // ligger opstart gebyr til prisen
        visResultat = udregnetPrisForKørteKMFoerGebyr + opstart;

        if (kastetop == 1) {
            Resultat = visResultat + opkastgebyr;
            cout << Resultat << ",- Kr\n";
            cout << "Vil du have omregnet prisen til en anden valuta? \n 1) Ja\n 2) nej\n";
            cin >> omregning;
            omregn();
        }
        else if (kastetop == 0) {
            Resultat = visResultat;
            cout << Resultat << ",-Kr\n";
            omregn();
        }
    
    }
}
float omregn() {
    cout << "Vil du have omregner prisen til en anden valuta?\n 1) ja\n 2) nej\n";
    cin >> valuta;

    if (valuta == 1) {
            cout << "Hvilken valuta vil du omregne til? \n1) USD \n2) EUR \n3) NOK \n4) SEK\n";
            cin >> kurs;
        switch (kurs) {
        case 1:      //omregning til USD
            resultatEfterOmreg = visResultat * 100 / 712.43;
            cout << "Prisen er: " << resultatEfterOmreg << ",- USD";
            break;
        case 2:     //omregning til eur
            resultatEfterOmreg = visResultat * 100 / 745.84;
            cout << "Prisen er: " << resultatEfterOmreg << ",- EUR";
            break;
        case 3:     //omregning til NOK
            resultatEfterOmreg = visResultat * 100 / 64.28;
            cout << "Prisen er: " << resultatEfterOmreg << ",- NOK";
            break;
        case 4:     //omregning til SEK
            resultatEfterOmreg = visResultat * 100 / 64.09;
            cout << "Prisen er: " << resultatEfterOmreg << ",- SEK";
            break;
        }
    }
    else {
        cout << "Prisen er: " << Resultat << ",- DKK";
        
    
    }
   


    return 0;
}