#include "TxLib.h"

void FxDrawGoat (COLORREF color, int x, int y,int Tail, int Zrachok, int LinesSize, int Hands, int Legs, int Horns);
void FxDrawMan (int x, int y, int RHand, int LHand, int EyesSize);
void FxDrawWatermelon (COLORREF FillColor, COLORREF LinesColor, int x, int y);
void FxDrawBee (COLORREF BeeColor, COLORREF LinesColor, int x, int y, int JaloSize, int JaloUp, int EyesColor);
void FxDrawTv (COLORREF FillColor, COLORREF LinesColor, int x, int y);
void FxDrawBox (COLORREF linesColor, int x, int y);

void FxDrawGoat (COLORREF color, int x, int y, int Tail, int Zrachok, int LinesSize, int Hands, int Legs, int Horns)
    {

    //-----------------------------------------------------------------------------

    // козёл
    txSetColor (TX_BLACK, LinesSize);
    txSetFillColor (color);
    txRectangle (x + 172, y + 109, x, y);
    txSetFillColor (TX_WHITE);
    txCircle (x + 159, y + 12, 3 + Zrachok);
    txSetPixel (x + 159, y + 12, TX_BLACK);
    txLine (x, y + 109, x - 20 - Legs, y + 153);
    txLine (x, y + 109, x + 10 + Legs, y + 151);
    txLine (x + 172, y + 109, x + 160 - Hands, y + 153);
    txLine (x + 172, y + 109, x + 180 + Hands, y + 153);
    txLine (x + 172, y, x + 165 - Horns, y - 37);
    txLine (x + 172, y, x + 180 + Horns, y - 37);
    txLine (x, y + 53, x - 30, y + 58 - Tail);

    //--80, 67---------------------------------------------------------------------------


    }

void FxDrawMan (int x, int y, int RHand, int LHand, int EyesSize)
    {

    //-----------------------------------------------------------------------------

    // чел
    txSetColor (TX_BLACK, 2);
    txLine (x, y - 46, x, y + 36);
    txLine (x, y, x - 30, y - LHand);
    txLine (x, y, x + 30, y - RHand);
    txSetFillColor (TX_RED);
    txCircle (x, y - 65, 20);
    txCircle (x + 9, y - 65, 3 + EyesSize);
    txSetPixel (x + 9, y - 65, TX_WHITE);
    txCircle (x + 9, y - 65, 3);
    txSetPixel (x + 9, y - 65, TX_WHITE);
    txLine (x - 4, y - 52, x + 4, y - 52);
    txLine (x - 4, y - 52, x - 7, y - 54);
    txLine (x - 4, y - 52, x - 7, y - 54);
    txLine (x, y + 36, x - 29, y + 65);
    txLine (x, y + 36, x + 29, y + 65);

    //-------453, 127----------------------------------------------------------------------

    }

void FxDrawWatermelon (COLORREF FillColor, COLORREF LinesColor, int x, int y)
    {
    //-----------------------------------------------------------------------------

    //арбуз
    txSetColor (TX_BLACK);
    txSetFillColor (FillColor);
    txCircle (x, y, 27);
    txSetColor (LinesColor);
    txLine (x, y + 26, x, y - 27);
    txLine (x - 8, y - 24, x - 8, y + 24);
    txLine (x + 8, y - 24, x + 8, y + 24);
    txLine (x + 16, y - 21, x + 16, y + 21);
    txLine (x - 16, y + 21, x - 16, y - 21);

    //--------697--101-------------------------------------------------------------------

    }

void FxDrawBee (COLORREF BeeColor, COLORREF LinesColor, int x, int y, int JaloSize, int JaloUp, int EyesColor)
    {


    //-----------------------------------------------------------------------------

    //пчела
    txSetFillColor (BeeColor);
    txSetColor (TX_BLACK);
    txCircle (x, y, 27);
    txSetColor (LinesColor);
    txLine (x, y + 26, x, y - 27);
    txLine (x - 8, y - 24, x - 8, y + 24);
    txLine (x + 8, y - 24, x + 8, y + 24);
    txLine (x + 16, y - 21, x + 16, y + 21);
    txLine (x - 16, y + 21, x - 16, y - 21);
    txSetFillColor (EyesColor);
    txCircle (x + 25, y - 2, 2);
    txLine (x - 27, y, x - 37 - JaloSize, y - JaloUp);

    //----------787---101----------------------------------------------------------------

    }

void FxDrawTv (COLORREF FillColor, COLORREF LinesColor, int x, int y)
    {

    //-----------------------------------------------------------------------------

    //ТВ
    txSetColor (LinesColor);
    txSetFillColor (FillColor);
    txRectangle (x + 172, y + 109, x, y);
    txLine (x, y + 109, x - 20, y + 153);
    txLine (x, y + 109, x + 20, y + 153);
    txLine (x + 172, y + 109, x + 160, y + 153);
    txLine (x + 172, y + 109, x + 180, y + 153);
    txLine (x + 82, y, x + 95, y - 37);
    txLine (x + 82, y, x + 119, y - 37);

    //---80, 467--------------------------------------------------------------------------

    }

void FxDrawBox (COLORREF linesColor, int x, int y)
    {

    //-----------------------------------------------------------------------------

    //коробка
    txSetColor (linesColor, 2);
    txSetFillColor (TX_WHITE);
    txRectangle (x - 95, y + 24, x - 24, y + 95);
    txLine (x - 24, y + 95, x, y + 71);
    txLine (x, y + 71, x, y);
    txLine (x - 24, y + 24, x, y);
    txLine (x - 71, y, x, y);
    txLine (x - 71, y, x - 95, y + 24);
    txSetFillColor (TX_GREEN);
    txCircle (x - 58, y + 52, 12);

    //-------------------758--240--------------------------------------------------------

    }
