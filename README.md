  
Perl Arduino Plotter v. 0.3  
(former Arduplotter, renamed to avoid confusion with http://arduplotter.com/ created by Chris Rogers)  
  
Real-time plotter for Arduino devices.  
Perl Arduino Plotter reads data from an Arduino serial port and produces a real-time plot using gnuplot.  
This script is licensed under the GNU Free Documentation License 1.2.  
  
Due to the phasing out of HAL in many Linux distributions the script is currently OBSOLETE.  
  
Dimitar D. Mitov, 2013.  
Created for the Telerik Academy Linux System Administration Course,  
July - October 2013.  
https://telerikacademy.com/  
  
FEATURES:  
  
It reads data from an Arduino serial port and produces a real-time plot using gnuplot in three plotting modes:  
1.) All measured values are accumulated and plotted with clock time on the x-axis,  
2.) All measured values are accumulated and plotted with chronometer time on the x-axis,  
3.) Only latest N number of mesurements are displayed.  
After no more data is comming from the device or Ctrl-\ is pressed,  
a final plot file is produced and displayed.  
  
Arduino device is automatically detected and can be  
(re)connected at any time without restarting the program or manually changing anything.  
  
Arduino device can be detected by using one of the two configurable methods:  
1.) Sending a query string to the board and waiting for a predefined identifier or  
2.) Reading a specific identifier comming out of the serial port of the Arduino device.  
  
All the settings are stored in ~/paplotter/paplotter.cfg.  
This file can be changed at any time with any text editor.  
Settings from command line are also saved in the configuration file for later reuse.  
  
Can be used as a Debian package or from any folder containing the minimum necessary files:  
paplotter, paplotter_test and paplotter_skel.cfg  
Use build-paplotter-deb.sh to produce a Debian package.  
  