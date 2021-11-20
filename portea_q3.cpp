/*Subject ID with highest average marks rounded to 2 decimal places*/
SELECT round(max(avg(marks)),2) AS avg_mark FROM Marks GROUP BY subject_id;

/*Students with their marks in last attempt of Subject with ID 5*/
SELECT * FROM User WHERE subject_id='5' ORDER BY attempt_no DESC LIMIT 0,1;
