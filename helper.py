import random

dir_name = "room-booking"

for i in range(1, 6):
    n = random.randint(1, 100)
    k = random.randint(1, 10)

    with open(f"./{dir_name}/test{i}.in", "w") as f:
        f.write(f"{n} {k}\n")

    with open(f"./{dir_name}/test{i}.out", "w") as f:
        f.write(str(int((n+k-1)/k)))