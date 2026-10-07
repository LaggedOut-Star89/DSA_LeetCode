# Write your MySQL query statement below
select(
    select distinct salary
    from Employee
    order by salary desc
    limit 1 offset 1
)as SecondHighestSalary;

#() using with select - results in null if the data is not present
#for nth higheest=limit 1 offset N-1