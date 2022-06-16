import math 

def f(x,y,a):  
    try: # попытка найти функцию, если знаменатель равен 0, то ответ приравниваеться к бесконечности       
        
        result = (math.sqrt(math.e**x - math.cos(x**2*a**5)**4)+ math.atan(a-x**5)**4)/math.sqrt(abs(a+x*y**4))
       
    except:     
        result = math.inf
    
    return result

def X(count):  # функция значения х по условию
    return math.tan(count*(math.pi/4))/count

def Y(count): # функция значения у по условию
    return math.log(count/(count+1))

def A(count):   # функция значения b по условию
    return count**2/math.e**(count-1)    

print(f(4.68,-6.98,math.sqrt(2)*math.pi)) # вывод по заднанию
print(f(1,1,-1))
print ("| %6s | %12s | %12s | %12s | %13s |" % ("n", "x", "y", "a", "f(x, y, a)")) # таблица
for i in range(1,34):
    x=X(i)
    y=Y(i)
    a=round( A(i), 4)
    F=f(x,y,a)
    if abs(x) > 10*7:
        x=math.inf
    if abs(y) > 10*7:
        y=math.inf
    if abs(a) > 10*7:
        a=math.inf
        
    print("| %6d | %12f | %12f | %12f | %13f |" % (i,round( x,4),round(y,4),round(a,4),round(F,4)))