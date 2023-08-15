print('Please Wait...')
import turtle

skk = turtle.Turtle()

skk.color('orange', 'yellow')
skk.begin_fill()
skk.pensize(5)
skk.circle(100)
skk.end_fill()

skk.circle(100 , -80)
skk.color('red')
skk.write("  Happy New Year!", font=('Times New Roman',19))

skk.color('orange', 'yellow')
skk.circle(100 , 80)
skk.right(90)
skk.forward(5)
skk.color('white')
skk.forward(100)

win = turtle.Screen()
win.addshape('bunny-head.gif')
skk.shape('bunny-head.gif')

turtle.done()
