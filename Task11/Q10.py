import math

class Circle:
    def __init__(self, radius):
        self.radius = radius
    
    def area(self):
        area = 3.14159 * pow(self.radius, 2)
        return area
    
    def perimeter(self):
        perimeter = 2 * 3.14159 * self.radius
        return perimeter

radius = float(input("Enter the radius of the circle: "))

circle = Circle(radius)

perimeter = circle.perimeter()

print("The area of the circle is:", circle.area())
print("The perimeter of the circle is:", perimeter)
