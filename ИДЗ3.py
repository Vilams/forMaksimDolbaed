

import numpy as np
import math

def A(i,j):
    a = -math.sin(i+1)**3/math.e**j
    return a 
def B(i):
    b=math.log((i+2)/math.pi)**2
    return b
n= 4
mass = np.zeros((n,n))
summ=[1,1]
c=[]
b=[]
maxx=-9999999
minn=10000000
for i in range(n):
    b.append(B(i))
    for j in range(n):
        
        mass[i][j] = A(i,j)
        
#1
mass2=mass.copy()
mass3=mass.copy()
mass2=mass2**4*(0.5)
mass3=mass3**(-2)
total=mass2.dot(b)
total2=mass3.dot(b)
print(total-total2)
#2

for i in range(n):
    summ[0] *=mass[1][i]
    summ[0] *=mass[2][i]
    summ[1] *= b[i]
    
print(summ)

#3
for i in range(n):
    
    for j in range(n):
        if mass[i][j]>maxx:
            maxx=mass[i][j]
        if mass[i][j]<minn:
            minn==mass[i][j]
    result=math.fabs(b[i])+ (maxx/minn)
    c.append(result)
print(c)
    
