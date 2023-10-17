# Write your MySQL query statement below
select Students.student_id,Students.student_name,subjects.subject_name,count(Examinations.student_id) as attended_exams
from Students cross join Subjects
left join examinations on Students.student_id=Examinations.student_id
and Subjects.subject_name=Examinations.subject_name
Group by students.student_id,students.student_name,subjects.subject_name
order by students.student_id,subjects.subject_name;