# Write your MySQL query statement below
select person.firstName, person.lastName , city , state
from person
left join address on person.personId = address.personId


