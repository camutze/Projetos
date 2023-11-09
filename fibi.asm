#Código da oper	Registrador a 	Registrador b 	Registrador c 	Constante

#assembly code Fibonacci
# N = r1
# first = r2
# next = r3
# second = r4
# i = r5

# r0 = 0000
# r1 = 0001
# r2 = 0010
# r3 = 0011
# r4 = 0100
# r5 = 0101
# r6 = 0110
# r7 = 0111
# r8 = 1000
# r9 = 1001

nop 
addi r0 r0 r1 10 #Defina N como o número desejado de termos da sequência Fibonacci

addi r0 r0 r2 0 #Inicializa first

addi r0 r0 r3 0 #Inicializa next

addi r0 r0 r4 1 #Inicializa second

add  r1 r0 r5  #Inicializa i= N 


#para i = N ate i==0

show r2
add r2 r4 r3
add r0 r4 r2
add r0 r3 r4
subi r0 r0 r5 -1
branch 









show first
