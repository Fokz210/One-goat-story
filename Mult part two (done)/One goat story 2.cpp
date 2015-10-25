#include "FXLib.h"
void Titry();
void TvAndMen();
void TvMest();
void TvMest2();
void narkomania();
void TvAndGoat();
void TvAndGoat1();
void TvMest3();
void TvMest4();
void TvAndGoat2();
void TitryEnd();
void TvAndGoat3();

int main ()
    {

    txPlaySound ("msc.wav");
    txCreateWindow (1200, 700);
    txSelectFont ("Comic Sans MS", -20, -30);
    Titry();
    txTextOut (500, 350, "Люди купили себе телевизор");
    txSleep (2000);
    txClear();
    TvAndMen();
    txTextOut (500, 350, "Козлу уделяли меньше внимания");
    txSleep (1000);
    txClear();
    txTextOut (500, 350, "Ему это не понравилось");
    txSleep (1000);
    TvMest();
    TvMest2();
    txTextOut (500, 350, "Люди подумали что козёл это телевизор");
    txSleep (2000);
    txClear();
    TvAndGoat();
    txClear;
    txTextOut (500, 350, "Но он был сломан...");
    txSleep (2000);
    txClear ();
    TvAndGoat();
    TvAndGoat2();
    FxDrawGoat (TX_LIGHTGRAY, 500, 350, 0, 0, 1, 0, 0, 0);
    txSleep (2000);
    txClear();
    txTextOut (500, 350, "И козёл решил съесть телевизор");
    txSleep (2000);
    txClear();
    TvMest4();
    TvMest3();
    txTextOut (500, 350, "Людям понравился ходячий телевизор");
    txSleep (2000);
    txClear();
    TvAndGoat3();
    TitryEnd();




    }

void Titry()
    {
    int t = 0;

    while (t <= 100)
        {
        t++;
        txSetColor (TX_BLACK);
        txTextOut (-600+t*18, 200, "История одного козла (часть 2) (Автор: Иван Черемисенов)");

        txSleep (70);
        txSetFillColor (TX_WHITE);
        txClear();
        }
    }

void TvAndMen()
    {
    int t= 0;

    while (t <= 100)
        {
        t++;

        FxDrawTv (RGB (random (0, 254), random (0, 254), random (0, 254)), TX_BLACK, 500, 350);
        FxDrawMan (350, 350, 0, fabs(t%20-10), 0);
        FxDrawMan (650 + 172, 350, fabs(t%20-10), 0, 0);

        txSleep (70);
        txSetFillColor (TX_WHITE);
        txClear ();


        }
    }

void TvMest()
    {

    int t = 0;
    while (t <= 100)
        {
        t++;

        txTextOut (1000, 500, "(Свалка)");
        FxDrawBee (TX_YELLOW, TX_BLACK, 1000, 250 - fabs(t%20-10), t%2*3, 0, TX_RED);
        FxDrawBox (TX_BLACK, 1000, 450);
        FxDrawGoat (TX_LIGHTGRAY, 100+t*9, 350, t%2*20, t%2*2, 1, fabs(t%12-6), fabs(t%12-6), fabs(t%20-10));
        FxDrawTv (RGB (random (0, 254), random (0, 254), random (0, 254)), TX_BLACK, 100+t*9, 350-114);

        txSleep (70);
        txSetFillColor (TX_WHITE);
        txClear();
        }

    }

void TvMest2()
    {

    int t = 0;
    while (t <= 100)
        {
        t++;

        txTextOut (1000, 500, "(Свалка)");
        FxDrawBee (TX_YELLOW, TX_BLACK, 1000, 250 - fabs(t%20-10), t%2*3, 0, TX_RED);
        FxDrawBox (TX_BLACK, 1000, 450);
        FxDrawGoat (TX_LIGHTGRAY, 1000-t*9, 350, t%2*20, t%2*2, 1, fabs(t%12-6), fabs(t%12-6), fabs(t%20-10));
        FxDrawTv (RGB (random (0, 254), random (0, 254), random (0, 254)), TX_BLACK, 1000, 350-114);

        txSleep (70);
        txSetFillColor (TX_WHITE);
        txClear();
        }

    }

void narkomania()
    {
    int t = 0;

    while (t <= 800)
        {
        t++;

        txSetFillColor (RGB (random (0, 254), random (0, 254), random (0, 254)));
        txSelectFont ("Comic Sans MS", -40, -60);
        txTextOut (450, 350, "Eeee, weed mode!");

        txSleep (70);
        txClear();

        }

    }

void TvAndGoat()
    {
    int t= 0;

    while (t <= 50)
        {
        t++;

        FxDrawGoat (TX_LIGHTGRAY, 500, 350, 0, 0, 1, 0, 0, fabs(t%20-10));
        FxDrawMan (350, 350, 0, fabs(t%20-10), 0);
        FxDrawMan (650 + 172, 350, fabs(t%20-10), 0, 0);

        txSleep (70);
        txSetFillColor (TX_WHITE);
        txClear ();


        }
    }

void TvAndGoat1()
    {
    int t= 0;

    while (t <= 50)
        {
        t++;

        FxDrawGoat (TX_LIGHTGRAY, 500, 350, 0, 0, 1, 0, 0, fabs(t%20-10));
        FxDrawMan (350, 350, 0, fabs(t%20-10), 0);
        FxDrawMan (650 + 172, 350, fabs(t%20-10), 0, 0);

        txSleep (70);
        txSetFillColor (TX_WHITE);
        txClear ();


        }
    }

void TvMest3()
    {

    int t = 0;
    while (t <= 100)
        {
        t++;

        txTextOut (1000, 500, "(Свалка)");
        FxDrawBee (TX_YELLOW, TX_BLACK, 1000, 250 - fabs(t%20-10), t%2*3, 0, TX_RED);
        FxDrawBox (TX_BLACK, 1000, 450);
        FxDrawGoat (RGB (random (0, 254), random (0, 254), random (0, 254)), 1000-t*9, 350, t%2*20, t%2*2, 1, fabs(t%12-6), fabs(t%12-6), fabs(t%10-5));

        txSleep (70);
        txSetFillColor (TX_WHITE);
        txClear();
        }

    }

void TvMest4()
    {

    int t = 0;
    while (t <= 100)
        {
        t++;

        txTextOut (1000, 500, "(Свалка)");
        FxDrawBee (TX_YELLOW, TX_BLACK, 1000, 250 - fabs(t%20-10), t%2*3, 0, TX_RED);
        FxDrawBox (TX_BLACK, 1000, 450);
        FxDrawGoat (TX_LIGHTGRAY,100+t*9, 350, t%2*20, t%2*2, 1, fabs(t%12-6), fabs(t%12-6), fabs(t%20-10));
        FxDrawTv (RGB (random (0, 254), random (0, 254), random (0, 254)), TX_BLACK, 1000, 350-114);

        txSleep (70);
        txSetFillColor (TX_WHITE);
        txClear();
        }

    }

void TvAndGoat2()
    {
    int t= 0;

    while (t <= 50)
        {
        t++;

        FxDrawGoat (TX_LIGHTGRAY, 500, 350, 0, 0, 1, 0, 0, fabs(t%10-5));
        FxDrawMan (350, 350, 0, fabs(t%20-10), 0);


        txSleep (70);
        txSetFillColor (TX_WHITE);
        txClear ();


        }
    }

void TitryEnd()
    {
    int t = 0;
    while (t <= 100)
        {
        t++;

        txTextOut (-100+t*13, 200, "Конец второй части");

        txSleep (50);

        txSetFillColor (TX_WHITE);
        txClear ();

        }
    }

void TvAndGoat3()
    {
    int t= 0;

    while (t <= 50)
        {
        t++;

        FxDrawGoat (RGB (random (0, 254), random (0, 254), random (0, 254)), 500, 350, 0, 0, 1, 0, 0, fabs(t%10-5));
        FxDrawMan (350, 350, 0, fabs(t%20-10), 0);
        FxDrawMan (650 + 172, 350, fabs(t%20-10), 0, 0);



        txSleep (70);
        txSetFillColor (TX_WHITE);
        txClear ();


        }
    }
