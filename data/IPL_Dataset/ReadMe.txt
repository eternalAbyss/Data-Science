If you are faced with error while uploading ipl_ball_by_ball.csv in DataBricks, use the split files.

The downstream error might be due to the size of the file. 
One of the possible solutions is to load the file to databricks by splitting it into smaller files. 
After that you can follow the concept of converting it to df and doing union on all those individual dfs 
to combine it into a single df.
