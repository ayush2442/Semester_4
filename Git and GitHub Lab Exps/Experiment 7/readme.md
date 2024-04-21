Experiment-2.3: Creation of Forks on GitHub

What is a fork?
A GitHub fork is a copy of a repository (repo) that sits in your account rather than the account from which you forked the data from. Once you have forked a repo, you own your forked copy. This means that you can edit the contents of your forked repository without impacting the parent repo.



Image source: Colin Williams, NEON

When you fork a repo, you make an exact copy of the repo in your own account. Once you create a copy in your account you own it! Thus, you you can freely modify it as you wish.

An example forking workflow
In this workshop you will work from a central repo owned by Earth Lab. You will:

1.     Fork this repo owned by Earth Lab into your GitHub account.

2.     Clone the fork of your repo, so you can edit the contents locally

3.     Make edits to your local cloned copy of the repo on your computer

4.     add, commit and push those edits back to your fork on GitHub

5.     Suggest the changes that you made, to be added to the Earth Lab central repo using a pull request

This workflow has a central repository - which is the one that Earth Lab owns. Everyone in the workshop will then contribute to the central repository. There are other Git and GitHub workflows too. However in this workshop, we are demonstrating a central repo workflow.



In this workshop, we are using a GitHub workflow that assumes a central repository. Earth Lab owns the central repo that you will initially fork. Image source: Colin Williams, NEON

How to Fork a Repo
You can fork any repo by clicking the fork button in the upper right hand corner of a repo page.



Click on the Fork button to fork any repo on github.com. Source: GitHub Guides.



When you fork a repo on GitHub, the forked repo is copied to your GitHub account, and you can edit it as the repo owner. Source: National Ecological Observatory Network (NEON)

 Challenge: fork the Earth Lab 14ers repo
Login to your GitHub account.
Navigate to the earthLab/14ers-git/` repo.
Use the fork button to create your a fork of the 14ers-git repo in your account.
 Data tip: You can change the name of a forked repo and it will still be connected to the central repo from which it was forked. For now, leave it the same.

Explore your 14ers-git fork
Now, navigate to your new fork. Its name should be:

YOUR-USER-NAME/14ers-git.

Sometimes, navigating between repositories and keeping track of where you are on the GitHub website can be confusing. In this case note the URL. The Earth Lab central repo contains the earthlab account name:

https://github.com/earthlab/14ers-git
and your forked repo contains your account name:

https://github.com/YOUR-USER-NAME/14ers-git
A good way to figure out which repo you are viewing is to look at the

The name of the repo: does it contain your username? Or your colleagues? Or Earth Lab’s?
Look at the path or URL to the repo and ask the same questions.
Your fork vs. the central repo
When you create a fork, it is an exact copy, or completely in sync with, the parent repo. You could confirm this by comparing your fork to the Earth Lab central repository using the pull request option. We will learn about pull requests in the next lesson

The fork will remain in sync with the central repo until:

You modify your forked copy of the repo.
The central repository is modified.
If you modify your forked repo, the changes will not be reflected in the central repo until you merge your fork with the central repo.

Forking a repository
You might fork a project to propose changes to the upstream repository. In this case, it's good practice to regularly sync your fork with the upstream repository. To do this, you'll need to use Git on the command line. You can practice setting the upstream repository using the same octocat/Spoon-Knife repository you just forked.

1.     On GitHub.com, navigate to the octocat/Spoon-Knife repository.

2.     In the top-right corner of the page, click Fork.


3.     Under "Owner," select the dropdown menu and click an owner for the forked repository.

4.     By default, forks are named the same as their upstream repositories. Optionally, to further distinguish your fork, in the "Repository name" field, type a name.

5.     Optionally, in the "Description" field, type a description of your fork.

6.     Optionally, select Copy the DEFAULT branch only.

For many forking scenarios, such as contributing to open-source projects, you only need to copy the default branch. If you do not select this option, all branches will be copied into the new fork.

7.     Click Create fork.

Note: If you want to copy additional branches from the upstream repository, you can do so from the Branches page.

Cloning your forked repository
Right now, you have a fork of the Spoon-Knife repository, but you do not have the files in that repository locally on your computer.

1.     On GitHub.com, navigate to your fork of the Spoon-Knife repository.

2.     Above the list of files, click  Code.


3.     Copy the URL for the repository.

o   To clone the repository using HTTPS, under "HTTPS", click .

o   To clone the repository using an SSH key, including a certificate issued by your organization's SSH certificate authority, click SSH, then click .

o   To clone a repository using GitHub CLI, click GitHub CLI, then click .


4.     Open Git Bash.

5.     Change the current working directory to the location where you want the cloned directory.

6.     Type git clone, and then paste the URL you copied earlier. It will look like this, with your GitHub username instead of YOUR-USERNAME:

7.     git clone https://github.com/YOUR-USERNAME/Spoon-Knife
8.     Press Enter. Your local clone will be created.

9.     $ git clone https://github.com/YOUR-USERNAME/Spoon-Knife
10.  > Cloning into `Spoon-Knife`...
11.  > remote: Counting objects: 10, done.
12.  > remote: Compressing objects: 100% (8/8), done.
13.  > remote: Total 10 (delta 1), reused 10 (delta 1)
14.  > Unpacking objects: 100% (10/10), done.
Configuring Git to sync your fork with the upstream repository
When you fork a project in order to propose changes to the upstream repository, you can configure Git to pull changes from the upstream repository into the local clone of your fork.

1.     On GitHub.com, navigate to the octocat/Spoon-Knife repository.

2.     Above the list of files, click  Code.


3.     Copy the URL for the repository.

·       To clone the repository using HTTPS, under "HTTPS", click .

·       To clone the repository using an SSH key, including a certificate issued by your organization's SSH certificate authority, click SSH, then click .

·       To clone a repository using GitHub CLI, click GitHub CLI, then click .


4.     Open Git Bash.

5.     Change directories to the location of the fork you cloned.

To go to your home directory, type just cd with no other text.
To list the files and folders in your current directory, type ls.
To go into one of your listed directories, type cd your_listed_directory.
To go up one directory, type cd ...
6.     Type git remote -v and press Enter. You will see the current configured remote repository for your fork.

7.     $ git remote -v
8.     > origin  https://github.com/YOUR_USERNAME/YOUR_FORK.git (fetch)
9.     > origin  https://github.com/YOUR_USERNAME/YOUR_FORK.git (push)
10.  Type git remote add upstream, and then paste the URL you copied in Step 3 and press Enter. It will look like this:

11.  git remote add upstream https://github.com/ORIGINAL_OWNER/Spoon-Knife.git
12.  To verify the new upstream repository you have specified for your fork, type git remote -v again. You should see the URL for your fork as origin, and the URL for the upstream repository as upstream.

13.  $ git remote -v
14.  > origin    https://github.com/YOUR_USERNAME/YOUR_FORK.git (fetch)
15.  > origin    https://github.com/YOUR_USERNAME/YOUR_FORK.git (push)
16.  > upstream  https://github.com/ORIGINAL_OWNER/ORIGINAL_REPOSITORY.git (fetch)
17.  > upstream  https://github.com/ORIGINAL_OWNER/ORIGINAL_REPOSITORY.git (push)
Now, you can keep your fork synced with the upstream repository with a few Git commands.

Editing a fork
You can make any changes to a fork, including:

·        Creating branches: Branches allow you to build new features or test out ideas without putting your main project at risk.

·        Opening pull requests: If you want to contribute back to the upstream repository, you can send a request to the original author to pull your fork into their repository by submitting a pull request.

Find another repository to fork
Fork a repository to start contributing to a project. You can fork any public repository to your personal account, or to an organization where you have permission to create repositories. If you have access to a private repository and the owner permits forking, you can fork the repository to your personal account, or to an organization on GitHub Team where you have permission to create repositories. You cannot fork a private repository to an organization using GitHub Free.

You can browse Explore GitHub to find projects and start contributing to open source repositories.

Next steps
You have now forked a repository, practiced cloning your fork, and configured an upstream repository.

<<<<<<< HEAD:content/get-started/quickstart/fork-a-repo.md

=====

main:content/pull-requests/collaborating-with-pull-requests/working-with-forks/fork-a-repo.md

·        You can also create a new repository where you can put all your projects and share the code on GitHub. Creating a repository for your project allows you to store code in GitHub. This provides a backup of your work that you can choose to share with other developers.

·        Each repository on GitHub is owned by a person or an organization. You can interact with the people, repositories, and organizations by connecting and following them on GitHub.
