#include   <math.h>
  #include   <stdio.h>
  #include   <graphics.h>
  #include   <dos.h>

  #define   pi   3.1415926535

  double     ca3mm1(double   m1,double   m2);
  double     ca3fm1(double   cosine,double   sine);
  double     ca5fm2(double   a6m,double   a5m,double   a4m,double   a4f,int   shang);
  double     ca6fm2(double   a4m   ,double   a4f,double   a5m   ,   double   a5f);
  char   inbox(int   x,int   y,int   x1,int   y1);
  char   buf();

      main()
          {
  double   m=3.0;
  double   xo=100.0,yo=200.0,a1=30.0,t1=pi;
  double   xc=xo+m*a1,yc=yo;
  double   a2=8.0,a3,a4=25.0,a5=30.0,a6=20.0,a7=35.0;
  double   t2,t3,t4,t5,t6,t7;
  double   xo1=xo+m*150,yo1=yo;
  double   xc1=xo1-m*a1,yc1=yo1;
  double   i,j,k;
  double   l1;
  double   n=116.1,nt;
  initscreen();

  setfillstyle(SOLID_FILL,DARKGRAY);
  bar(0,0,640,480);
  mybutton(10,10,"BEGIN",1,0);
  mybutton(500,10,"EXIT",1,0);
  line(0,69,640,69);
  mouseinit();
  changemousecross();
  setmousexy(320,20);
  mouseshow();
  setmousearea(0,0,640,60);
  do{
  if(inbox(10,10,70,26)&&button()==1)
      {mousehide();            mybutton(10,10,"BEGIN",0,0);            mouseshow();            mousehold();            mousehide();            mybutton(10,10,"BEGIN",1,7);            mouseshow();            break;          }
  if(inbox(500,10,555,26)&&button()==1)
      {mousehide();            mybutton(500,10,"EXIT",0,0);            mouseshow();            mousehold();            mousehide();            mybutton(500,10,"EXIT",1,7);            mouseshow();            exit(0);            }
  if(buf()==56)
      for(i=0;i<10000;i++){
        switch   (buf()){
        case   18:{
                                                mousehide();
        mybutton(500,10,"EXIT",0,0);
        mouseshow();
        delay(4000);
        mousehide();
        mybutton(500,10,"EXIT",1,7);
        mouseshow();
        exit(0);
        }
        case   48:   {
        mousehide();
        mybutton(10,10,"BEGIN",0,0);
        mouseshow();
        delay(4000);
        mousehide();
        mybutton(10,10,"BEGIN",1,7);
        mouseshow();
        goto   run;
        }
        default:break;
        }
      }
  }while(1);
  run:
  drawjijia(xo,yo,1);
  drawjijia(xc,yc,1);
  drawjijia(xo1,yo1,1);
  drawjijia(xc1,yc1,1);
  setwritemode(1);
  do{
        for(i=0;i<360.0;i+=1.0)
        {
  t2=i;
  a3=ca3mm1(a1*cos(t1)+a2*cos(t2*pi/180.0),a1*sin(t1)+a2*sin(t2*pi/180.0));
  t3=ca3fm1(a1*cos(t1)+a2*cos(t2*pi/180.0),a1*sin(t1)+a2*sin(t2*pi/180.0));
  a4=a3;
  t4=t3;
  t5=ca5fm2(a6,a5,a4,t4,0);
  t6=ca6fm2(a4,t4,a5,t5);
  t7=t6-90.0;
  l1=xc1-xc-2*m*a7*cos(t7*pi/180);
  nt=(asin(l1/2/(n/2))*180/pi)-90.0;
  drawline(xo,yo,a2,t2,m,LIGHTGRAY);
  drawline(xo+m*a2*cos(t2*pi/180),yo-m*a2*sin(t2*pi/180),a5,t5,m,LIGHTGRAY);
  drawline(xc,yc,a6,t6,m,LIGHTGRAY);
  drawline(xc,yc,a7,t7,m,LIGHTGRAY);
  drawline1(xo1,yo1,a2,t2,m,LIGHTGRAY);
  drawline1(xo1+m*a2*cos((180-t2)*pi/180),yo1-m*a2*sin((180-t2)*pi/180),a5,t5,m,LIGHTGRAY);
  drawline1(xc1,yc1,a6,t6,m,LIGHTGRAY);
  drawline1(xc1,yc1,a7,t7,m,LIGHTGRAY);
  for(j=-1;j<20;j++)
  {       drawline(xc+m*a7*cos(t7*pi/180),(yc-m*a7*sin(t7*pi/180)-j*n*sin(nt*pi/180)),n,nt,1.0,GREEN);
  drawline1(xc1-m*a7*cos(t7*pi/180),(yc1-m*a7*sin(t7*pi/180)-j*n*sin(nt*pi/180)),n,nt,1.0,DARKGRAY);
  }
  delay(300);
  drawline(xo,yo,a2,t2,m,LIGHTGRAY);
  drawline(xo+m*a2*cos(t2*pi/180.0),yo-m*a2*sin(t2*pi/180.0),a5,t5,m,LIGHTGRAY);
  drawline(xc,yc,a6,t6,m,LIGHTGRAY);
  drawline(xc,yc,a7,t7,m,LIGHTGRAY);
  drawline1(xo1,yo1,a2,t2,m,LIGHTGRAY);
  drawline1(xo1+m*a2*cos((180-t2)*pi/180),yo1-m*a2*sin((180-t2)*pi/180),a5,t5,m,LIGHTGRAY);
  drawline1(xc1,yc1,a6,t6,m,LIGHTGRAY);
  drawline1(xc1,yc1,a7,t7,m,LIGHTGRAY);
  for(j=-1;j<20;j++)
  {       drawline(xc+m*a7*cos(t7*pi/180),(yc-m*a7*sin(t7*pi/180)-j*n*sin(nt*pi/180)),n,nt,1.0,GREEN);
  drawline1(xc1-m*a7*cos(t7*pi/180),(yc1-m*a7*sin(t7*pi/180)-j*n*sin(nt*pi/180)),n,nt,1.0,DARKGRAY);
  }
  setwritemode(0);
  if(inbox(500,10,555,26)&&button()==1)
      {mousehide();            mybutton(500,10,"EXIT",0,0);            mouseshow();            mousehold();            mousehide();            mybutton(500,10,"EXIT",1,7);            mouseshow();            exit(0);          }
                        if(buf()==56)
      for(k=0;k<10000;k++){
        switch   (buf()){
        case   18:{
        mousehide();
        mybutton(500,10,"EXIT",0,0);
        mouseshow();
        delay(4000);
        mousehide();
        mybutton(500,10,"EXIT",1,7);
        mouseshow();
        exit(0);   }
        default:break;
        }
      }
        setwritemode(1);
        }
  }while(1);
    }

    drawline(double   xo,double   yo,double   mo,double   fujiao,double   m,int   color)
    {
  double   x,y;
  x=(xo+m*mo*cos(fujiao*pi/180));
  y=(yo-m*mo*sin(fujiao*pi/180));
  setcolor(color);
  line   (xo,yo,x,y);
    }
    drawline1(double   xo,double   yo,double   mo,double   fujiao,double   m,int   color)
    {
              double   x,y;
  x=(xo-m*mo*cos(fujiao*pi/180));
  y=(yo-m*mo*sin(fujiao*pi/180));
  setcolor(color);
  line   (xo,yo,x,y);
    }
      drawjijia(double   x,double   y,int   shang)
            {
        setcolor(RED);
        if   (shang==1){
    circle(x,y,3);
    line(x-3.0,y+3.0,x-15.0,y+20.0);
    moveto(x-15,(int)(y+20));
    lineto((int)(x+15),(int)(y+20));
    moveto((int)(x+15),(int)(y+20));
    lineto(x+3,y+3);}
        setcolor(RED);
        if   (shang==0){
    circle((int)x,(int)y,3);
    line   (x-3,y-3,x-15,y-20);
    moveto(x-15,y-20);
    lineto(x+15,y-20);
    moveto(x+15,y-20);
    lineto(x+3,y-3);
    }
            }
      double   ca3mm1(double   m1,double   m2)
    {
        double   temp;
        temp   =   sqrt(m1*m1   +   m2*m2);
        return(temp);
    }
      double   ca3fm1(double   cosine,double   sine)
    {
        float   temp;
        if   (sine   >   0   &&   cosine   >   0)
      temp   =   atan(sine   /   cosine)   *   180   /   pi;
        if   (sine   >   0   &&   cosine   <   0)
      temp   =   (atan(sine   /   cosine)   +   pi)   *   180   /   pi;
        if   (sine   <   0   &&   cosine   <   0)
      temp   =   (atan(sine   /   cosine)   +   pi)   *   180   /   pi;
        if   (sine   <   0   &&   cosine   >   0)
      temp   =   (atan(sine   /   cosine)   +   2   *   pi)   *   180   /   pi;
        return(temp);
    }
    double     ca5fm2(double   a6m,double   a5m,double   a4m,double   a4f,int   shang)
    {
        double   temp,sine1,cosine1;
        cosine1   =   (a6m   *a6m   -   a4m   *a4m   -   a5m*a5m)   /   (2   *   a4m   *   a5m);
        sine1   =   sqrt(1   -   cosine1   *cosine1);
        if   (shang==0)
        sine1   =   sine1*(-1);
        if   (sine1   >   0   &&   cosine1   >   0)
        temp   =   a4f   +   (atan(sine1   /   cosine1)   *   180   /   pi);
        if   (sine1   >   0   &&   cosine1   <   0)
        temp   =   a4f   +   ((atan(sine1   /   cosine1)   +   pi)   *   180   /   pi);
        if   (sine1   <   0   &&   cosine1   <   0)
        temp   =   a4f   +   ((atan(sine1   /   cosine1)   +   pi)   *   180   /   pi);
        if   (sine1   <   0   &&   cosine1   >   0)
        temp   =   a4f   +   ((atan(sine1   /   cosine1)   +   2   *   pi)   *   180   /   pi);
  return(temp);
    }
    double     ca6fm2(double   a4m   ,double   a4f,double   a5m   ,   double   a5f)
    {
        double   temp,sine1,cosine1;
        sine1   =   a4m   *   sin(a4f   *   pi   /   180)   +   a5m   *   sin(a5f   *   pi   /   180);
        cosine1   =   a4m   *   cos(a4f   *   pi   /   180)   +   a5m   *   cos(a5f   *   pi   /   180);

        if   (sine1   >   0   &&   cosine1   >   0)
        temp   =   (atan(sine1   /   cosine1)   *   180   /   pi);
        if   (sine1   >   0   &&   cosine1   <   0)
        temp   =   ((atan(sine1   /   cosine1)   +   pi)   *   180   /   pi);
        if   (sine1   <   0   &&   cosine1   <   0)
        temp   =   ((atan(sine1   /   cosine1)   +   pi)   *   180   /   pi);
        if   (sine1   <   0   &&   cosine1   >   0)
        temp   =   ((atan(sine1   /   cosine1)   +   2   *   pi)   *   180   /   pi);
  return(temp);
    }
  initscreen()
  {
      int   gd=DETECT,gm;
      registerbgidriver(EGAVGA_driver);
      initgraph(&gd,&gm,"");
  }
