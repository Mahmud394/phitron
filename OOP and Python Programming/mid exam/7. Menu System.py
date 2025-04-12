"""Create a menu-driven system with the following options:
1. View All Students
2. Enroll Student
3. Drop Student
4. Exit
Handle the user’s choice using input prompts.
"""
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
