#include "TXLib.h"

  void DrawMan(int x)
  {
    txSetColor(TX_BLACK, 3);
    txSetFillColor(TX_WHITE);
    txCircle(x,415,25); //������
    txLine(x,440,x,520); //����
    txLine(x,450,x-30,485); //����� ����
    txLine(x,450,x+30,485); //������ ����
    txLine(x,520,x-30,547); //����� ����
    txLine(x,520,x+30,547); //������ ����

  }

  void DrawSun(int x)
  {
    txSetColor(TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txCircle (x,65,60);

  }

  void DrawKrysha()
  {
    txSetColor(TX_BLACK);
    txSetFillColor(TX_RED);
    POINT kpysha[3] = {{170,300}, {305,115}, {450,300}};
    txPolygon (kpysha, 3);

  }

  void DrawHouse()
  {
    txSetColor(TX_BLACK);
    txSetFillColor(TX_YELLOW);
    txRectangle (170,300,450,550);

  }

  void DrawNebo()
  {
    txSetColor(TX_LIGHTCYAN);
    txSetFillColor(TX_LIGHTCYAN);
    txRectangle(0,0,800,370);

  }

  void DrawEarth()
  {
   txSetColor(TX_GREEN);
   txSetFillColor(TX_GREEN);
   txRectangle(0,600,800,370);

  }

  void DrawWindow()
  {
   txSetColor(TX_BLACK);
   txSetFillColor(TX_WHITE);
   txRectangle(200,360,310,470);

   txLine(255,360,255,470);
   txLine(200,420,310,420);

   txSetColor(TX_BLACK);
   txSetFillColor(TX_CYAN);
   txRectangle(201,361,255,420); //����� ������� �������
   txRectangle(255,420,309,361); //������ ������� �������
   txRectangle(201,469,255,420); //����� ������ �������
   txRectangle(255,420,309,469); //������ ������ �������

  }

  void DrawWindowinKrysha()
  {
   txSetColor(TX_BLACK);
   txSetFillColor(TX_NULL);
   txCircle(305,225,40);

   txLine(305,185,305,265);
   txLine(265,225,345,225);

  }

  void DrawWindowinKryshaColor()
  {
   txSetColor(TX_NULL);
   txSetFillColor(TX_CYAN);
   txCircle(305,225,40);

  }

  void DrawGrass()
  {
   txSetColor(TX_LIGHTGREEN);
   txSetFillColor(TX_LIGHTGREEN);
   txLine(525,500,545,550);
   txLine(555,500,555,550);
   txLine(590,500,570,550);

   txLine(35,512,63,563);
   txLine(75,512,75,563);
   txLine(106,512,84,563);

  }

  void DrawCloud(int x)
  {
    txSetColor(TX_NULL);
    txSetFillColor(RGB (66,170,255));
    txEllipse(x+410-410,35,x+550-410,140);
    txEllipse(x+475-410,15,x+725-410,180);
    txEllipse(x+660-410,35,x+800-410,140);

  }

  void DrawDoor(int x_Door, int y_Door)
  {
   txSetColor(TX_BLACK,1);
   txSetFillColor(RGB (188,152,126));
   POINT door[4] = {{340,360}, {x_Door,y_Door}, {x_Door,y_Door+190}, {340,550}};
   txPolygon (door, 4);

   //������� �����
   //txSetColor(TX_BLACK,1);
   //txSetFillColor(RGB (138,102,66));
   //txCircle(400,460,7);


  }

  void DrawDoorWay()
  {
   txSetColor(TX_BLACK,1);
   txSetFillColor(RGB (0,0,0));
   txRectangle (340,360,430,550);

  }

  void DrawTree(int x)
  {
   txSetColor(RGB (150,75,0));
   txSetFillColor(RGB (150,75,0));
   txRectangle(x+700-700,300,x+715-700,510);

   txSetColor(RGB (0,128,0));
   txSetFillColor(RGB (0,128,0));
   txEllipse(x+680-700,95,x+740-700,210);
   txEllipse(x+680-700,170,x+740-700,320);

  }

int main()
{
    txCreateWindow (800, 600);

    int xSun = 100;
    int xMan = 700;
    int xCloud = 410;
    int x_Door = 430;
    int y_Door = 360;


    while(xSun < 700)
    {
      txBegin();
      DrawNebo();
      DrawEarth();
      DrawSun(xSun);
      DrawCloud(xCloud);
      DrawKrysha();
      DrawHouse();
      DrawDoorWay();
      DrawDoor(x_Door,y_Door);
      DrawWindow();
      DrawMan(xMan);
      DrawWindowinKryshaColor();
      DrawWindowinKrysha();
      DrawGrass();

      xSun = xSun + 10;
      txSleep(1);
      txEnd();

    }
    while(xMan > 485)
    {
      txBegin();
      DrawNebo();
      DrawEarth();
      DrawSun(xSun);
      DrawCloud(xCloud);
      DrawKrysha();
      DrawHouse();
      DrawDoorWay();
      DrawWindow();
      DrawMan(xMan);
      DrawDoor(x_Door,y_Door);
      DrawWindowinKryshaColor();
      DrawWindowinKrysha();
      DrawGrass();

      xMan = xMan - 5;
      txSleep(1);
      txEnd();
    }

    while(xMan > 390)
    {
      txBegin();
      DrawNebo();
      DrawEarth();
      DrawSun(xSun);
      DrawCloud(xCloud);
      DrawKrysha();
      DrawHouse();
      DrawDoorWay();
      DrawWindow();
      DrawMan(xMan);
      DrawDoor(x_Door,y_Door);
      DrawWindowinKryshaColor();
      DrawWindowinKrysha();
      DrawGrass();

      xMan = xMan - 5;
      txSleep(1);
      txEnd();

    }

    while(xCloud > 390)
    {
      txBegin();
      DrawNebo();
      DrawEarth();
      DrawSun(xSun);
      DrawCloud(xCloud);
      DrawKrysha();
      DrawHouse();
      DrawDoorWay();
      DrawWindow();
      DrawMan(xMan);
      DrawDoor(x_Door,y_Door);
      DrawWindowinKryshaColor();
      DrawWindowinKrysha();
      DrawGrass();

      xCloud = xCloud - 1;
      txSleep(1);
      txEnd();

    }

    //�������� �����
    while(x_Door > 340)
    {
     txBegin();
      DrawNebo();
      DrawEarth();
      DrawSun(xSun);
      DrawCloud(xCloud);
      DrawKrysha();
      DrawHouse();
      DrawDoorWay();
      DrawWindow();
      DrawMan(xMan);
      DrawDoor(x_Door,y_Door);
      DrawWindowinKryshaColor();
      DrawWindowinKrysha();
      DrawGrass();

      x_Door = x_Door - 1;
      y_Door = y_Door + 1;
      txSleep(1);
      txEnd();

    }

    //�������� �����
    while(x_Door < 430)
    {
     txBegin();
      DrawNebo();
      DrawEarth();
      DrawSun(xSun);
      DrawCloud(xCloud);
      DrawKrysha();
      DrawHouse();
      DrawDoorWay();
      DrawDoor(x_Door,y_Door);
      DrawWindow();
      DrawWindowinKryshaColor();
      DrawWindowinKrysha();
      DrawGrass();

      x_Door = x_Door + 1;
      y_Door = y_Door - 1;
      txSleep(1);
      txEnd();


    }


   while(x_Door > 340)
   {
      txBegin();
      DrawNebo();
      DrawEarth();


    for(int i=0; i<800; i=i+100)
    {
     DrawTree(i);
    }
      txEnd();
   }


    txTextCursor (false);
return 0;
}

