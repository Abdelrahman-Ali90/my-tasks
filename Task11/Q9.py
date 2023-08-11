import math

class Parallelogram:
    def __init__(self, side1, side2, angle):
        self.side1 = side1
        self.side2 = side2
        self.angle = angle
    
    def calculate_area(self):
        radian_angle = math.radians(self.angle)
        area = self.side1 * self.side2 * math.sin(radian_angle)
        return area


side1 = float(input("Enter the length of side 1: "))
side2 = float(input("Enter the length of side 2: "))
angle = float(input("Enter the angle between the sides in degrees: "))

parallelogram = Parallelogram(side1, side2, angle)
area = parallelogram.calculate_area()
print("The area of the parallelogram is:", area)
