# Movie Rating Prediction Using Item-Based Collaborative Filtering (IBCF)

## Idea and Purpose

This project employs the Item-Based Collaborative Filtering (IBCF) algorithm to predict missing movie ratings in a given dataset. Such a technology is crucial for streaming services to enhance personalized user experiences through improved recommendation systems. By accurately predicting user preferences, the system can suggest movies that align closely with individual tastes, leading to higher user satisfaction and engagement.

![image](img.jpg)

## Data

### Training Data

The program was trained on a dataset containing over a million entries. Each entry represents a user's rating for a particular movie and includes three features: user ID, movie ID, and rating (ranging from 0 to 5).

### Test Data

The program's objective was to predict missing ratings for specific users. These missing values total 5000 entries, which are collected in the "test.csv" file.

## Code Structure

The code is divided into two parts and a main script:

### Part One

- **data.cpp and data.h**: 
  - The purpose of data.cpp and data.h is to handle the reading and processing of the movie rating dataset. This involves reading the dataset from a file, counting the number of ratings each user has given, and the number of ratings each movie has received.

- **top_users_movies.cpp and top_users_movies.h**: 
  - The purpose of top_users_movies.cpp and top_users_movies.h is to identify and display the top 10 users and movies based on the number of ratings they have given or received. This helps to quickly understand the most active users and the most rated movies in the dataset.

### Part Two

- **functions.cpp and functions.h**: 
  - The purpose of functions.cpp and functions.h is to define and implement the functions needed to calculate similarities between movies and predict movie ratings based on the Item-Based Collaborative Filtering (IBCF) algorithm. These functions are essential for the prediction process in the main script.

### Main Script

- **main.cpp**: 
  - The main script orchestrates the entire process of reading data, processing it, predicting movie ratings using the Item-Based Collaborative Filtering (IBCF) algorithm, and outputting the results to a file.

## Results

The results of the program, including predictions for each missing value of the 5000 entries in the test dataset, are provided in the "submission.csv" file located in the results folder.

## Evaluation

The results were evaluated through a [Kaggle competetion]([URL](https://www.kaggle.com/competitions/cmp2003-rating-prediction/overview)) (now expired), and an accuracy of 0.98615 was achieved.
