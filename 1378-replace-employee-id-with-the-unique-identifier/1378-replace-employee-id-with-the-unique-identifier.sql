# Write your MySQL query statement below

select ei.unique_id,e.name from employees as  e left join employeeuni as ei on e.id = ei.id;