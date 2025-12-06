This is what I understood after reading the donut program documentation.

# What this program does :<br>

It prints a rotating 3D donut in the terminal using only C code and ASCII characters. Basically, it keeps drawing frames again and again so it looks like the donut is spinning.<br><br>

## How it works? :<br>

The donut is made using maths.<br>

### These angles help calculate the donut’s shape in 3D.<br>

theta → goes around the donut ring<br>
phi → goes around the donut hole<br>

### The donut rotates because two variables keep changing:<br>

A → rotation around x-axis<br>
B → rotation around z-axis<br>
After every frame, A and B increase a little bit, so the donut moves.<br>

### Brightness using ASCII chars<br>

Different ASCII symbols show different lighting.<br>
Brighter surface → characters like @ or # <br>
Dimmer surface → . , - ~ etc.<br>
The character chosen depends on how light hits the surface point.<br><br>

## Main loop<br><br>

The whole donut is drawn again and again using a loop:<br><br>

calculate points<br>
choose brightness<br>
print the frame<br>
update A and B<br>
And this repeats forever.<br><br>

No graphics libraries used<br>
Simple but smart logic<br>
output is amzing<br><br>

Thank you.<br><br>
