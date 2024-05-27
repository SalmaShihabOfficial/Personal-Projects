# CodeX-Energy-Drink-Market-Analysis
Based on their survey, the German beverage firm CodeX requested a marketing analysis on how to increase brand recognition, market share, and product development. This project is a challenge given by codebasics.
# Presentation Link:
          https://youtu.be/IkQJBP6KJKo

# Data Cleaning and Analysis using Sql

## Genderwise respondents
SELECT count(Gender) GenderNum,Gender FROM fnbmarketing.dim_repondents
group by Gender
order by GenderNum;

## tried before =0
UPDATE fact_survey_responses
SET Tried_before = "No"
WHERE Heard_before ="No"; 

UPDATE fact_survey_responses
SET Taste_Experience = 0
WHERE Tried_before ="No"; 

# QUESTIONS
## Primary Insights (Sample Sections / Questions)
Note: These insights can be derived from the survey responses
1. Demographic Insights (examples)
a. Who prefers energy drink more? (male/female/non-binary?)
b. Which age group prefers energy drinks more?
c. Which type of marketing reaches the most Youth (15-30)?
2. Consumer Preferences:
a. What are the preferred ingredients of energy drinks among respondents?
b. What packaging preferences do respondents have for energy drinks?
3. Competition Analysis:
a. Who are the current market leaders?
b. What are the primary reasons consumers prefer those brands over ours?
4. Marketing Channels and Brand Awareness:
a. Which marketing channel can be used to reach more customers?
b. How effective are different marketing strategies and channels in reaching our customers?
5. Brand Penetration:
a. What do people think about our brand? (overall rating)
b. Which cities do we need to focus more on?
6. Purchase Behavior:
a. Where do respondents prefer to purchase energy drinks?
b. What are the typical consumption situations for energy drinks among respondents?
c. What factors influence respondents' purchase decisions, such as price range and limited edition packaging?
7. Product Development
a. Which area of business should we focus more on our product development? (Branding/taste/availability)
codebasics.io
 ## Secondary Insights (Sample Sections / Questions)
Note: You need to do additional market research
### Recommendations for CodeX: Give 5 recommendations for CodeX (below are some samples)
● What immediate improvements can we bring to the product?
● What should be the ideal price of our product?
● What kind of marketing campaigns, offers, and discounts we can run?
● Who can be a brand ambassador, and why?
● Who should be our target audience, and why?

