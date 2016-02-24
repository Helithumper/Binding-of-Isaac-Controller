# Binding-of-Isaac-Controller
Control BoI with an arduino leonardo, two joysticks, and a few buttons

Required Materials:
2x 2-Axis Joystick by Parallax Inc.
3x Pushbuttons
2x Pulldown Resistors for Buttons
1x Arduino Leonardo
2x Small Breadboards
1x Copy of THE BINDING OF ISAAC REBIRTH/AFTERBIRTH from Steam http://store.steampowered.com/app/250900/
Alot of Jumpers


Pins:
L/R+,U/D+ on both joysticks gets 5v
GND on both joysticks gets GND
U/D on your Joystick that acts as a Joystick goes to A0
L/R on your Joystick that acts as a Joystick goes to A1

U/D on your Joystick that acts as a Directional Pad goes to A2
U/D on your Joystick that acts as a Directional Pad goes to A3

Each of your buttons gets 5v and is connected to pins 3,7,and 9 respectively
-Dont forget to add a pulldown resistor on each to Ground :)


Procedure:
1. Wire Up as above
2. Add the included Joystick folder to your Arduino Libraries folder located in C:\Users\__Username__\Documents\Arduino\Libraries
3. Upload included code to Leonardo
4. Open x360ce and press okay on the popups
5. Set your Joystick that acts as a Joystick as the left joystick on the xbox remote, and the joystick that acts as a Directional Pad as the Directional Pad on the Xbox remote
6. Grab the files that are output in the same folder as x360ce
7. Place the files in your Binding of Isaac directory located in C:\Program Files (x86)\Steam\steamapps\common\The Binding of Isaac Rebirth
7 1/2. Ensure that two files were just copied, one named x360ce and one named xinput1_3.dll | if 
8. Run the Binding of Isaac
9. Press any button to Start
10. Press File 1
11. Press Options
12. Press Controls
13. Press Arduino Leonardo
14. Map the buttons and joysticks as you see fit. REMEMBER TO SET A BUTTON TO EXIT MENU
15. Enter the game
16. Change controller to Arduino Leonardo
17. Exit menu and have fun :)
9. Open the Options Pane
10. Click Controller
