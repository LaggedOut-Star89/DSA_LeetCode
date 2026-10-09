# Write your MySQL query statement below
WITH CTE AS (
    SELECT *,
           ROW_NUMBER() OVER (PARTITION BY player_id ORDER BY event_date) AS rn
    FROM Activity
)
SELECT player_id,event_date as 'first_login'
FROM CTE
WHERE rn = 1;