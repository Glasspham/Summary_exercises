class Rectangle:
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def calculate_area(self):
        return self.length * self.width


class Trapezoid:
    def __init__(self, base1, base2, height):
        self.base1 = base1
        self.base2 = base2
        self.height = height

    def calculate_area(self):
        return (self.base1 + self.base2) * self.height / 2


rectangle = Rectangle(5, 8)
trapezoid = Trapezoid(3, 7, 4)

if rectangle.calculate_area() > trapezoid.calculate_area():
    print("Rectangle has a larger area.")
elif rectangle.calculate_area() < trapezoid.calculate_area():
    print("Trapezoid has a larger area.")
else:
    print("Both shapes have equal areas.")
