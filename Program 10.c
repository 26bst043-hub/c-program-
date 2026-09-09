# 1. NANR (No Argument, No Return)
def greet_nanr():
    print("NANR: Hello World!")

# 2. ANR (Argument, No Return)
def greet_anr(name):
    print(f"ANR: Hello, {name}!")

# 3. NAWR (No Argument, With Return)
def get_pi_nawr():
    return 3.14159

# 4. AWR (Argument, With Return)
def add_awr(a, b):
    return a + b

# Function Demonstrations
greet_nanr()
greet_anr("Student")

pi_val = get_pi_nawr()
print(f"NAWR Returned: {pi_val}")

result = add_awr(10, 20)
print(f"AWR Returned: {result}")
