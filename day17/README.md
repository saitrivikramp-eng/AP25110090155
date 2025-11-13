 This is a C programming assignment that requires you to make a program to analyze employee salaries, personalizing the output with student details and showing basic statistics like the minimum, maximum, and average salary.
 core task:
 Collects the student's Name, Registration Number, and Section.Accepts salaries of up to 10 employees, lets the user stop early using a special value (-1).Calculates and displays the highest salary, lowest salary, and average salary.Shows your name, registration number, and section at the end.
 key steps:
 Student Details Input:
 Take your name, registration number, and section as strings (arrays of characters).
 Salary Input:
 Use a loop to enter up to 10 salaries.If the user types "-1," stop accepting more salaries early.
 Statistics Calculation:
 Find the maximum salary by checking each input.Find the minimum salary the same way.Calculate the average salary using the sum divided by the number of employees.
 Output:
 Show all entered salaries, then display highest, lowest, and average.Print your identification information at the end.
 examples:
 Suppose You Enter:Name:
 AditiReg No: SRM123Section: ANumber of salaries: 3Salaries entered: 5000, 12000, 7000
 Output Will Be:
 All entered salaries listed (5000, 12000, 7000)Highest salary = 12000Lowest salary = 5000Average salary = (5000 + 12000 + 7000) / 3 = 8000Student details printed at the endImportant PointsYou don't have to enter exactly 10 salaries; you can type "-1" to end early.Use character arrays to store student names and IDs.For calculations, use loops and basic if statements.Print "End of Program Output" with your details to finish.
