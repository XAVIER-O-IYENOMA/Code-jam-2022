import numpy as np
n=int(input())
for _ in range(n):
    p1=list(map(int,input().split()))
    p2=list(map(int,input().split()))
    p3=list(map(int,input().split()))
    
    printers=[p1,p2,p3]
    printers=np.array(printers)
    printers=np.transpose(printers)
    print("Case #",_+1,": ",sep='',end='')
    
    final_score=1000000
    
    printers_array=[min(printers[x]) for x in range(4)]
    

        
    for i in range(4):
        final_score-=printers_array[i]
  
        
    if final_score>0:
        print("IMPOSSIBLE")
        
    elif final_score==0:
        for i in range(4):
            print(printers_array[i],end=' ')
        print()
    
    else:
        available=sum(printers_array)+final_score
       
        for i in range(4):
            x=(min(available,printers_array[i]))
            if x>=0:
                print(x,end=' ')
            else:
                print(0,end=' ')
            available-=printers_array[i]
        print()
