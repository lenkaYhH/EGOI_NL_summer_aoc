import random
import subprocess
import os
import string
from itertools import permutations
direct = "contest-nov2026/tallest-mountain"

CPP_EXECUTABLE = f"./{direct}/solution.exe" 

NUM_TESTS = 5

# ==========================
# Random testcase generator
# ==========================
def gen_random_string():
    s_length = random.randint(1, 10)
    s = ""
    for _ in range(s_length):
        s += random.choice(string.ascii_lowercase)

    return s

def generate_testcase():

    n = random.randint(1, int(10**random.randint(1, 3)))
    m = random.randint(1, int(10**random.randint(1, 3)))

    # names = [gen_random_string() for _ in range(n)]
    # k = random.randint(1, int(10**random.randint(2, 4)))
    arr = [[random.randint(1, int(10**random.randint(1, 4))) for _ in range(m)] for _ in range(n)]
    # arr = [random.randint(1, int(10** random.randint(1, 6))) for _ in range(n*m)]

    # random.shuffle(arr)
    # state = random.choice(['aan', 'uit'])

    new_arr = list()
    for item in arr:
        new_arr.append(" ".join(map(str, item)))
    

    lines = [
        f"{n} {m}",
        # " ".join(map(str, arr))
        "\n".join(new_arr)
    ]

    return "\n".join(lines) + "\n"

# ==========================
# Main
# ==========================

for i in range(1, NUM_TESTS + 1):
    input_data = generate_testcase()

    input_filename = f"{direct}/input{i}.in"
    output_filename = f"{direct}/output{i}.out"

    # Save input
    with open(input_filename, "w") as f:
        f.write(input_data)

    # Run solution
    result = subprocess.run(
        [CPP_EXECUTABLE],
        input=input_data,
        text=True,
        capture_output=True,
        check=True
    )

    # Save output
    with open(output_filename, "w") as f:
        f.write(result.stdout)

    print(f"Generated {input_filename} and {output_filename}")

print("Done!")