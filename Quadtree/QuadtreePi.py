iterations = 10 #iterations

posArray = [[0, 0]]
nextArray = []
area = 0
roottwo = 2 ** 0.5

for n in range(iterations):
  sideLength = 1/(2**n)
  halfSide = sideLength * 0.5
  inRadius = 1 - (sideLength * roottwo)
  for pos in posArray:
    posMag = ((pos[0]**2) + (pos[1]**2)) ** 0.5
    if posMag <= inRadius:
      if pos[0] == pos[1]:
        area += (sideLength ** 2) * 0.5
      else:
        area += (sideLength ** 2)
    elif posMag < 1:
      nextArray.append(pos)
      nextArray.append([pos[0], pos[1] + halfSide])
      nextArray.append([pos[0] + halfSide, pos[1] + halfSide])
      if pos[0] != pos[1]:
        nextArray.append([pos[0] + halfSide, pos[1]])
  posArray = nextArray
  nextArray = []
  print(area * 8)
