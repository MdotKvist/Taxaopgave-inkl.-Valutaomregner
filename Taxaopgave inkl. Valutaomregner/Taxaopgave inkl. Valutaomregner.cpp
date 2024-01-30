
#include <iostream>
using namespace std;

float omregn();
int valuta;
float Resultat;
int kurs;
double resultatEfterOmreg;
double visResultat;

int main()
{
    
    float omregning;
    float indtastetKM;
    float opstart = 75;
    float opkastgebyr = 1500;
    float kundenHarKastetOp;
    float prisprkm = 2;
    float udregnetPrisForK�rteKMFoerGebyr;
    float sumindenrabat;
    float kastetop;
    float Rabatten;

label:

    // indsæt hvor mange km kunden vil køres

    cout << "Hvor mange KM vil kunden k\x9Bres? ";
    cin >> indtastetKM;

    // har kunden kastet op? ja eller nej 

    string Opkast;
    cout << "Har kunden kastet op ? \n 1) ja \n 2) nej\n";
    cin >> Opkast;

    //hvis ja(1) sæt variablens Kastetop til en værdi af 1

    if (Opkast == "1" || Opkast == "ja") {
        kastetop = 1;
    }

    // ellers hvis nej (2) sæt variablen Kastetop til 0

    else if (Opkast == "2" || Opkast == "nej") {
        kastetop = 0;
    }

    // hvis indtastetKM er under 100 skal der ganges pris pr km med indtastet km og plusses opstarts pris

    if (indtastetKM <= 100) {
        udregnetPrisForK�rteKMFoerGebyr = prisprkm * indtastetKM;
        Resultat = udregnetPrisForK�rteKMFoerGebyr + opstart;

        // hvis kastet op lægges der opkastgebyr oven i

        if (kastetop == 1) {
            visResultat = Resultat + opkastgebyr;
            cout << visResultat << ",- Kr\n";
            omregn();
        }

        // ellers bare vis resultat uden opkast gebyr

        else if (kastetop == 0) {
            //Resultat = visResultat;
            cout << Resultat << ",-Kr\n";
            omregn();
        }
    }

    if (indtastetKM > 100) {
        //Renger indtastet km om til prisen p� k�rte kilometer
        sumindenrabat = prisprkm * indtastetKM;
        //regner rabatten ud
        Rabatten = sumindenrabat * 10 / 100;
        //tr�kker rabatten fra beregnet pris
        udregnetPrisForK�rteKMFoerGebyr = sumindenrabat - Rabatten;
        // ligger opstart gebyr til prisen
        visResultat = udregnetPrisForK�rteKMFoerGebyr + opstart;

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
        //Renger indtastet km om til prisen p� k�rte kilometer
        sumindenrabat = prisprkm * indtastetKM;
        //regner rabatten ud
        Rabatten = sumindenrabat * 20 / 100;
        //tr�kker rabatten fra beregnet pris
        udregnetPrisForK�rteKMFoerGebyr = sumindenrabat - Rabatten;
        // ligger opstart gebyr til prisen
        visResultat = udregnetPrisForK�rteKMFoerGebyr + opstart;

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
        //Renger indtastet km om til prisen p� k�rte kilometer
        sumindenrabat = prisprkm * indtastetKM;
        //regner rabatten ud
        Rabatten = sumindenrabat * 30 / 100;
        //tr�kker rabatten fra beregnet pris
        udregnetPrisForK�rteKMFoerGebyr = sumindenrabat - Rabatten;
        // ligger opstart gebyr til prisen
        visResultat = udregnetPrisForK�rteKMFoerGebyr + opstart;

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

    //funktion der kan omregne prisen til en anden valuta
    //spørger om du vil omregne prisen til en anden valuta og indsætter værdien i variabel kaldet valuta

float omregn() {
    cout << "Vil du have omregner prisen til en anden valuta?\n 1) ja\n 2) nej\n";
    cin >> valuta;

    //hvis valuta = 1 (ja) spørger den hvilken valuta der skal omregnes til

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
        return 0;
        
    
    }
   


    return 0;
}