s=str()
t=[s,s]
t=t+t
while t:
    s=str(len(t))+s
    t.pop()
print(s)
