# Read input
a, b, c, d = map(int, input().split())

# Compute Misha's score
misha_score = max(0.3 * a, a - (a / 250) * c)

# Compute Vasya's score
vasya_score = max(0.3 * b, b - (b / 250) * d)

# Compare and output
if misha_score > vasya_score:
    print("Misha")
elif vasya_score > misha_score:
    print("Vasya")
else:
    print("Tie")
