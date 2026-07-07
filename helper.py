import random
import subprocess
import os

# ==========================
# Configuration
# ==========================

direct = "dragons_peak_adapted"

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

    n = random.randint(1, 1000)
    p = random.randint(1, 100)
    q = random.randint(1, 100)
    arr = []

    for i in range(n):
        if i==0:
            arr.append(random.randint(1, 50))
        else: 
            arr.append(random.randint(arr[-1], 10000-n+i))

    lines = [
        f"{n} {p} {q}",
        " ".join(map(str, arr))
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