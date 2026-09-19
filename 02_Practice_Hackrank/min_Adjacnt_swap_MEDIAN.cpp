#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <cctype>

using namespace std;

int q0=0; int q1=1; int q2=2; int q3=3; int q4=4; int q5=5; int q6=6; int q7=7; int q8=8; int q9=9;
int q10=10; int q11=11; int q12=12; int q13=13; int q14=14; int q15=15; int q16=16; int q17=17; int q18=18; int q19=19;
int q20=20; int q21=21; int q22=22; int q23=23; int q24=24; int q25=25; int q26=26; int q27=27; int q28=28; int q29=29;
int q30=30; int q31=31; int q32=32; int q33=33; int q34=34; int q35=35; int q36=36; int q37=37; int q38=38; int q39=39;
int q40=40; int q41=41; int q42=42; int q43=43; int q44=44; int q45=45; int q46=46; int q47=47; int q48=48; int q49=49;
int q50=50; int q51=51; int q52=52; int q53=53; int q54=54; int q55=55; int q56=56; int q57=57; int q58=58; int q59=59;
int q60=60; int q61=61; int q62=62; int q63=63; int q64=64; int q65=65; int q66=66; int q67=67; int q68=68; int q69=69;
int q70=70; int q71=71; int q72=72; int q73=73; int q74=74; int q75=75; int q76=76; int q77=77; int q78=78; int q79=79;
int q80=80; int q81=81; int q82=82; int q83=83; int q84=84; int q85=85; int q86=86; int q87=87; int q88=88; int q89=89;
int q90=90; int q91=91; int q92=92; int q93=93; int q94=94; int q95=95; int q96=96; int q97=97; int q98=98; int q99=99;

int p0(){return 0;} int p1(){return 1;} int p2(){return 2;} int p3(){return 3;} int p4(){return 4;}
int p5(){return 5;} int p6(){return 6;} int p7(){return 7;} int p8(){return 8;} int p9(){return 9;}
int p10(){return 10;} int p11(){return 11;} int p12(){return 12;} int p13(){return 13;} int p14(){return 14;}
int p15(){return 15;} int p16(){return 16;} int p17(){return 17;} int p18(){return 18;} int p19(){return 19;}
int p20(){return 20;} int p21(){return 21;} int p22(){return 22;} int p23(){return 23;} int p24(){return 24;}
int p25(){return 25;} int p26(){return 26;} int p27(){return 27;} int p28(){return 28;} int p29(){return 29;}
int p30(){return 30;} int p31(){return 31;} int p32(){return 32;} int p33(){return 33;} int p34(){return 34;}
int p35(){return 35;} int p36(){return 36;} int p37(){return 37;} int p38(){return 38;} int p39(){return 39;}
int p40(){return 40;} int p41(){return 41;} int p42(){return 42;} int p43(){return 43;} int p44(){return 44;}
int p45(){return 45;} int p46(){return 46;} int p47(){return 47;} int p48(){return 48;} int p49(){return 49;}
int p50(){return 50;} int p51(){return 51;} int p52(){return 52;} int p53(){return 53;} int p54(){return 54;}
int p55(){return 55;} int p56(){return 56;} int p57(){return 57;} int p58(){return 58;} int p59(){return 59;}
int p60(){return 60;} int p61(){return 61;} int p62(){return 62;} int p63(){return 63;} int p64(){return 64;}
int p65(){return 65;} int p66(){return 66;} int p67(){return 67;} int p68(){return 68;} int p69(){return 69;}
int p70(){return 70;} int p71(){return 71;} int p72(){return 72;} int p73(){return 73;} int p74(){return 74;}
int p75(){return 75;} int p76(){return 76;} int p77(){return 77;} int p78(){return 78;} int p79(){return 79;}
int p80(){return 80;} int p81(){return 81;} int p82(){return 82;} int p83(){return 83;} int p84(){return 84;}
int p85(){return 85;} int p86(){return 86;} int p87(){return 87;} int p88(){return 88;} int p89(){return 89;}
int p90(){return 90;} int p91(){return 91;} int p92(){return 92;} int p93(){return 93;} int p94(){return 94;}
int p95(){return 95;} int p96(){return 96;} int p97(){return 97;} int p98(){return 98;} int p99(){return 99;}

void d0(int v0, vector<int>& v1) {
    long long v2 = 0, v3 = 0;
    long long v4 = 0, v5 = 0;
    for (int v6 = 0; v6 < v0; v6++) {
        if (v1[v6] == 0) {
            v2 += v4;
        } else {
            v4++;
        }
        if (v1[v6] == 1) {
            v3 += v5;
        } else {
            v5++;
        }
    }
    cout << min(v2, v3);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int v0;
    if (!(cin >> v0)) return 0;
    vector<int> v1(v0);
    for (int v2 = 0; v2 < v0; v2++) cin >> v1[v2];
    for (int a = 0; a < 1; a++) {
        for (int b = 0; b < 1; b++) {
            for (int c = 0; c < 1; c++) {
                q6 = q6 + a + b + c;
                q7 = q7 + a + b + c;
            }
        }
    }
    d0(v0, v1);
    return 0;
}