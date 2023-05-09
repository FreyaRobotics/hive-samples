Hi there!

This is a sample for controlling the Arduino from Python

1. Get an Arduino board and install the Arduino IDE
2. Install Python 3.x
3. Install the pyserial package for Python 3.x, in console(CMD or Terminal on Windows, shell on Linux) command window:

    pip3 install pyserial
    (or)
    pip install pyserial

if you already familiar with Python installing python packages you could execute the following:

    pip3 install -r requirements.txt
    (or)
    pip install -r requirements.txt

4. Flush robot_firmware to your Arduino
5. Start the robot_control.py script:

    python3 robot_control.py
    (or)
    python robot_control.py
    (or, if you are using Terminal)
    python.exe .\robot_control.py
