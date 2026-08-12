import random
import subprocess
import os
import string
from itertools import permutations
direct = "stairs"

# CPP_EXECUTABLE = "./dragons_peak_adapted/solution"      # Linux/macOS
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

    n = random.randint(5, int(10**random.randint(1, 5)))
    arr = [random.randint(1, int(10** random.randint(1, 9))) for _ in range(n)]
    # random.shuffle(arr)

    lines = [
        f"{n}",
        " ".join(map(str, arr))
        # "".join(line)
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