The code :
k;double sin()
,cos();main(){float A=
0,B=0,i,j,z[1760];char b[
1760];printf("\x1b[2J");for(;;
){memset(b,32,1760);memset(z,0,7040)
;for(j=0;6.28>j;j+=0.07)for(i=0;6.28

> i;i+=0.02){float c=sin(i),d=cos(j),e=
> sin(A),f=sin(j),g=cos(A),h=d+2,D=1/(c*
> h*e+f*g+5),l=cos (i),m=cos(B),n=s\
> in(B),t=c*h*g-f* e;int x=40+30*D*
> (l*h*m-t*n),y= 12+15*D*(l*h*n
> +t*m),o=x+80*y, N=8*((f*e-c*d*g
> )*m-c*d*e-f*g-l *d*n);if(22>y&&
> y>0&&x>0&&80>x&&D>z[o]){z[o]=D;;;b[o]=
> ".,-~:;=!*#$@"[N>0?N:0];}}/_#\*\*\*\*!!-_/
> printf("\x1b[H");for(k=0;1761>k;k++)
> putchar(k%80?b[k]:10);A+=0.04;B+=

     0.02;}}/*****####*******!!=;:~
       ~::==!!!**********!!!==::-
         .,~~;;;========;;;:~-.
             ..,--------,*/

This is what I understood after reading the donut program documentation.

# What this program does :

It prints a rotating 3D donut in the terminal using only C code and ASCII characters. Basically, it keeps drawing frames again and again so it looks like the donut is spinning.

How it works? :

The donut is made using maths.

These angles help calculate the donut’s shape in 3D.

theta → goes around the donut ring
phi → goes around the donut hole

#The donut rotates because two variables keep changing:

A → rotation around x-axis
B → rotation around z-axis
After every frame, A and B increase a little bit, so the donut moves.

#Brightness using ASCII chars

Different ASCII symbols show different lighting.
Brighter surface → characters like @ or #
Dimmer surface → . , - ~ etc.
The character chosen depends on how light hits the surface point.

Main loop

The whole donut is drawn again and again using a loop:

calculate points
choose brightness
print the frame
update A and B
And this repeats forever.

No graphics libraries used
Simple but smart logic
output is amzing

Thank you.
