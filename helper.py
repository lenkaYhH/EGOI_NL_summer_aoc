import random

for i in range(2, 4):
    n = random.randint(1, 100)
    with open(f"./test-problem/test{i}.in", "w") as f:
        f.write(str(n))

    with open(f"./test-problem/test{i}.out", "w") as f:
        for j in range(n):
            f.write("Hello world!\n")