# Write your MySQL query statement below
select f.unique_id,e.name
from Employees e
left join EmployeeUNI f
on f.id=e.id;
