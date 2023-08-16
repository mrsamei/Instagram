import random as r

start, stop = 5.1, 13.4

# r.uniform(5.1, 13.4) : random number in range [5.1, 13.4] (16 decimal digits)
# round( r.uniform(5.1, 13.4), 1) : 1 decimal digit
a = [round( r.uniform(start, stop), 1) for i in range(10)]

print( '\n'.join(map(str, a)) )