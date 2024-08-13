iterations = 30 #change this to change iteration count

area = 2 * (2 ** 0.5)
bN = (2 ** 0.5)
for n in range(1, iterations + 1):
  a = (2 ** n) * ((2 - bN) ** 0.5)
  bN = (2 + bN) ** 0.5
  b = 2 - bN
  area += a * b
  print(area)
