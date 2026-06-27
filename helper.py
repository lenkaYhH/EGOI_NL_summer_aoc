import random

dir_name = "lego-tower"

for i in range(1, 6):
    a = random.randint(0, 30)
    b = random.randint(0, 30)
    with open(f"./{dir_name}/test{i}.in", "w") as f:
        f.write(f"{a} {b}")

    with open(f"./{dir_name}/test{i}.out", "w") as f:
        f.write(f"{max(a, b) - min(a,b)} {min(a,b)}")