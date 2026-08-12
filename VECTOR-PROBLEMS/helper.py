import random
import subprocess
import os
import string
from itertools import permutations
direct = "VECTOR-PROBLEMS/practice1"

CPP_EXECUTABLE = f"./{direct}/solution.exe"  # Windows

NUM_TESTS = 5

# ==========================
# Random testcase generator
# ==========================

def generate_testcase():
    """
    Return the entire input as a string.
    Modify this function for your own problem.
    """

    # n = random.randint(5, int(10**random.randint(1, 5)))
    n = random.randint(0, 100)
    arr = [random.randint(1, int(10** random.randint(1, 5))) for _ in range(n)]
    # random.shuffle(arr)

    Q = random.randint(3, 100)
    ops = []

    for _ in range(Q):
        op = random.choice(["a", "b", "c", "d", "e", "f", "g", "h"])

        if op == "a":
            op += " " + str(random.randint(1, 100000))
        ops.append(op)

    lines = [
        f"{n}",
        " ".join(map(str, arr)),
        f"{Q}"
        # "".join(line)
    ]

    return "\n".join(lines + ops) + "\n"

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