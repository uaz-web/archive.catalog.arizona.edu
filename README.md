# Catalog Archive

## WARNING: To work with this repo, you **MUST** be using a case sensitive file system. Use `test-fs.sh` to check if your file system is case sensitive.

### How to make updates:
1. Clone repo locally
2. Delete the "archive" directory: `rm -rf archive`
3. Copy the S3 bucket down to the to the repo (this updates the correct timestamps but takes a while): `aws s3 sync s3://archive.catalog.arizona.edu archive`
4. Make the desired changes
5. Commit your changes to the repository:
	* `git add .`
	* `git commit -m <commit message>`
	* `git push`
6. Copy the updates to the S3 bucket: `aws s3 sync archive s3://archive.catalog.arizona.edu`