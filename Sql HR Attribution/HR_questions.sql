-- QUESTIONS
select count(*) count from human_res
where age >18 and termdate is null;

-- 1. What is the gender breakdown of employees in the company?
select gender,count(*) count from human_res
where age > 18 and termdate is null
group by gender;


-- 2. What is the race/ethnicity breakdown of employees in the company?
select race, count(*) from human_res
where age>= 18
group by race
order by race;

-- 3. What is the age distribution of employees in the company?
select min(age) minimun_age, max(age) maximun_age
from human_res
where age>= 18 and termdate is null;

SELECT FLOOR(age/10)*10 AS age_group, COUNT(*) AS count
FROM human_res
WHERE age >= 18
GROUP BY FLOOR(age/10)*10;

SELECT 
  CASE 
    WHEN age >= 18 AND age <= 24 THEN '18-24'
    WHEN age >= 25 AND age <= 34 THEN '25-34'
    WHEN age >= 35 AND age <= 44 THEN '35-44'
    WHEN age >= 45 AND age <= 54 THEN '45-54'
    WHEN age >= 55 AND age <= 64 THEN '55-64'
    ELSE '65+' 
  END AS age_group, 
  COUNT(*) AS count
FROM 
  human_res
WHERE 
  age >= 18
GROUP BY age_group
ORDER BY age_group;

SELECT 
  CASE 
    WHEN age >= 18 AND age <= 24 THEN '18-24'
    WHEN age >= 25 AND age <= 34 THEN '25-34'
    WHEN age >= 35 AND age <= 44 THEN '35-44'
    WHEN age >= 45 AND age <= 54 THEN '45-54'
    WHEN age >= 55 AND age <= 64 THEN '55-64'
    ELSE '65+' 
  END AS age_group, gender,
  COUNT(*) AS count
FROM 
  human_res
WHERE 
  age >= 18
GROUP BY age_group, gender
ORDER BY age_group, gender;

-- 4. How many employees work at headquarters versus remote locations?
select location, count(*) from human_res
where age>18
group by location;

-- 5. What is the average length of employment for employees who have been terminated?
select round(avg(timestampdiff(year,hire_date,termdate))) avg_timeperiod
from human_res
where age > 18 and termdate is not null and termdate < curdate();


-- 6. How does the gender distribution vary across departments and job titles?
select department,gender,count(*) total
from human_res
where age>18 and termdate is null
group by department,gender
order by department;

-- 7. What is the distribution of job titles across the company?
select jobtitle,count(*) from human_res
where age>18 and termdate is null
group by jobtitle
order by jobtitle;

-- 8. Which department has the highest turnover rate?
SELECT department, COUNT(*) as total_count, 
    SUM(CASE WHEN termdate <= CURDATE() AND termdate is not null THEN 1 ELSE 0 END) as terminated_count, 
    SUM(CASE WHEN termdate is null THEN 1 ELSE 0 END) as active_count,
    (SUM(CASE WHEN termdate <= CURDATE() THEN 1 ELSE 0 END) / COUNT(*)) as termination_rate
FROM human_res
WHERE age >= 18
GROUP BY department
ORDER BY termination_rate;

-- 9. What is the distribution of employees across locations by city and state?
SELECT location_state, COUNT(*) as count
FROM human_res
WHERE age >= 18
GROUP BY location_state
ORDER BY count DESC;

-- 10. How has the company's employee count changed over time based on hire and term dates?
SELECT 
    YEAR(hire_date) AS year, 
    COUNT(*) AS hires, 
    SUM(CASE WHEN termdate is not null AND termdate <= CURDATE() THEN 1 ELSE 0 END) AS terminations, 
    COUNT(*) - SUM(CASE WHEN termdate is not null  AND termdate <= CURDATE() THEN 1 ELSE 0 END) AS net_change,
    ROUND(((COUNT(*) - SUM(CASE WHEN termdate is not null AND termdate <= CURDATE() THEN 1 ELSE 0 END)) / COUNT(*) * 100),2) AS net_change_percent
FROM human_res 
WHERE age >= 18
GROUP BY 
    YEAR(hire_date)
ORDER BY 
    YEAR(hire_date) ASC;
    
    
-- 11. What is the tenure distribution for each department?
SELECT 
    YEAR(hire_date) AS year, 
    COUNT(*) AS hires, 
    SUM(CASE WHEN termdate is not null AND termdate <= CURDATE() THEN 1 ELSE 0 END) AS terminations, 
    COUNT(*) - SUM(CASE WHEN termdate is not null AND termdate <= CURDATE() THEN 1 ELSE 0 END) AS net_change,
    ROUND(((COUNT(*) - SUM(CASE WHEN termdate is not null AND termdate <= CURDATE() THEN 1 ELSE 0 END)) / COUNT(*) * 100),2) AS net_change_percent
FROM 
    human_res
WHERE age >= 18
GROUP BY 
    YEAR(hire_date)
ORDER BY 
    YEAR(hire_date) ASC;