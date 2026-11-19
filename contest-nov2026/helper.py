import random
import subprocess
import os
import string
from itertools import permutations
direct = "contest-nov2026/buying-cookies"

CPP_EXECUTABLE = f"./{direct}/solution.exe" 

NUM_TESTS = 5

# ==========================
# Random testcase generator
# ==========================

def generate_testcase():
    """
    Return the entire input as a string.
    Modify this function for your own problem.
    """

    n = random.randint(1, int(10**random.randint(1, 7)))
    k = random.randint(1, int(10**random.randint(1, 7)))
    # arr = [random.randint(1, int(10** random.randint(1, 3))) for _ in range(2*n)]
    # random.shuffle(arr)
    # state = random.choice(['aan', 'uit'])

    lines = [
        f"{n} {k}",
        # "\n".join(new_arr)
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