import random
import subprocess
import os

# ==========================
# Configuration
# ==========================

direct = "boeken-kopen"

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

    a = random.randint(1, 10000)
    b = random.randint(1, 10000)
    c = random.randint(1, 10000)

    a_list = [random.randint(1, 10000) for _ in range(a)]
    b_list = [random.randint(1, 10000) for _ in range(b)]
    c_list = [random.randint(1, 10000) for _ in range(c)]

    lines = [
        f"{a} {b} {c}",
        " ".join(list(map(str, a_list))),
        " ".join(list(map(str, b_list))),
        " ".join(list(map(str, c_list)))
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