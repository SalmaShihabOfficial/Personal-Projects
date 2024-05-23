CREATE DATABASE hr;

USE hr;

SELECT * FROM human_res;

ALTER TABLE human_res
CHANGE COLUMN id emp_id VARCHAR(20) NULL;

DESCRIBE human_res;

SELECT birthdate FROM human_res;

SET sql_safe_updates = 0;

UPDATE human_res
SET birthdate = CASE
	WHEN birthdate LIKE '%/%' THEN date_format(str_to_date(birthdate, '%m/%d/%Y'), '%Y-%m-%d')
    WHEN birthdate LIKE '%-%' THEN date_format(str_to_date(birthdate, '%m-%d-%Y'), '%Y-%m-%d')
    ELSE NULL
END;

ALTER TABLE human_res
MODIFY COLUMN birthdate DATE;

UPDATE human_res
SET hire_date = CASE
	WHEN hire_date LIKE '%/%' THEN date_format(str_to_date(hire_date, '%m/%d/%Y'), '%Y-%m-%d')
    WHEN hire_date LIKE '%-%' THEN date_format(str_to_date(hire_date, '%m-%d-%Y'), '%Y-%m-%d')
    ELSE NULL
END;

ALTER TABLE human_res
MODIFY COLUMN hire_date DATE;

UPDATE human_res
SET termdate = date(str_to_date(termdate, '%Y-%m-%d %H:%i:%s UTC'))
WHERE termdate IS NOT NULL AND termdate != ' ';

ALTER TABLE human_res
MODIFY COLUMN termdate DATE;

ALTER TABLE human_res ADD COLUMN age INT;

UPDATE human_res
SET age = timestampdiff(YEAR, birthdate, CURDATE());

SELECT 
	min(age) AS youngest,
    max(age) AS oldest
FROM human_res;

SELECT count(*) FROM human_res WHERE age < 18;

SELECT COUNT(*) FROM human_res WHERE termdate > CURDATE();

SELECT COUNT(*)
FROM human_res
WHERE termdate = '0000-00-00';

SELECT location FROM human_res;
