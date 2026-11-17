# Write your MySQL query statement below
SELECT em1.name
FROM Employee em1
JOIN Employee em2 ON em1.id=em2.managerId
GROUP BY em2.managerId
HAVING COUNT(em2.managerId)>=5;

