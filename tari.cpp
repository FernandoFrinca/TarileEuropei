#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<windows.h>
using namespace std;
struct euro
{
char nume[101];
char agricultura[101];
char tari[101];
long pop;
int y;
int z;
euro *urm;
};
euro *u,*p,*c,a;
char d[101];
int i,j,n,x,x1,x2,x3,x4,x5,x6,m,w,x7,x8,x9,x10,t;
long max,min;
char aux[101];
fstream f1("mari.txt",ios::in),f2("agricultura.txt",ios::in),f3("clima.txt",ios::in),f4("tari.txt",ios::in);
void creare1()
{
    f1>>n;
    c=new euro;
    f1>>c->nume;
    p=c;
    u=c;
    for(i=2;i<=n;i++)
    {
        c=new euro;
        f1>>c->nume;
        c->urm=0;
        u->urm=c;
        u=c;
    }
}
void afisare1()
{
 c=p;
    while(c)
    {
        cout<<"Marea "<<c->nume<<endl;
        c=c->urm;
    }
}
void sortare1()
{
    int s=0;
    while(!s)
    {c=p;
    s=1;
    while(c->urm)
        {if(strcmp(c->nume,c->urm->nume)>0)
            {s=0;
            strcpy(d,c->nume);
            strcpy(c->nume,c->urm->nume);
            strcpy(c->urm->nume,d);}
            c=c->urm;}}
}
void creare2()
{
    c=new euro;
    f2>>c->agricultura;
    p=c;
    u=c;
    for(i=2;i<=10;i++)
    {
        c=new euro;
        f2>>c->agricultura;
        c->urm=0;
        u->urm=c;
        u=c;
    }
}
void afisare2()
{
 c=p;
    while(c)
    {
        cout<<c->agricultura<<" "<<endl;
        c=c->urm;
    }
}
void sortare2()
{
    int s=0;
    while(!s)
    {c=p;
    s=1;
    while(c->urm)
        {if(strcmp(c->agricultura,c->urm->agricultura)<0)
            {s=0;
            strcpy(d,c->agricultura);
            strcpy(c->agricultura,c->urm->agricultura);
            strcpy(c->urm->agricultura,d);}
            c=c->urm;}}
}
void creare3()
{
    euro *c=new euro;
    f4>>c->tari;
    f4>>c->pop;
    p=c;
    u=c;
    do
    {
        c=new euro;
        f4>>c->tari;
        f4>>c->pop;
        c->urm=0;
        u->urm=c;
        u=c;
    } while(!f4.eof());
}
void sortare3()
{
    int t=0; char q[100]; long aux=0;
    while(!t)
    {
        euro *c=p;
        t=1;
        while(c->urm)
        {
            if(c->pop>c->urm->pop)
            {t=0;
            aux=c->pop;
            c->pop=c->urm->pop;
            c->urm->pop=aux;
            strcpy(q,c->tari);
            strcpy(c->tari,c->urm->tari);
            strcpy(c->urm->tari,q);

            }
            c=c->urm;
        }
        }
}
  void sortare4()
{
    int t=0; char q[100]; long aux=0;
    while(!t)
    {
        euro *c=p;
        t=1;
        while(c->urm)
        {
            if(c->pop<c->urm->pop)
            {t=0;
            aux=c->pop;
            c->pop=c->urm->pop;
            c->urm->pop=aux;
            strcpy(q,c->tari);
            strcpy(c->tari,c->urm->tari);
            strcpy(c->urm->tari,q);

            }
            c=c->urm;
        }
        }
}
void afisare3()
{
    euro *c=p;
    while(c)
    {
        cout<<c->tari<<" are "<<c->pop<<" locuitori."<<endl;
        c=c->urm;
    }
 }
int main()
{
 SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
 cout<<" _____                                    "<<endl;
 cout<<"|  ___|                                   "<<endl;
 cout<<"| |__  _   _  _ __   ___    _ __     __ _ "<<endl;
 cout<<"|  __|| | | || '__| ( _ )  | '_ )   ( _` |"<<endl;
 cout<<"| |___| |_| || |   ( |_| ) | |_| ) ( |_| |"<<endl;
 cout<<"|_____|_____||_|    (___)  | .__)   (__,_|"<<endl;
 cout<<"                           | |            "<<endl;
 cout<<"                           |_|            "<<endl;
 cout<<endl<<endl;
 SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 30);
 cout<<"             *             "<<endl;
 cout<<"          *     *          "<<endl;
 cout<<"        *         *        "<<endl;
 cout<<"       *           *       "<<endl;
 cout<<"        *         *        "<<endl;
 cout<<"          *     *          "<<endl;
 cout<<"             *             "<<endl;
 SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<endl<<endl;
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 4);
cout<<"MENIU"<<endl;
cout<<"1.Tarile Europei."<<endl;
cout<<"2.Marile."<<endl;
cout<<"3.Agricultura."<<endl;
cout<<"4.Zone climatice."<<endl;
cout<<"5.Populatie."<<endl;
cout<<"6.Romania."<<endl;
cout<<"7.Oprirea programului."<<endl;
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<endl<<"Alegeti optiunea dorita:";
cin>>x;
while(x!=7)
{
switch(x)
{
case 1:
{
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 3);
cout<<"Tarile Europei:"<<endl;
cout<<"1.Albania.                   2.Andorra.                         3.Armenia."<<endl;
cout<<"4.Austria.                   5.Azerbaidjan.                     6.Belarus."<<endl;
cout<<"7.Belgia.                    8.Bosnia si Herțegovina.          9.Bulgaria."<<endl;
cout<<"10.Cehia.                    11.Cipru.                          12.Croatia."<<endl;
cout<<"13.Danemarca.                14.Elvetia.                        15.Estonia."<<endl;
cout<<"16.Finlanda.                 17.Franta.                         18.Georgia."<<endl;
cout<<"19.Germania.                 20.Grecia.                         21.Irlanda."<<endl;
cout<<"22.Islanda.                  23.Italia.                         24.Kazahstan."<<endl;
cout<<"25.Letonia.                  26.Liechtenstein.                  27.Lituania."<<endl;
cout<<"28.Luxemburg.                29.Macedonia.                      30.Malta."<<endl;
cout<<"31.Republica Moldova.        32.Monaco.                         33.Muntenegru."<<endl;
cout<<"34.Norvegia.                 35.Olanda.                         36.Polonia."<<endl;
cout<<"37.Portugalia.               38.Regatul Unit.                   39.Romania."<<endl;
cout<<"40.Rusia.                    41.San Marino.                     42.Serbia."<<endl;
cout<<"43.Slovacia.                 44.Slovenia.                       45.Spania."<<endl;
cout<<"46.Suedia.                   47.Turcia.                         48.Ucraina."<<endl;
cout<<"49.Ungaria.                  50.Vatican."<<endl;
cout<<endl;
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<"Alegeti varianta dorita pt. a afla mai multe:"<<endl;
cin>>w;
while(w!=51)
{
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 6);
switch(w)
{
case 1:
{
cout<<"Albania"<<endl;
cout<<"Capitala:Tirana"<<endl;
cout<<"Sistem politic:Republica"<<endl;
cout<<"Conducere:Presedinte Bujar Nishani"<<endl;
cout<<"Limba oficiala:albaneza"<<endl;
cout<<"Suprafata:28.748 km*km"<<endl;
cout<<"Numarul de locuitori:2.831.741"<<endl;
cout<<"Moneda:Lek albanez";
}break;
case 2:
{
cout<<"Andorra"<<endl;
cout<<"Capitala:Andorra la Vella"<<endl;
cout<<"Sistem politic:Co-Principat Parlamentar"<<endl;
cout<<"Conducere:Conprint episcopal Joan Enric Sicilia, Conprint francez Francois Hollande"<<endl;
cout<<"Limba oficiala:catalana"<<endl;
cout<<"Suprafata:476.63 km*km"<<endl;
cout<<"Numarul de locuitori:85.082"<<endl;
cout<<"Moneda:Euro";
}break;
case 3:
{
cout<<"Armenia"<<endl;
cout<<"Capitala:Erevan"<<endl;
cout<<"Sistem politic:Republica Semiprezidentiala"<<endl;
cout<<"Conducere:Presedinte Serzh Sargsyam"<<endl;
cout<<"Limba oficiala:armeana"<<endl;
cout<<"Suprafata:29.743 km*km"<<endl;
cout<<"Numarul de locuitori:3.018.854"<<endl;
cout<<"Moneda:Dram armean";
}break;
case 4:
{
cout<<"Austria"<<endl;
cout<<"Capitala:Viena"<<endl;
cout<<"Sistem politic:Republica Federala"<<endl;
cout<<"Conducere:Presedinte Heinz Fischer"<<endl;
cout<<"Limba oficiala:germana"<<endl;
cout<<"Suprafata:83.879 km*km"<<endl;
cout<<"Numarul de locuitori:8.460.390"<<endl;
cout<<"Moneda:Euro";
}break;
case 5:
{
cout<<"Azerbaidjan"<<endl;
cout<<"Capitala:Baku"<<endl;
cout<<"Sistem Politic:Republica Prezidentiala"<<endl;
cout<<"Conducere:Presedinte Ilham Aliyev"<<endl;
cout<<"Limba oficiala:azera"<<endl;
cout<<"Suprafata:86.600 km*km"<<endl;
cout<<"Numarul de locuitori:9.494.600"<<endl;
cout<<"Moneda:Manat";
}break;
case 6:
{
cout<<"Belarus"<<endl;
cout<<"Capitala:Minsk"<<endl;
cout<<"Sitem politic:Republica Prezidentiala"<<endl;
cout<<"Conducere:Presedinte Aleksandr Lukasenko"<<endl;
cout<<"Limbi oficiale:bielorusa,rusa"<<endl;
cout<<"Suprafata:207.595 km*km"<<endl;
cout<<"Numarul de locuitori:9.503.807"<<endl;
cout<<"Moneda:Rubla belarusa";
}break;
case 7:
{
cout<<"Belgia"<<endl;
cout<<"Capitala:Bruxelles"<<endl;
cout<<"Sitem politic:Monarhie Constitutionala"<<endl;
cout<<"Conducere:Rege Filip"<<endl;
cout<<"Limbi oficiale:Neerlandeza,franceza,germana"<<endl;
cout<<"Suprafata:30.5280 km*km"<<endl;
cout<<"Numarul de locuitori:11.071.483"<<endl;
cout<<"Moneda:Euro";
}break;
case 8:
{
cout<<"Bosnia si Hertegovina"<<endl;
cout<<"Capitala:Sarajevo"<<endl;
cout<<"Sitem politic:Republica federala"<<endl;
cout<<"Conducere:Presedinti Nebojsa Radmanovic, Zeljko Komsic, Bakir Izetbegovic"<<endl;
cout<<"Limbi oficiale:bosniaca,crota,sirba"<<endl;
cout<<"Suprafata:51.129 km*km"<<endl;
cout<<"Numarul de locuitori:3.839.737"<<endl;
cout<<"Moneda:Marca convertibila";
}break;
case 9:
{
cout<<"Bulgaria"<<endl;
cout<<"Capitala:Sofia"<<endl;
cout<<"Sitem politic:Republica Parlamentara"<<endl;
cout<<"Conducere:Presedinte Rosen Plevneliev"<<endl;
cout<<"Limba oficiala:bulgara"<<endl;
cout<<"Suprafata:110.910 km*km"<<endl;
cout<<"Numarul de locuitori:7.351.234"<<endl;
cout<<"Moneda:Leva bulgara";
}break;
case 10:
{
cout<<"Cehia"<<endl;
cout<<"Capitala:Praga"<<endl;
cout<<"Sitem politic:Republica Parlamentara"<<endl;
cout<<"Conducere:Presedinte Milos Zeman"<<endl;
cout<<"Limba oficiala:ceha"<<endl;
cout<<"Suprafata:78.866 km*km"<<endl;
cout<<"Numarul de locuitori:10.562.214"<<endl;
cout<<"Moneda:Coroana ceha";
}break;
case 11:
{
cout<<"Cipru"<<endl;
cout<<"Capitala:Nicosia"<<endl;
cout<<"Sitem politic:Republica Prezidentiala"<<endl;
cout<<"Conducere:Presedinte Nikos Anastasiadis"<<endl;
cout<<"Limbi oficiale:greaca,turca"<<endl;
cout<<"Suprafata:9.253 km*km"<<endl;
cout<<"Numarul de locuitori:1.099.341"<<endl;
cout<<"Moneda:Euro";
}break;
case 12:
{
cout<<"Croatia"<<endl;
cout<<"Capitala:Zagreb"<<endl;
cout<<"Sitem politic:Republica"<<endl;
cout<<"Conducere:Presedinte Kolinda Grabar-Kitarovic"<<endl;
cout<<"Limba oficiala:croata"<<endl;
cout<<"Suprafata:56.542 km*km"<<endl;
cout<<"Numarul de locuitori:4.483.804"<<endl;
cout<<"Moneda:Kuna";
}break;
case 13:
{
cout<<"Danemarca"<<endl;
cout<<"Capitala:Copenhaga"<<endl;
cout<<"Sitem politic:Monarhie Constitutionala"<<endl;
cout<<"Conducere:Regina Margrethe II"<<endl;
cout<<"Limba oficiala:daneza"<<endl;
cout<<"Suprafata:43.094 km*km"<<endl;
cout<<"Numarul de locuitori:5.580.516"<<endl;
cout<<"Moneda:Coroana daneza";
}break;
case 14:
{
cout<<"Elvetia"<<endl;
cout<<"Capitala:Berna"<<endl;
cout<<"Sitem politic:Republica Federala"<<endl;
cout<<"Conducere:Presedinte Micheline Calmy-Rey"<<endl;
cout<<"Limbi oficiale:germana,franceza,italiana,retoromana"<<endl;
cout<<"Suprafata:41.285 km*km"<<endl;
cout<<"Numarul de locuitori:7.952.600"<<endl;
cout<<"Moneda:Franc elvetian";
}break;
case 15:
{
cout<<"Estonia"<<endl;
cout<<"Capitala:Tallinn"<<endl;
cout<<"Sitem politic:Republica Parlamentara"<<endl;
cout<<"Conducere:Presedinte Toomas Hendrik"<<endl;
cout<<"Limba oficiala:estona"<<endl;
cout<<"Suprafata:45.226 km*km"<<endl;
cout<<"Numarul de locuitori:1.294.455"<<endl;
cout<<"Moneda:Euro";
}break;
case 16:
{
cout<<"Finlanda"<<endl;
cout<<"Capitala:Helsinki"<<endl;
cout<<"Sitem politic:Republica Parlamentara"<<endl;
cout<<"Conducere:Presedinte Sauli Niinisto "<<endl;
cout<<"Limbi oficiale:SVK,finlandeza,suedeza"<<endl;
cout<<"Suprafata:338.432 km*km"<<endl;
cout<<"Numarul de locuitori:5.421.827"<<endl;
cout<<"Moneda:Ero";
}break;
case 17:
{
cout<<"Franta"<<endl;
cout<<"Capitala:Paris"<<endl;
cout<<"Sitem politic:Republica Constitutionala"<<endl;
cout<<"Conducere:Presedinte Francois Hollande"<<endl;
cout<<"Limba oficiala:franceza"<<endl;
cout<<"Suprafata:674.843 km*km"<<endl;
cout<<"Numarul de locuitori:66.600.000"<<endl;
cout<<"Moneda:Euro,Franc CFP";
}break;
case 18:
{
cout<<"Georgia"<<endl;
cout<<"Capitala:Tbilisi"<<endl;
cout<<"Sitem politic:Republica Semiprezidentiala"<<endl;
cout<<"Conducere:Presedinte Giorgi Matgvelashcili"<<endl;
cout<<"Limba oficiala:georgiana"<<endl;
cout<<"Suprafata:69.700 km*km"<<endl;
cout<<"Numarul de locuitori:4.935.880"<<endl;
cout<<"Moneda:Lari georgian";
}break;
case 19:
{
cout<<"Germania"<<endl;
cout<<"Capitala:Berlin"<<endl;
cout<<"Sitem politic:Republica Federala, Republica Parlamentara"<<endl;
cout<<"Conducere:Presedinte Joachim Gauck, Cancelar Angela Merkel"<<endl;
cout<<"Limba oficiala:germana"<<endl;
cout<<"Suprafata:357.121 km*km"<<endl;
cout<<"Numarul de locuitori:80.399.300"<<endl;
cout<<"Moneda:Euro";
}break;
case 20:
{
cout<<"Grecia"<<endl;
cout<<"Capitala:Atena"<<endl;
cout<<"Tipul de stat:"<<endl;
cout<<"Sitem politic:Republica Parlamentara Unitara"<<endl;
cout<<"Conducere:Presedinte Karolos Papuolias"<<endl;
cout<<"Limba oficiala:greaca"<<endl;
cout<<"Suprafata:131.990 km*km"<<endl;
cout<<"Numarul de locuitori:11.305.118"<<endl;
cout<<"Moneda:Euro";
}break;
case 21:
{
cout<<"Irlanda"<<endl;
cout<<"Capitala:Dublin"<<endl;
cout<<"Sitem politic:Republica Parlamentara"<<endl;
cout<<"Conducere:Presedinte Michael D. Higgins"<<endl;
cout<<"Limbi oficiale:irlandeza,engleza"<<endl;
cout<<"Suprafata:70.273 km*km"<<endl;
cout<<"Numarul de locuitori:4.558.252"<<endl;
cout<<"Moneda:Euro";
}break;
case 22:
{
cout<<"Islanda"<<endl;
cout<<"Capitala:Reykjavik"<<endl;
cout<<"Sitem politic:Republica Costitutionala"<<endl;
cout<<"Conducere:Presedinte Olafur Ragnar Grimsson"<<endl;
cout<<"Limba oficiala:islandeza"<<endl;
cout<<"Suprafata:103.001 km*km"<<endl;
cout<<"Numarul de locuitori:320.060"<<endl;
cout<<"Moneda:Coroana islandeza";
}break;
case 23:
{
cout<<"Italia"<<endl;
cout<<"Capitala:Roma"<<endl;
cout<<"Sitem politic:Republica Parlamentara"<<endl;
cout<<"Conducere:Presedinte Sergio Mattarella"<<endl;
cout<<"Limba oficiala:italiana"<<endl;
cout<<"Suprafata:301.340 km*km"<<endl;
cout<<"Numarul de locuitori:60.776.531"<<endl;
cout<<"Moneda:Euro";
}break;
case 24:
{
cout<<"Kazahstan"<<endl;
cout<<"Capitala:Astana"<<endl;
cout<<"Sitem politic:Republica Prezidentiala"<<endl;
cout<<"Conducere:Presedinte Nursultan Nazarbaiev"<<endl;
cout<<"Limbi oficiale:kazaha,rusa"<<endl;
cout<<"Suprafata:2.724.900 km*km"<<endl;
cout<<"Numarul de locuitori:17.948.816"<<endl;
cout<<"Moneda:Tenge kazah";
}break;
case 25:
{
cout<<"Letonia"<<endl;
cout<<"Capitala:Riga"<<endl;
cout<<"Sitem politic:Republica Parlamentara"<<endl;
cout<<"Conducere:Presedinte Andris Berzins"<<endl;
cout<<"Limba oficiala:letona"<<endl;
cout<<"Suprafata:64.589 km*km"<<endl;
cout<<"Numarul de locuitori:2.217.00"<<endl;
cout<<"Moneda:Euro";
}break;
case 26:
{
cout<<"Liechtenstein"<<endl;
cout<<"Capitala:Vaduz"<<endl;
cout<<"Sitem politic:Republica"<<endl;
cout<<"Conducere:Print Hans Adam al II-lea"<<endl;
cout<<"Limba oficiala:germana"<<endl;
cout<<"Suprafata:160.4 km*km"<<endl;
cout<<"Numarul de locuitori:36.476"<<endl;
cout<<"Moneda:Franc elvetian";
}break;
case 27:
{
cout<<"Lituania"<<endl;
cout<<"Capitala:Vilnius"<<endl;
cout<<"Sitem politic:Republica Parlametara"<<endl;
cout<<"Conducere:Presedinte Dalia Grybauskaite"<<endl;
cout<<"Limba oficiala:lituaniana"<<endl;
cout<<"Suprafata:65.200 km*km"<<endl;
cout<<"Numarul de locuitori:2.966.954"<<endl;
cout<<"Moneda:Euro";
}break;
case 28:
{
cout<<"Luxemburg"<<endl;
cout<<"Capitala:Luxemburg"<<endl;
cout<<"Sitem politic:Monarhie"<<endl;
cout<<"Conducere:Marele Duce Henric"<<endl;
cout<<"Limbi oficiale:luxemburgheza,franceza,german"<<endl;
cout<<"Suprafata:2.586 km*km"<<endl;
cout<<"Numarul de locuitori:537.853"<<endl;
cout<<"Moneda:Euro"<<endl;
}break;
case 29:
{
cout<<"Macedonia"<<endl;
cout<<"Capitala:Skopje"<<endl;
cout<<"Sitem politic:Republica"<<endl;
cout<<"Conducere:Presedinte Gjorge Ivanov"<<endl;
cout<<"Limba oficiala:macedoneana"<<endl;
cout<<"Suprafata:25.713 km*km"<<endl;
cout<<"Numarul de locuitori:2.058.539"<<endl;
cout<<"Moneda:Denar macedonean";
}break;
case 30:
{
cout<<"Malta"<<endl;
cout<<"Capitala:Valletta"<<endl;
cout<<"Sitem politic:Republica"<<endl;
cout<<"Conducere:Presedinte Marie Louise Coleiro Prece"<<endl;
cout<<"Limbi oficiale:malteza,engleza"<<endl;
cout<<"Suprafata:316 km*km"<<endl;
cout<<"Numarul de locuitori:452.515"<<endl;
cout<<"Moneda:euro";
}break;
case 31:
{
cout<<"Republica Moldova"<<endl;
cout<<"Capitala:Chișinău"<<endl;
cout<<"Sitem politic:Republica Parlamentara"<<endl;
cout<<"Conducere:Presedinte nicolae Timofti"<<endl;
cout<<"Limba oficiala:romana"<<endl;
cout<<"Suprafata:33.843,5 km*km"<<endl;
cout<<"Numarul de locuitori:3.57.634"<<endl;
cout<<"Moneda:Leu";
}break;
case 32:
{
cout<<"Monaco"<<endl;
cout<<"Capitala:Monaco"<<endl;
cout<<"Sitem politic:Monarhie Constitutionala"<<endl;
cout<<"Conducere:Print Albert al II-lea"<<endl;
cout<<"Limba oficiala:franceza"<<endl;
cout<<"Suprafata:1.98 km*km"<<endl;
cout<<"Numarul de locuitori:35.986"<<endl;
cout<<"Moneda:Euro";
}break;
case 33:
{
cout<<"Muntenegru"<<endl;
cout<<"Capitala:Podgorica"<<endl;
cout<<"Sitem politic:Republica Parlamentara"<<endl;
cout<<"Conducere:Presedinte Filip Vujanovic"<<endl;
cout<<"Limba oficiala:muntenegreana"<<endl;
cout<<"Suprafata:13.812 km*km"<<endl;
cout<<"Numarul de locuitori:625.266"<<endl;
cout<<"Moneda:euro";
}break;
case 34:
{
cout<<"Norvegia"<<endl;
cout<<"Capitala:Oslo"<<endl;
cout<<"Sitem politic:Monarhie Constitutionala"<<endl;
cout<<"Conducere:Regele Harald al V-lea"<<endl;
cout<<"Limbi oficiale:bokmal,nynorsk"<<endl;
cout<<"Suprafata:385.252 km*km"<<endl;
cout<<"Numarul de locuitori:5.009.150"<<endl;
cout<<"Moneda:coroana norvegiana";
}break;
case 35:
{
cout<<"Olanda"<<endl;
cout<<"Capitala:Amsterdam "<<endl;
cout<<"Sitem politic:Monarhie Constitutionala"<<endl;
cout<<"Conducere:Willem-Alexander, Print de Orania "<<endl;
cout<<"Limba oficiala:neerlandeza"<<endl;
cout<<"Suprafata:41,543 km*km"<<endl;
cout<<"Numarul de locuitori:16.787.689"<<endl;
cout<<"Moneda:Euro";
}break;
case 36:
{
cout<<"Polonia"<<endl;
cout<<"Capitala:Varsovia"<<endl;
cout<<"Sitem politic:Republica"<<endl;
cout<<"Conducere:Presedinte Bronisław Komorowski"<<endl;
cout<<"Limba oficiala:poloneza"<<endl;
cout<<"Suprafata:312,679 km*km"<<endl;
cout<<"Numarul de locuitori:38.485.779"<<endl;
cout<<"Moneda:Zlot polonez";
}break;
case 37:
{
cout<<"Portugalia"<<endl;
cout<<"Capitala:Lisabona"<<endl;
cout<<"Sitem politic:Republica Semi-prezidentiala"<<endl;
cout<<"Conducere:Presedinte Anibal Cavaco Silva"<<endl;
cout<<"Limba oficiala:portugheza"<<endl;
cout<<"Suprafata:92,212 km*km"<<endl;
cout<<"Numarul de locuitori:10.487.289"<<endl;
cout<<"Moneda:Euro";
}break;
case 38:
{
cout<<"Regatul Unit"<<endl;
cout<<"Capitala:Londra"<<endl;
cout<<"Sitem politic:Monarhie Constitutionala"<<endl;
cout<<"Conducere:Regina Elisabeta a II-a"<<endl;
cout<<"Limba oficiala:engleza"<<endl;
cout<<"Suprafata:243,610 km*km"<<endl;
cout<<"Numarul de locuitori:63,181,775"<<endl;
cout<<"Moneda:Lira sterlina";
}break;
case 39:
{
cout<<"Romania"<<endl;
cout<<"Capitala:Bucuresti"<<endl;
cout<<"Sitem politic:Republica Constitutionala"<<endl;
cout<<"Conducere:Presedinte Klaus Iohannis"<<endl;
cout<<"Limba oficiala:romana"<<endl;
cout<<"Suprafata:238.391 km*km"<<endl;
cout<<"Numarul de locuitori:21.790.479"<<endl;
cout<<"Moneda:Leu";
}break;
case 40:
{
cout<<"Rusia"<<endl;
cout<<"Capitala:Moscova"<<endl;
cout<<"Sitem politic:Republica Federala "<<endl;
cout<<"Conducere:Presedinte Vladimir Putin "<<endl;
cout<<"Limba oficiala:rusa"<<endl;
cout<<"Suprafata:17,101.081 km*km"<<endl;
cout<<"Numarul de locuitori:145.433.700"<<endl;
cout<<"Moneda:Rubla";
}break;
case 41:
{
cout<<"San Marino"<<endl;
cout<<"Capitala:San Marino"<<endl;
cout<<"Sitem politic:Republica Parlamentara"<<endl;
cout<<"Conducere:Presedinte "<<endl;
cout<<"Limba oficiala:italiana"<<endl;
cout<<"Suprafata:61.2 km*km"<<endl;
cout<<"Numarul de locuitori:32.193"<<endl;
cout<<"Moneda:Euro";
}break;
case 42:
{
cout<<"Serbia"<<endl;
cout<<"Capitala:Belgrad"<<endl;
cout<<"Sitem politic:Republica Parlamentara"<<endl;
cout<<"Conducere:Presedinte Tomislav Nikolic"<<endl;
cout<<"Limba oficiala:sarba"<<endl;
cout<<"Suprafata:88.361 km*km"<<endl;
cout<<"Numarul de locuitori:7.243.007"<<endl;
cout<<"Moneda:Dinar sarb";
}break;
case 43:
{
cout<<"Slovacia"<<endl;
cout<<"Capitala:Bratislava"<<endl;
cout<<"Sitem politic:Republica Constitutionala"<<endl;
cout<<"Conducere:Presedinte Andrej Kiska"<<endl;
cout<<"Limba oficiala:slovaca"<<endl;
cout<<"Suprafata:48,845 km*km"<<endl;
cout<<"Numarul de locuitori:5.414.937"<<endl;
cout<<"Moneda:Euro";
}break;
case 44:
{
cout<<"Slovenia"<<endl;
cout<<"Capitala:Ljubljana"<<endl;
cout<<"Sitem politic:Republica Parlamentara"<<endl;
cout<<"Conducere:Presedinte Borut Pahor "<<endl;
cout<<"Limba oficiala:slovena"<<endl;
cout<<"Suprafata:20,273 km*km"<<endl;
cout<<"Numarul de locuitori:2.062.455"<<endl;
cout<<"Moneda:Euro";
}break;
case 45:
{
cout<<"Spania"<<endl;
cout<<"Capitala:Madrid"<<endl;
cout<<"Sitem politic:Monarhie Constitutionala"<<endl;
cout<<"Conducere:Rege Felipe al VI-lea"<<endl;
cout<<"Limba oficiala:spaniola"<<endl;
cout<<"Suprafata:504.645 km*km"<<endl;
cout<<"Numarul de locuitori:46.704.310"<<endl;
cout<<"Moneda:Euro";
}break;
case 46:
{
cout<<"Suedia"<<endl;
cout<<"Capitala:Stockholm"<<endl;
cout<<"Sitem politic:Monarhie Constitutionala"<<endl;
cout<<"Conducere:Rege Carl Gustaf al XVI-lea"<<endl;
cout<<"Limba oficiala:suedeza"<<endl;
cout<<"Suprafata:449,964 km*km"<<endl;
cout<<"Numarul de locuitori:9,573,466"<<endl;
cout<<"Moneda:Coroana suedeza";
}break;
case 47:
{
cout<<"Turcia"<<endl;
cout<<"Capitala:Ankara"<<endl;
cout<<"Sitem politic:Republica Parlamentara"<<endl;
cout<<"Conducere:Presedinte Recep Tayyip Erdogan"<<endl;
cout<<"Limba oficiala:turca"<<endl;
cout<<"Suprafata:780,580 km*km"<<endl;
cout<<"Numarul de locuitori:75.627.384 "<<endl;
cout<<"Moneda:Lira turca";
}break;
case 48:
{
cout<<"Ucraina"<<endl;
cout<<"Capitala:Kiev"<<endl;
cout<<"Sitem politic:Republica Semi-prezidentiala"<<endl;
cout<<"Conducere:Presedinte Petro Poroșenko"<<endl;
cout<<"Limba oficiala:ucraineanca"<<endl;
cout<<"Suprafata: 603,628 km*km"<<endl;
cout<<"Numarul de locuitori:44.573.205"<<endl;
cout<<"Moneda:Hrivna ucraineana";
}break;
case 49:
{
cout<<"Ungaria"<<endl;
cout<<"Capitala:Budapesta"<<endl;
cout<<"Sitem politic:Republica Parlamentara"<<endl;
cout<<"Conducere:Presedinte Janos Ader"<<endl;
cout<<"Limba oficiala:maghiara"<<endl;
cout<<"Suprafata:93,030 km*km"<<endl;
cout<<"Numarul de locuitori:9.906.000"<<endl;
cout<<"Moneda:Forint";
}break;
case 50:
{
cout<<"Vatican"<<endl;
cout<<"Capitala:Vatican"<<endl;
cout<<"Sitem politic:Monarhie Electiva"<<endl;
cout<<"Conducere:Papa"<<endl;
cout<<"Limbi oficiale:italiana,latina"<<endl;
cout<<"Suprafata:0.44 km*km"<<endl;
cout<<"Numarul de locuitori:832"<<endl;
cout<<"Moneda:Euro";
cout<<endl;
}break;
}
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<endl<<"Alegeti o alta varianta sau tastati 51 pt. revenirea la meniul secundar."<<endl;
cin>>w;
}
}break;
case 2:
{
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 3);
cout<<"MARILE EUROPEI:"<<endl;
cout<<"1.Afisarea marilor Europei"<<endl;
cout<<"2.Zonare pe adancime a marilor"<<endl;
cout<<"3.Viata din adancuri"<<endl;
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<"Alegeti optiunea dorita:"<<endl;
cin>>x1;
while(x1!=4)
{
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 5);
switch(x1)
{
case 1:
{
cout<<"Afisarea marilor Europei in ordine alfabetica:"<<endl;
creare1();
sortare1();
afisare1();
}break;
case 2:
{
cout<<"Zonarea pe adancime a marilor:"<<endl;
cout<<"Introduceti adancimea:"<<endl;cin>>a.y;
if(a.y<=200)
cout<<"Adancimea se afla in zona epipelagica";
else if(a.y>200&&a.y<=1000)
cout<<"Adancimea se afla in zona mesopelagica";
else if(a.y>1000&&a.y<=4000)
cout<<"Adancimea se afla in zona bathipelagica";
else if(a.y>4000&&a.y<=6000)
cout<<"Adancimea se afla in zona abissopelagica";
else
cout<<"Adancimea se afla in zona hadopelagica";
}break;
case 3:
{
cout<<"Viata din adancuri"<<endl;
cout<<"1.Animale."<<endl;
cout<<"2.Plante."<<endl;
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<"Alegeti optiune dorita:";
cin>>x2;
while(x2!=3)
{
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 5);
switch(x2)
{
case 1:
{
cout<<"Exemple de animale din marile Europei:"<<endl;
cout<<"pesti"<<endl;
cout<<"rechini"<<endl;
cout<<"cetacee (balene,delfini)"<<endl;
cout<<"cefalopode (caracatita, calmarul, sepia)"<<endl;
cout<<"crustacee (crevete, homar)"<<endl;
cout<<"viermi marini"<<endl;
}break;
case 2:
{
cout<<"Exemple de plante din marile Europei:"<<endl;
cout<<"corali"<<endl;
cout<<"alge"<<endl;
cout<<endl;
}break;
default:cout<<"Trebuia sa introduceti 1 sau 2."<<endl;
}
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<endl<<"Apasati o alta tasta sau tastati 3 pt. a  reveni la meniul anterior.";
cin>>x2;
}
}break;
default:{cout<<"Trebuia sa introduceti 1,2 sau 3."<<endl;}
cout<<endl;
}
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<endl<<"Alegeti o alta varianta sau tastati 4 pt. a reveni la meniul principal.";
cin>>x1;
}
}break;
case 3:
{
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 3);
cout<<"Agricultura."<<endl;
cout<<"1.Ramurile agriculturii."<<endl;
cout<<"2.Cei mai mari importatori:"<<endl;
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<"Alegeti optiunea dorita:"<<endl;
cin>>x3;
while(x3!=3)
{
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 10);
switch(x3)
{
case 1:
{
cout<<"Ramurile agriculturii:"<<endl;
creare2();
sortare2();
afisare2();
cout<<endl;
cout<<"Acestea se ocupa cu:"<<endl;
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 12);
cout<<endl<<"Zootehnia: ";
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 10);
cout<<endl<<"se ocupa de cresterea animalelor domestice, mai exact a mamiferelor de uscat domesticite, in scopul obtinerii de lapte, carne, lana si piei sau blanuri."<<endl;
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 12);
cout<<endl<<"Silvicultura: ";
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 10);
cout<<endl<<"se ocupa cu studiul, cresterea, exploatarea si protejarea arborilor ce formeaza padurile, controlul si protectia faunei si florei din paduri."<<endl;
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 12);
cout<<endl<<"Sericicultura: ";
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 10);
cout<<endl<<"se ocupa de  de cresterea viermilor de matase."<<endl;
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 12);
cout<<endl<<"Piscicultura: ";
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 10);
cout<<endl<<"se ocupa de cresterea pestilor in diferite conditii, dar si în sistem industrial."<<endl;
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 12);
cout<<endl<<"Moluscocultura: ";
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 10);
cout<<endl<<"se ocupa de cresterea molustelor, atat terestre, asa cum sunt melcii comestibili, dar si a molustelor acvatice, asa cum ar fi scoicile."<<endl;
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 12);
cout<<endl<<"Horticultura: ";
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 10);
cout<<endl<<"se ocupa cu selectionarea si cresterea legumelor, pomilor fructiferi, viei, arbustilor fructiferi si decorativi, florilor, plantelor ornamentale, plantelor tropicale si a plantelor de sera."<<endl;
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 12);
cout<<endl<<"Avicultura: ";
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 10);
cout<<endl<<"se ocupa cu cresterea pasarilor."<<endl;
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 12);
cout<<endl<<"Apicultura: ";
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 10);
cout<<endl<<"se ocupa cu cresterea albinelor pentru obtinerea de miere si ceara, avand si importantul rol de polenizare a plantelor aflate în zona de crestere a albinelor."<<endl;
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 12);
cout<<endl<<"Agrofitotehnica: ";
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 10);
cout<<endl<<"se ocupa de cultura plantelor de camp, a plantelor furajere si a plantelor tehnice."<<endl;
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 12);
cout<<endl<<"Acvavultura: ";
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 10);
cout<<endl<<"se ocupa cu cresterea plantelor si a animalelor care traiesc in apa, in special in mari si oceane."<<endl;
}break;
case 2:
{
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 10);
cout<<"Cei mai mari consumatori europeni:"<<endl;
cout<<"Alegeti un numar pentru a afla despre cei mai mari consumatori de:"<<endl;
cout<<"1-Cafea;"<<endl;
cout<<"2-Tutun;"<<endl;
cout<<"3-Ceai;"<<endl;
cout<<"4-Cereale;"<<endl;
cout<<"5-Bere;"<<endl;
cout<<"6-Legume;"<<endl;
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<"Alegeti optiunea doritA:";
cin>>x4;
while(x4!=7)
{
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 10);
switch(x4)
{
case 1:
{
cout<<"Cafea:"<<endl;
cout<<" Topul tarilor cu cel mai mare consum de cafea in 2015:"<<endl;
cout<<"1-Austria;"<<endl;
cout<<"2-Germania;"<<endl;
cout<<"3-Polonia;"<<endl;
cout<<"4-Bulgaria;"<<endl;
cout<<"5-Romania;"<<endl;
}break;
case 2:
{
cout<<"Tutun:"<<endl;
cout<<"Cei mai mari consumatori de tutun:"<<endl;
cout<<"1-Grecia (40% din populatie);"<<endl;
cout<<"2-Bulgaria (36% din populatie);"<<endl;
cout<<"3-Letonia (36% din populatie);"<<endl;
cout<<"4-Cipru (30% din populatie);"<<endl;
cout<<"5-Lituania (30% din populatie);"<<endl;
}break;
case 3:
{
cout<<"Ceai:"<<endl;
cout<<"Cei mai mari consumatori de ceai in anul 2015 au fost:"<<endl;
cout<<"1-Irlanda (2191kg/pers./an);"<<endl;
cout<<"2-Marea Britanie (1941kg/pers./an);"<<endl;
cout<<"3-Rusia (1383kg/pers./an);"<<endl;
cout<<"4-Polonia (1kg/pers./an)"<<endl;
}break;
case 4:
{
cout<<"Cereale:graul, secara, triticale, orzul, ovazul, porumbul, sorgul, meiul, orezul si hrisca"<<endl;
cout<<"Cei mai mari producator de cereale din lume sunt:"<<endl;
cout<<"1-FRANTA (72,7 mil. tone);"<<endl;
cout<<"2-GERMANIA (52 mil. tone);"<<endl;
cout<<"3-POLONIA (31,9 mil. tone);"<<endl;
cout<<"4-MAREA BRITANIE (24,5 mil. tone);"<<endl;
cout<<"5-ROMANIA (22,1 mil. tone);"<<endl;
}break;
case 5:
{
cout<<"Bere:"<<endl;
cout<<"Cei mai mari consumatori europeni de bere sunt:"<<endl;
cout<<"1-Cehia avand 128 de companii producatoare."<<endl;
cout<<"2-Irlanda avand 26 de companii producatoare."<<endl;
cout<<"3-Germania avand 1319 de companii producatoare."<<endl;
cout<<"4-Austria avand 173 de companii producatoare."<<endl;
cout<<"5-Marea Britanie avand 667 de companii producatoare."<<endl;
cout<<"6-Belgia avand 135 de companii producatoare."<<endl;
cout<<"7-Danemarca avand 120 de companii producatoare."<<endl;
cout<<"8-Finlanda avand 20 de companii producatoare."<<endl;
cout<<"9-Slovacia avand 11 companii producatoare."<<endl;
}break;
case 6:
{
cout<<"Legume:"<<endl;
cout<<"Una dintre cele mai consumate legume este cartoful."<<endl;
cout<<"Istoria cartofului in Europa:"<<endl;
cout<<"1:Spania-prima tara europeana in care s-a introdus cartoful(1540)."<<endl;
cout<<"2:Insulele Britanice si Tarile de Jos(1580)."<<endl;
cout<<"3:Italia(1565)-Papa primeste o lada de cartofi din Peru."<<endl;
cout<<"4:Anglia si Irlanda(1586)."<<endl;
cout<<"5:Elvetia si Germania(1596)."<<endl;
cout<<"6:Franta."<<endl;
cout<<endl;
cout<<"O alta leguma foarte consumata este morcovul."<<endl;
cout<<"Cele mai mari tari cultivatoare sunt:"<<endl;
cout<<"1.Anglia"<<endl;
cout<<"2.Franta"<<endl;
cout<<"3.Rusia"<<endl;
cout<<"4.Austria"<<endl;
cout<<"5.Olanda"<<endl;
cout<<endl;
cout<<"O a treia leguma la fel de consumata este Ceapa."<<endl;
cout<<"Cei mai mari producatori de ceapa:"<<endl;
cout<<"1-Olanda."<<endl;
cout<<"2-Spania."<<endl;
cout<<"3-Franta."<<endl;
cout<<"4-Italia."<<endl;
cout<<"5-Belgia."<<endl;
cout<<endl;
}break;
}
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<"Alegeti o alta varianta sau tastati 7 pt. intoarcerea la meniul anterior."<<endl;
cin>>x4;
}
cout<<endl;
}break;
}
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<"Alegeti alta optiune sau tastati 3 pentru a reveni la meniul principal."<<endl;
cin>>x3;
}
}break;
case 4:
{
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 3);
cout<<"Zone climatice."<<endl;
cout<<"Climatele Europei:"<<endl;
cout<<"1.Zona temperata"<<endl;
cout<<"2.Zona rece"<<endl;
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<"Alegati optiunea dorita:"<<endl;
cin>>x5;
while(x5!=3)
{
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 11);
switch(x5)
{
 case 1:
{
cout<<"Zona temperata(30-60):"<<endl;
cout<<"Introduceti nr. de grade pentru a vedea in  ce climat se afla:"<<endl;
cin>>a.z;
if(a.z>=30&&a.z<=40)
{
cout<<"Se afla in climatul mediteraneean."<<endl;
cout<<"Este raspandit pe mari suprafete in:sudul Spaniei, sudul Portugaliei, sudul Frantei, Italia, Cipru, Malta"<<endl;
cout<<"Flora:stejarul de pluta, pinul de Alep, pinul maritim."<<endl;
cout<<"Fauna:sacalul, scorpionul, broasca testoasa, magotul."<<endl;
}
else if(a.z>40&&a.z<=60)
{cout<<"Se afla in climatul temperat continental."<<endl;
cout<<"Este raspandit pe mari suprafete in:din estul Romaniei si Poloniei pana la muntii Ural."<<endl;
cout<<"Flora:ierburi."<<endl;
cout<<"Fauna:iepuri, popandai, harciogi, potarnichea, prepelita."<<endl;
}
else
cout<<"Nu se alfa in zona temperata."<<endl;
}break;
case 2:
{
cout<<"Zona rece(60-90):"<<endl;
cout<<"Introduceti nr. de grade pentru a vedea in  ce climat se afla:"<<endl;
cin>>a.z;
if(a.z>=60&&a.z<=66)
{
cout<<"Se afla in climatul subpolar."<<endl;
cout<<"Este raspandit pe mari suprafete in:Siberia, Rusia, Islanda, Pen. Scandinava"<<endl;
cout<<"Flora:muschi, licheni, salcii."<<endl;
cout<<"Fauna:ursul, polar, renul, foca, morsa."<<endl;
}
else if(a.z>66&&a.z<=90)
{
cout<<"Se afla in climatul polar."<<endl;
cout<<"Este raspandit pe mari suprafete in:Oceanul Arctic."<<endl;
cout<<"Flora:muschi, licheni."<<endl;
cout<<"Fauna:ursul polar,morsa,foca."<<endl;
}
else
cout<<"Nu se alfa in zona rece.";
cout<<endl;
}break;
default:cout<<"Trebuia sa introduceti 1 sau 2."<<endl;
}
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<"Alegeti alta varianta sau apasati 3 pentru revenire la meniul anterior."<<endl;
cin>>x5;
}
}break;
case 5:{
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 3);
cout<<"Populatia:"<<endl;
cout<<"1.Afisare fiecare tara + populatia sa."<<endl;
cout<<"2.Sortare tara dupa cel mai mic nr. de locuitori."<<endl;
cout<<"3.Sortare tara dupa cel mai mare nr. de locuitori."<<endl;
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<"Alegeti optiunea dorita:"<<endl;
cin>>x6;
while(x6!=4)
{
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 14);
    switch(x6)
    {
        case 1:{
        creare3();
        afisare3();
        }break;
        case 2:{
        sortare3();
        afisare3();
        }break;
        case 3:{
         sortare4();
        afisare3();
        }break;
        default:cout<<"Trebuia sa alegeti 1 sau 2.";
    }
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
    cout<<endl<<"Alegeti o alta optiune sau tastati 4 pt. a reveni la meniul principal."<<endl;
    cin>>x6;
}
}break;
case 6:
{
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 3);
    cout<<"Romania"<<endl;
    cout<<"1.Cei mai cunoscuti romani."<<endl;
    cout<<"2.Refeliful Romaniei"<<endl;
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
    cout<<"Alegeti optinea dorita:"<<endl;
    cin>>x7;
    while(x7!=3)
    {
        SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 13);
        switch(x7)
        {
            case 1:{
            cout<<"Cei mai cunoscuti romani:"<<endl;
            cout<<"1.Sport."<<endl;
            cout<<"2.Literatura."<<endl;
            cout<<"3.Muzica."<<endl;
            cout<<"4.Stiinta."<<endl;
            SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
            cout<<"Alegeti domeniul de interes:"<<endl;
            cin>>x8;
            while(x8!=5)
            {
                switch(x8)
                {
                    case 1:{
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 13);
                    cout<<"Mari romani din lumea sportului:"<<endl;
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 12);
                    cout<<endl<<"Nadia Elena Comaneci: ";
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 13);
                    cout<<endl<<"este o gimnasta romana, prima gimnasta din lume care a primit nota zece intr-un concurs olimpic de gimnastica. Este castigatoare a cinci medalii olimpice de aur. Este considerata a fi una dintre cele mai bune sportive ale secolului XX si una dintre cele mai bune gimnaste ale lumii, din toate timpurile, Zeita de la Montreal, prima gimnasta a epocii moderne care a luat 10 absolut."<<endl;
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 12);
                    cout<<endl<<"Gheorghe Hagi: ";
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 13);
                    cout<<endl<<"este un fost fotbalist roman, antrenor si om de afaceri, supranumit Regele fotbalului romanesc sau Maradona din Carpati. Este cel mai bun marcator din istoria echipei nationale de fotbal a Romaniei, pentru care a inscris 35 de goluri, record pe care il imparte cu Adrian Mutu. A activat 19 ani in fotbalul profesionist.Dupa retragerea din fotbalul activ, Hagi si-a inceput cariera de antrenor, in paralel fondand o scoala de fotbal."<<endl;
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 12);
                    cout<<endl<<"Ilie Nastase: ";
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 13);
                    cout<<endl<<"este un fost jucator profesionist de tenis de camp si unul dintre cei mai importanti jucatori de tenis ai anilor 1970, fiind numarul unu mondial de doua ori, in 1972 si 1973.La dublu a castigat turneele de la Wimbledon in 1973, Roland Garros in 1970 si US Open in 1975. A castigat de asemenea de patru ori Turneul Campionilor in anii 1971, 1972, 1973 si 1975. Pentru echipa de Cupa Davis a Romaniei a jucat timp de 18 ani un numar de 146 de meciuri de simplu si dublu, castigand 109."<<endl;
                    }break;
                    case 2:{
                    cout<<"Mari scriitori ai literaturii romane:"<<endl;
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 12);
                    cout<<endl<<"Ion Creanga: ";
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 13);
                    cout<<endl<<"a fost un scriitor roman. Recunoscut datorita maiestriei basmelor, povestilor si povestirilor sale, Ion Creanga este considerat a fi unul dintre clasicii literaturii romane mai ales datorita operei sale autobiografice Amintiri din copilarie."<<endl;
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 12);
                    cout<<endl<<"Mihai Eminescu: ";
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 13);
                    cout<<endl<<"a fost un poet, prozator si jurnalist roman, socotit de cititorii romani si de critica literara postuma drept cea mai importanta voce poetica din literatura romana"<<endl;
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 12);
                    cout<<endl<<"Ion Luca Caragiale: ";
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 13);
                    cout<<endl<<"a fost un dramaturg, nuvelist, pamfletar, poet, scriitor, director de teatru, comentator politic si ziarist roman. Este considerat a fi cel mai mare dramaturg roman si unul dintre cei mai importanti scriitori romani. A fost ales membru post-mortem al Academiei Române."<<endl;
                           }break;
                    case 3:{
                    cout<<"Cei mai mari romani din lumea muzicii:"<<endl;
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 12);
                    cout<<endl<<"George Enescu: ";
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 13);
                    cout<<endl<<"a fost un compozitor, violonist, pedagog, pianist si dirijor roman. Este considerat cel mai important muzician roman."<<endl;
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 12);
                    cout<<endl<<"Gheorghe Zamfir: ";
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 13);
                    cout<<endl<<"este un naist virtuoz si compozitor roman. Exprimandu-se artistic printr-un instrument aproape uitat (naiul, numit si fluierul lui Pan), reuseste sa cucereasca aplauzele intregii planete. Modifica forma, constructia si tehnica naiului, largindu-i considerabil paleta de interpretare. Introduce naiul in toate stilurile si genurile muzicale, revolutionand sunetul la scara universala si aducand naiul in atentia publicului modern."<<endl;
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 12);
                    cout<<endl<<"Maria Tanase: ";
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 13);
                    cout<<endl<<"a fost o interpreta romana de muzica populara, usoara, lautareasca, romante si teatru de revista. A fost supranumita Pasarea maiastra (de Nicolae Iorga) si Regina cantecului romanesc."<<endl;
                      }break;
                    case 4:{
                        cout<<"Cei mai mari inventatori romani:"<<endl;
                        SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 12);
                        cout<<endl<<"Traian Vuia: ";
                        SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 13);
                        cout<<endl<<"a fost un inventator roman, pionier al aviatiei mondiale. Pe data de 18 martie 1906 el a realizat primul zbor autopropulsat (fara catapulte sau alte mijloace exterioare) cu un aparat mai greu decat aerul."<<endl;
                        SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 12);
                        cout<<endl<<"Nicolae Constantin Paulescu: ";
                        SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 13);
                        cout<<endl<<"a fost un om de stiinta roman, medic si fiziolog, profesor la Facultatea de Medicina din Bucuresti, care a contribuit la descoperirea hormonului antidiabetic eliberat de pancreas, numit mai tarziu insulina."<<endl;
                        SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 12);
                        cout<<endl<<"George Emil Palade: ";
                        SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 13);
                        cout<<endl<<"a fost un medic si om de stiinta american de origine romana, specialist in domeniul biologiei celulare, laureat in 1974 al premiului Nobel pentru fiziologie si medicina. In 1986 i-a fost conferita in Statele Unite National Medal of Science („Medalia Nationala pentru Stiinta”) in biologie pentru: „descoperiri fundamentale” (de pionierat) in domeniul unei serii esentiale de structuri supracomplexe, cu inalta organizare, prezente in toate celulele vii."<<endl;
                    }break;
                    default:cout<<"Trebuia sa alegeti 1,2,3 sau 4.";
                    }
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
            cout<<endl<<"Alegeti alta varianta sau tastati 5 pt. a reveni la muniul anterior:"<<endl;
            cin>>x8;}
            }break;
            case 2:{
                SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 13);
                cout<<"Relieful Romaniei:"<<endl;
                cout<<"1.Unitati de relief."<<endl;
                cout<<"2.Fauna + Flora protejate de lege."<<endl;
                SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
                cout<<"Alegeti varianta dorita:"<<endl;
                cin>>x9;
                while(x9!=3)
                {
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 13);
                    switch(x9)
                    {
                        case 1:{
                        cout<<"Unitatile mari de relief ale Romaniei:"<<endl;
                        cout<<"1.Munti."<<endl;
                        cout<<"2.Campii."<<endl;
                        cout<<"3.Podisuri."<<endl;
                        cout<<"4.Dealuri."<<endl;
                        SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
                        cout<<"Alegeti optiunea dorita pentru a afla exemple din categoriile de mai sus:"<<endl;
                        cin>>x10;
                        while(x10!=5)
                        {
                            SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 13);
                            switch(x10)
                            {
                        case 1:{
                        cout<<"1.Munti"<<endl;
                        cout<<"Carpatii -  Orientali - Muntii Banatului;"<<endl;
                        cout<<"                      - Muntii Maramuresului si Bucovinei;"<<endl;
                        cout<<"                      - Carpatii de Curbura;"<<endl;
                        cout<<"         -  Meridionali - Muntii Bucegi;"<<endl;
                        cout<<"                        - Muntii Parang;"<<endl;
                        cout<<"                        - Muntii Retezat-Godeanu;"<<endl;
                        cout<<"         -  Occidentali - Muntii Apuseni;"<<endl;
                        cout<<"                        - Muntii Banatului;"<<endl;
                        cout<<"                        - Muntii Bihorului;"<<endl;
                       }break;
                        case 2:{
                            cout<<"2.Campii"<<endl;
                            cout<<"Campia Romana - cuprinsa intre Piemontul Getic, Subcarpati, Podisul Moldovei si valea Dunarii."<<endl;
                            cout<<"Campia de Vest - se afla in vestul tarii, intre granita de vest a Romaniei (cu Ungaria si Serbia) si Dealurile de Vest si pe mici portiuni cu Carpatii Apuseni, Carpatii Banatului si Orientali."<<endl;
                        }break;
                        case 3:{
                            cout<<"3.Podisuri:"<<endl;
                            cout<<"Podisul Transilvaniei - este situat in centrul Romaniei, aproape in intregime inconjurat de grupurile muntoase ale Carpatilor Orientali, cele ale Carpatilor Meridionali si ale Carpatilor Occidentali."<<endl;
                            cout<<"Podisul Moldovei - este situat in partile de est si nord-est ale Romaniei, continuandu-se si dincolo de Prut, in Republica Moldova si Ucraina."<<endl;
                            cout<<"Podisul Dobrogei - este situat intre valea Dunarii in vest si nord si Marea Neagra în est."<<endl;
                        }break;
                        case 4:{
                            cout<<"4. Dealuri:"<<endl;
                            cout<<"Dealurile de Vest au o intindere discontinua de la Carpatii Orientali, in nord, la granita cu Serbia, in sud, in partea de est cu Carpatii Occidentali si Depresiunea colinara a Transilvaniei, iar in partea de vest cu Campia de Vest."<<endl;
                        }break;
                        default:cout<<"Trebuia sa alegeti 1,2,3 sau 4."<<endl;
                            }
                            SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
                            cout<<endl<<"Alegeti o alta varianta sau tastati 5 pt. a reveni la meniul anterior:"<<endl;
                            cin>>x10;
                        }
                         }break;
                        case 2:{
                        SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 13);
                        cout<<"Fauna + Flora protejate de lege:"<<endl;
                        cout<<"1- Fauna - Capra Neagra."<<endl;
                        cout<<"         - Antilopa Saiga."<<endl;
                        cout<<"         - Rasul."<<endl;
                        cout<<"         - Pelicanul comun si cel cret."<<endl;
                        cout<<"2- Flora - Floarea de Colt."<<endl;
                        cout<<"         - Macul Galben."<<endl;
                        cout<<"         - Sangele Voicului."<<endl;
                        cout<<"         - Ciubotica Cucului."<<endl;
                        }break;
                        default:cout<<"Trebuia sa alegeti 1 sau 2."<<endl;
                    }
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
                cout<<endl<<"Alegeti alta varianta sau tastati 3 pt. revenirea la meniul anterior.:"<<endl;
                cin>>x9;
                }
                }break;
            default:cout<<"Trebuia sa alegeti 1 sau 2.";
            }
            SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
            cout<<endl<<"Alegeti alta optiune sau tastati 3 pentru a reveni la meniul principal"<<endl;
            cin>>x7;
    }
}break;
case 7:
{
cout<<"Oprirea programului."<<endl;
}break;
default:{cout<<"Trebuia sa alegeti 1,2,3,4,5,6 sau 7."<<endl;}
}
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15);
cout<<endl<<"Alegeti o alta varianta:"<<endl;
cin>>x;
}
return 0;
}
