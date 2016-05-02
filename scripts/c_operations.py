# Operations file for clifford algebra
# Supposed to describe set of operations...
# Must be limited to the operations provided by the environment
# Lets define: operand1..n
# Issue: Limiting the operand types...
# Defining blades, it must be possible to add blades...

op1, op2 = operands(blade1, blade1)

print(op1)
print(op2)

addFunction("mirror", op1*op2*op1)

#op1, op2 = operands(blade0+blade2, blade1)

#addFunction("rotate", op1*op2*op1.conjugate())
