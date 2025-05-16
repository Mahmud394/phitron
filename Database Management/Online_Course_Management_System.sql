CREATE DATABASE  Online_Course_Management_System

USE Online_Course_Management_System

CREATE TABLE Instructor (	
    InstructorID INT AUTO_INCREMENT PRIMARY KEY,	
    Name VARCHAR(255) NOT NULL,	
    Email VARCHAR(255) NOT NULL UNIQUE,	
    Phone VARCHAR(15),	
    Department VARCHAR(50)	
);	

CREATE TABLE Course (	
    CourseID INT AUTO_INCREMENT PRIMARY KEY,	
    Title VARCHAR(255) NOT NULL,	
    Credits INT NOT NULL,	
    InstructorID INT,	
    FOREIGN KEY (InstructorID) REFERENCES Instructor(InstructorID)	
);	

CREATE TABLE Student (	
    StudentID INT AUTO_INCREMENT PRIMARY KEY,	
    Name VARCHAR(255) NOT NULL,	
    Email VARCHAR(255) NOT NULL UNIQUE,	
    Phone VARCHAR(15)	
);

CREATE TABLE Enrollment (	
    EnrollmentID INT AUTO_INCREMENT PRIMARY KEY,	
    StudentID INT,	
    CourseID INT,	
    EnrollmentDate DATE NOT NULL,	
    FOREIGN KEY (StudentID) REFERENCES Student(StudentID),	
    FOREIGN KEY (CourseID) REFERENCES Course(CourseID)	
);	

INSERT INTO Instructor (Name, Email, Phone, Department) VALUES
('Dr. Alice Johnson', 'alice.johnson@example.edu', '123-456-7890', 'Computer Science'),
('Dr. Bob Smith', 'bob.smith@example.edu', '987-654-3210', 'Mathematics'),
('Dr. Carol Lee', 'carol.lee@example.edu', '222-333-4444', 'Physics'),
('Dr. David Kim', 'david.kim@example.edu', '555-666-7777', 'Chemistry'),
('Dr. Emma Wilson', 'emma.wilson@example.edu', '888-999-0000', 'Biology'),
('Dr. Frank Brown', 'frank.brown@example.edu', '101-202-3030', 'History'),
('Dr. Grace Miller', 'grace.miller@example.edu', '404-505-6060', 'English'),
('Dr. Henry Clark', 'henry.clark@example.edu', '707-808-9090', 'Philosophy'),
('Dr. Irene Turner', 'irene.turner@example.edu', '112-233-3444', 'Economics'),
('Dr. Jack Evans', 'jack.evans@example.edu', '445-556-6677', 'Engineering');

INSERT INTO Course (Title, Credits, InstructorID) VALUES
('Intro to Programming', 3, 1),
('Data Structures', 4, 1),
('Calculus I', 4, 2),
('General Physics', 4, 3),
('Organic Chemistry', 3, 4),
('Biology Basics', 3, 5),
('World History', 2, 6),
('English Literature', 3, 7),
('Ethics and Society', 2, 8),
('Microeconomics', 3, 9);


INSERT INTO Student (Name, Email, Phone) VALUES
('John Doe', 'john.doe@example.com', '111-222-3333'),
('Jane Smith', 'jane.smith@example.com', '444-555-6666'),
('Emily Davis', 'emily.davis@example.com', '777-888-9999'),
('Michael Brown', 'michael.brown@example.com', '123-321-1234'),
('Sarah Johnson', 'sarah.johnson@example.com', '321-123-4321'),
('Daniel Garcia', 'daniel.garcia@example.com', '654-987-4567'),
('Laura Lee', 'laura.lee@example.com', '789-123-7890'),
('Robert Wilson', 'robert.wilson@example.com', '888-321-6543'),
('Linda Martinez', 'linda.martinez@example.com', '456-789-4561'),
('James Anderson', 'james.anderson@example.com', '333-444-5555');

INSERT INTO Enrollment (StudentID, CourseID, EnrollmentDate) VALUES
(1, 1, '2025-01-10'),
(1, 2, '2025-01-10'),
(2, 2, '2025-01-11'),
(3, 3, '2025-01-12'),
(4, 4, '2025-01-13'),
(5, 5, '2025-01-14'),
(6, 6, '2025-01-15'),
(7, 7, '2025-01-16'),
(8, 8, '2025-01-17'),
(9, 9, '2025-01-18');

-- 2. Insert a new enrollment record (StudentID 5) into course with highest credits 

INSERT INTO Enrollment (StudentID, CourseID, EnrollmentDate)
SELECT 5, CourseID, CURRENT_DATE
FROM Course
ORDER BY Credits DESC
LIMIT 1;

-- Update the instructor of CourseID 3 to a new instructor (e.g., InstructorID = 7)
UPDATE Course
SET InstructorID = 7
WHERE CourseID = 3;

--  Find names of instructors who teach the most total credits
SELECT i.Name, SUM(c.Credits) AS TotalCredits
FROM Instructor i
JOIN Course c ON i.InstructorID = c.InstructorID
GROUP BY i.InstructorID, i.Name
ORDER BY TotalCredits DESC
LIMIT 1;

-- List all students enrolled in more than two courses
SELECT S.StudentID, S.Name, COUNT(E.EnrollmentID) AS CourseCount
FROM Student S
JOIN Enrollment E ON S.StudentID = E.StudentID
GROUP BY S.StudentID
HAVING COUNT(E.EnrollmentID) > 2;



