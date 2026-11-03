nilai = int(input("Masukan Nilai : "))

if nilai >= 85:
    grade = "A"
elif nilai >= 70:
    grade = "B"
elif nilai >= 55:
    grade = "C"
else:
    grade = "D (Remedial)"

print(f"Nilai {nilai} = Grade {grade}")