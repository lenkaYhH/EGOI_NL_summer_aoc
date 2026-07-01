import random
from solution import solve

dir_name = "albert-heijn"

for i in range(1, 6):
    t = random.randint(1, 100)
    item = []

    # with open(f"./{dir_name}/test{i}.out", "w") as f2:
        # continue

    with open(f"./{dir_name}/test{i}.in", "w") as f:
        f.write(f"{t}\n")

        for j in range(t): 
            n = random.randint(1, 100)
            items = [random.randint(1, 10) for _ in range(n)]

            f.write(f"{n} {" ".join(list(map(str, items)))}\n")


            with open(f"./{dir_name}/test{i}.out", "a") as f2:
                f2.write(str(solve(items)) + "\n")