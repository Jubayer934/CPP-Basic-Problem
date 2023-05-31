x=input()
y=len(x)
for i in range (y):
    if x[i]=='\\':
        break
    print(x[i],end='')
print()