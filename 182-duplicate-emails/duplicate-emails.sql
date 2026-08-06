# Write your MySQL query statement below
select email from person
GROUP BY email
HAVING count(*)>1