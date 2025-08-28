#!/bin/bash

NUM_DAYS=96
REPO_DIR="." # Change this if your repo is elsewhere

cd "$REPO_DIR"

for i in $(seq 1 $NUM_DAYS); do
  
# For macOS (BSD date command)
# Calculate date: (100 - i) days ago
    DAYS_AGO=$(($NUM_DAYS - $i))
    COMMIT_DATE=$(date -v-"${DAYS_AGO}"d +"%Y-%m-%d %H:%M:%S %z")

  # Add some logic here to ensure something changes in the repo each day
  # Example: create a file or touch an existing one
  echo "Commit for day $i" >> "daily_log.txt"

  git add .

  # Commit with the backdated date
  export GIT_COMMITTER_DATE="$COMMIT_DATE"
  git commit --date="$COMMIT_DATE" -m "100 Days of Code: Day $i"
  unset GIT_COMMITTER_DATE

  echo "Created commit for Day $i on $COMMIT_DATE"
done

echo "Script finished. Review commits locally, then push to GitHub."
