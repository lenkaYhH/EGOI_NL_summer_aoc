import random

dir_name = "3n+1"

for i in range(1, 6):
    n = random.randint(1, 100)
    with open(f"./{dir_name}/test{i}.in", "w") as f:
        f.write(f"{n}")

    with open(f"./{dir_name}/test{i}.out", "w") as f:
        while n != 1:
            f.write(str(int(n)) + " ")

            if n%2:
                n = 3*n+1
            else:
                n/= 2
        
        f.write(str(int(n)))