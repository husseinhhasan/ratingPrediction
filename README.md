# Movie Rating Prediction Using Item-Based Collaborative Filtering (IBCF)

## Idea and Purpose

This project employs the Item-Based Collaborative Filtering (IBCF) algorithm to predict missing movie ratings in a given dataset. Such a technology is crucial for streaming services to enhance personalized user experiences through improved recommendation systems. By accurately predicting user preferences, the system can suggest movies that align closely with individual tastes, leading to higher user satisfaction and engagement.

## Data

### Training Data

The program was trained on a dataset containing over a million entries. Each entry represents a user's rating for a particular movie and includes three features: user ID, movie ID, and rating (ranging from 0 to 5).

### Test Data

The program's objective was to predict missing ratings for specific users. These missing values total 5000 entries, which are collected in the "test.csv" file.

## Code Structure

The code is divided into two parts and a main script:

### Part One

- **data.cpp and data.h**: 
  - Purpose and content to be detailed.

- **top_users_movies.cpp and top_users_movies.h**: 
  - Purpose and content to be detailed.

### Part Two

- **functions.cpp and functions.h**: 
  - Purpose and content to be detailed.

### Main Script

- **main.cpp**: 
  - Purpose and content to be detailed.

## Results

The results of the program, including predictions for each missing value of the 5000 entries in the test dataset, are provided in the "submission.csv" file located in the results folder.

## Evaluation

The results were evaluated through a Kaggle competition (now expired), and an accuracy of 0.98615 was achieved.
