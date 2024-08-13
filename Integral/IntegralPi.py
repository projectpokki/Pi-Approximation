iterations = 20 #change value to how many iterations you want to run

heightOfX = {0: 1}
area = 1
for i in range(1, iterations + 1):
  slices = 2**i
  for j in range(1, slices, 2):
    xPos = j / slices
    heightOfX[xPos] = (1 - (xPos**2))**0.5
    area -= ((heightOfX[xPos - 1 / slices] - heightOfX[xPos]) / slices)
  print("iteration " + str(i) + ":\t" + str(area * 4))
  
