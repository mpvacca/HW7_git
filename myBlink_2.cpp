
#include "derek_LED.h"

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>


using namespace std;


int main(int argc, char* argv[]){
   if(argc!=3){
	cout << "Usage is myBlink <command>" << endl;
        cout << "   command is one of: on, off, flash, blink, or status" << endl;
	cout << " e.g. myBlink2 flash 0" << endl;
	cout << "      myBlink2 blink 3" << endl;
   }
   cout << "Starting the myBlink program" << endl;
   string cmd(argv[1]);
   int blink_num = atoi(argv[2]); 
   LED leds[1] =  LED(0);
      if(cmd=="on")leds[0].turnOn();
      else if(cmd=="off")leds[0].turnOff();
      else if(cmd=="flash")leds[0].flash("100"); //default is "50"
      else if(cmd=="status")leds[0].outputState();
      else if(cmd=="blink")leds[0].blink(blink_num);
      else{ cout << "Invalid command!" << endl; }
   cout << "Finished the myBlink program" << endl;
   return 0;
}
