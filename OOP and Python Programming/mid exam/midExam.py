# 1

class StudentDatabase:
    student_list = []
    
    @classmethod
    def add_student(self, Student):
        self.student_list.append(Student)
    
    @classmethod
    def display_students(self):
        for student in self.student_list:
            print(student) 
    
class Student:
    def __init__(self, name, id):
        self.name = name
        self.id = id

    def __str__(self):
        return f"Name: {self.name} and id: {self.id}"

s1 = Student('Mahmud', 394)
StudentDatabase.add_student(s1)

s2 = Student('Nabi', 242)
StudentDatabase.add_student(s2)

StudentDatabase.display_students()

# 2
class Student:
    def __init__(self, student_id, name, department, is_enrolled):
        self.student_id = student_id
        self.name = name
        self.department = department
        self.is_enrolled = is_enrolled
    
    def __str__(self):
        return f'ID: {self.student_id}, Name: {self.name}, Department: {self.department}, enrolled: {self.is_enrolled}'

s1 = Student(394, 'mahmud', 'swe', True)
print(s1)

# 3

class Student:
    student_list = []

    def __init__(self, name, student_id):
        self.name = name
        self.student_id = student_id
        self.add_student()

    def add_student(self):
        Student.student_list.append(self)

    def __str__(self):
        return f'Name: {self.name}, ID: {self.student_id}'


student1 = Student('mahmud', 394)
student2 = Student('nabi', 242)

for student in Student.student_list:
    print(student)


# 4

class Student:
    def __init__(self, name, is_enrolled):
        self.name = name
        self.is_enrolled = is_enrolled

    def enroll_student(self):
        if not self.is_enrolled:
            self.is_enrolled = True
            print(f"{self.name} has been successfully enrolled.")
        else:
            print(f"{self.name} is already enrolled.")

s1 = Student('mahmud', False)
s1.enroll_student()
s1.enroll_student()


# 5

class Student:
    def __init__(self, name, is_enrolled):
        self.name = name
        self.is_enrolled = is_enrolled

    def enroll_student(self):
        if not self.is_enrolled:
            self.is_enrolled = True
            print(f'{self.name} has been successfully enrolled.')
        else:
            print(f'{self.name} is already enrolled.')

    def drop_student(self):
        if self.is_enrolled:
            self.is_enrolled = False
            print(f'{self.name} has dropped out.')
        else:
            print(f'{self.name} is not currently enrolled.')


s1 = Student('mahmud', False) 
s1.drop_student()      

s2 = Student('nabi', True) 
s2.drop_student()    
s2.drop_student()    


# 6

class Student:
    def __init__(self, name, student_id, department, enrollment_status):
        self.student_id = student_id
        self.name = name
        self.department = department
        self.enrollment_status = enrollment_status

    def view_student_info(self):
        print(f'Name: {self.name}, Student ID: {self.student_id}, Department: {self.department}, Enrollment_Status: {self.enrollment_status}')


student = Student('mahmud', 394, 'swe', True)
student.view_student_info()


# 7
class Student:
    student_list = []
    
    def __init__(self, name, student_id, department, enrollment_status):
        self.student_id = student_id
        self.name = name
        self.department = department
        self.enrollment_status = enrollment_status
        self.is_enrolled = enrollment_status  
        self.add_student()

    def add_student(self):
        Student.student_list.append(self)

    def view_student_info(self):
        print(f'Name: {self.name}, Student ID: {self.student_id}, Department: {self.department}, Enrollment_Status: {self.is_enrolled}')  # Use is_enrolled here

    def enroll_student(self):
        if not self.is_enrolled:
            self.is_enrolled = True
            print(f'{self.name} has been successfully enrolled.')
        else:
            print(f'{self.name} is already enrolled.')

    def drop_student(self):
        if self.is_enrolled:
            self.is_enrolled = False
            print(f'{self.name} has dropped out.')
        else:
            print(f'{self.name} is not currently enrolled.')
    
    @staticmethod
    def display_menu():
        print("Menu:")
        print("1. View All Students")
        print("2. Enroll Student")
        print("3. Drop Student")
        print("4. Exit")
    

student1 = Student('mahmud', 394, 'swe', True)
student2 = Student('nabi', 242, 'swe', False)
student3 = Student('khair', 332, 'swe', True)

def main():
    while True:
        Student.display_menu()
        choice = input("Enter choice: ")

        if choice == '1':
            for student in Student.student_list:
                student.view_student_info()  
            
        elif choice == '2':
            sid = int(input("Enter Student ID to enroll: "))
            found = False
            for student in Student.student_list:
                if student.student_id == sid:
                    student.enroll_student() 
                    found = True
                    break
            if not found:
                print("Student not found.")
            
        elif choice == '3':
            sid = int(input("Enter Student ID to drop: "))
            found = False
            for student in Student.student_list:
                if student.student_id == sid:
                    student.drop_student()  
                    found = True
                    break
            if not found:
                print("Student not found.")
            
        elif choice == '4':
            print("Exiting...")
            break
        
        else:
            print("Invalid choice.")
main()



# 8

class Student:
    student_list = []
    
    def __init__(self, name, student_id, department, enrollment_status):
        self.student_id = student_id
        self.name = name
        self.department = department
        self.enrollment_status = enrollment_status
        self.is_enrolled = enrollment_status  
        self.add_student()

    def add_student(self):
        Student.student_list.append(self)

    def view_student_info(self):
        print(f'Name: {self.name}, Student ID: {self.student_id}, Department: {self.department}, Enrollment_Status: {self.is_enrolled}')  # Use is_enrolled here

    def enroll_student(self):
        if not self.is_enrolled:
            self.is_enrolled = True
            print(f'{self.name} has been successfully enrolled.')
        else:
            print(f'{self.name} is already enrolled.')

    def drop_student(self):
        if self.is_enrolled:
            self.is_enrolled = False
            print(f'{self.name} has dropped out.')
        else:
            print(f'{self.name} is not currently enrolled.')
    
    @staticmethod
    def display_menu():
        print("Menu:")
        print("1. View All Students")
        print("2. Enroll Student")
        print("3. Drop Student")
        print("4. Exit")
    

student1 = Student('mahmud', 394, 'swe', True)
student2 = Student('nabi', 242, 'swe', False)
student3 = Student('khair', 332, 'swe', True)

def main():
    while True:
        Student.display_menu()
        choice = input("Enter choice: ")

        if choice == '1':
            for student in Student.student_list:
                student.view_student_info()  
            
        elif choice == '2':
            try:
                sid = int(input("Enter Student ID to enroll: "))
                found = False
                for student in Student.student_list:
                    if student.student_id == sid:
                        student.enroll_student() 
                        found = True
                        break
                if not found:
                    print("Student not found.")
            except ValueError:
                print("Invalid input! Please enter a valid student ID.")
            
        elif choice == '3':
            try:
                sid = int(input("Enter Student ID to drop: "))
                found = False
                for student in Student.student_list:
                    if student.student_id == sid:
                        student.drop_student()  
                        found = True
                        break
                if not found:
                    print("Student not found.")
            except ValueError:
                print("Invalid input! Please enter a valid student ID.")
            
        elif choice == '4':
            print("Exiting...")
            break
        
        else:
            print("Invalid choice.")
main()



# 9

class Student:
    def __init__(self, name, student_id, department, is_enrolled): 
        self._name = name
        self.__student_id = student_id                
        self._department = department   
        self.__is_enrolled = is_enrolled  

    
    def get_student_id(self):
        return self.__student_id
    
    def set_student_id(self, student_id):
        self.__student_id = student_id
    
    def get_is_enrolled(self):
        return self.__is_enrolled
    
    def set_is_enrolled(self, is_enrolled):
        self.__is_enrolled = is_enrolled

    def display_student_info(self):
        print(f'Name: {self._name}, Student ID: {self.__student_id}, Department: {self._department}, Enrolled:{self.__is_enrolled}')



student = Student('mahmud', 394,'swe' , True)
student.display_student_info()

print(student._name)  
print(student.get_student_id()) 
student.set_student_id(242)      
print(student.get_student_id())
