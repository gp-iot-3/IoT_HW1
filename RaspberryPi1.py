import RPi.GPIO as IO
import time
IO.setwarnings(False)
IO.setmode (IO.BCM)
IO.setup(19,IO.OUT)
IO.setup(26,IO.IN)
status = 0
while 1:
    if IO.input(26) == False:
        if status==0:
            IO.output(19,True)
            status=1
        else:
            IO.output(19,False)
            status = 0
            time.sleep(0.5)
