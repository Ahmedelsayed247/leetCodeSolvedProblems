# Write your MySQL query statement below
select project_id ,Round(Avg(experience_years),2) as average_years 
from Employee as e
join Project as p
on e.employee_id  = p.employee_id 
group by project_id