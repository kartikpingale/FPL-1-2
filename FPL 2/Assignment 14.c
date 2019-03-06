#include<USBlight>

void setup()
{
  myTimer=setTimer(10*60*1000);   //10 minutes in milliseconds
  if(myTimer)
  {
    STATE=OFF;
  }
}
