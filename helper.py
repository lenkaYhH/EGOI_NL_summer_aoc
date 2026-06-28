import random

dir_name = "plane-spotting"

for i in range(1, 6):
    n = random.randint(1, 100)
    a = random.randint(1, 50)
    b = random.randint(a+1, 100)

    airplanes = [random.randint(1, 1000) for _ in range(n)]

    with open(f"./{dir_name}/test{i}.in", "w") as f:
        f.write(f"{n} {a} {b}\n")
        f.write(" ".join(list(map(str, airplanes))))

    with open(f"./{dir_name}/test{i}.out", "w") as f:
        cnt = 0

        for p in airplanes:
            if a <= p < b:
                cnt += 1
                
        f.write(str(int(cnt)))