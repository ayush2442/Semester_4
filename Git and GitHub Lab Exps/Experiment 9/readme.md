Experiment-3.2: Understanding the various reset modes in GitHub.

Git Reset
Sometimes, when working with a Git repository, you realize that you don’t want to share, or even keep your changes, and you need a way to undo them, like undoing your last commit, for example.  Git provides several methods of going back to a prior commit and working from that point. One of the most powerful tools Git provides to change to a prior state is the Git reset command. 


Git reset is similar to Git checkout as it allows you to move the HEAD to any previous commit in your history.  Unlike checkout however, Git reset will effectively uncommit all the changes between your starting state and the specified commit.  Git can completely discard all of those changes, as you will see with the Git reset hard command, or it can preserve those changes in various states, as is the case with both the Git reset soft and Git reset mixed commands.

 

Other Platforms

Git Reset HEAD
To best understand how Git reset works, we need to cover a few different Git core concepts.  The first, being HEAD. 

One of the best definitions of HEAD comes from the Pro Git book:

 “Usually the HEAD file is a symbolic reference to the branch you’re currently on. By symbolic reference, we mean that unlike a normal reference, it contains a pointer to another reference.”


It’s very easy to see what HEAD is pointing at by running the Git status command, but you can also look at HEAD directly in the .git folder of your project.  The .git folder is used by Git to manage version control, and inside there is a special file called HEAD. This file is very small and normally only contains one line, which looks something like this:

ref: refs/heads/main

Git checkout and Git reset both change where HEAD is pointing, but in the case of checkout, it leaves any other pointers in place.  Git reset, on the other hand, tells Git that we want to move the pointer HEAD is referencing as well.  

Git Reset, Working Directory, and Index
In order to understand Git reset, you must first understand another core Git concept, which is the internal states that Git uses to manage your work. You might sometimes see these three states called “the three trees”.  

The three states are:

Working Directory
Index 
Commit History
The Working Directory
The working directory is sometimes referred to as your Work In Progress, or WIP.  The working directory is simply referring to your files that have been saved, but not staged or committed yet.  You can think of your working directory as your sandbox to test any changes before you stage, commit, or share them.

Index
The index is the “staging area” in your Git workflow.  Inside every .git folder, there is a special file called index. This is the file that tracks the files that are staged when you perform a Git add. 

You can open and look at this file, but it is not human-readable. Git compresses the file into a binary large object, or blob, and adds those blobs to the index file.  The index is sometimes called the “staging index” as that is its function.  When you make a commit, what you are committing are all the refs found in the index. 

Commit History
This is likely the area where you already have the clearest understanding.  Your commit history is the chain of commits, or snapshots of the project, that you’ve made over time. 

While most commonly, we simply move forward in time by adding new commits to our history, having a clear chain of commits makes it possible to change where HEAD points without any issue.  It’s important to understand that resetting to a particular commit means that you’re changing your current working directory and potentially the indexes that were previously committed.  

Git Reset Soft
The first of the three modes you can use with Git reset is --soft for the Git reset soft command.  This option moves HEAD back to the specified commit, undoes all the changes made between where HEAD was pointing and the specified commit, and saves all the changes in the index. In other words, Git re-adds the changes as staged, ready to be committed again. 
Let’s look at an example. Let’s say we are working on a branch called main and have three commits with short SHAs of 98cs9, 34ac2, and f30ab, in that order from oldest to newest. 

If HEAD is pointed at f30ab when we start, and then perform a git reset –soft 98ca9, HEAD will move to that commit, along with the pointer that points to the last commit of the chain (in this instance, called main).  

All of the changes that were committed in 34ac2 and f30ab are preserved and re-added to the index as staged changes.  


Git reset soft is a very safe way to move back to a prior point in your Git history and preserve all changes. Since the changes are preserved, this is one way to rewrite your history, applying all the changes across multiple commits into one commit while providing a path for making additional changes at the same time. 

Git Reset Mixed
Similar to Git reset soft, performing a Git reset with the --mixed option will undo all the changes between HEAD and the specified commit, but will preserve your changes in the Working Directory, as unstaged changes.  If you perform a Git reset and do not supply an option of --soft, --mixed, or --hard, Git will use --mixed by default. 

Let’s look at the same example from earlier. Again, let’s say we are working on a branch called main and have three commits with short SHAs of 98cs9, 34ac2, and f30ab, in that order from oldest to newest. 

If HEAD is pointed at f30ab when we start and then perform a git reset –mixed 98ca9, HEAD will move to that commit, along with the pointer that points to the last commit of the chain (in this instance, called main).  

All of the changes that were committed in 34ac2 and f30ab are preserved and re-added to the working directory as unstaged changes.  


As with Git reset soft, Git reset mixed is a very safe way to move back to a prior point in your Git history without losing your changes. Re-writing your Git history this way allows you to selectively keep only what you want and modify the project as you see fit. Once your changes are good to go, you can simply do a Git add, and Git commit to add those changes to your project’s Git history.

Git Reset Hard
Unlike with the Git reset soft and mixed, Git reset hard carries some danger, as it will automatically discard all the changes made between HEAD and the specified commit.  

Git reset hard should be used with extreme caution and only for local changes you’re sure you want to eliminate.  Performing a Git reset –hard when working on a shared branch with commits that can be accessed by other contributors can cause issues with your Git history. 
With all that being said, Git reset hard is actually a very handy tool to quickly go back to a previous state of your project.  

Let’s say you’re working locally and have made a couple of commits, only to realize then that you’ve been working from a bad premise or have injected an anti-pattern into your work. None of the work in those commits would be usable, so you conclude there is no reason to save those changes. This is a good example of when Git reset hard can be a real-time saver, letting you discard those changes and start over again.   

Git Reset Hard to Discard Working Directory and Index Changes
One of the other ways you can leverage Git reset hard is to use it to discard all the changes in the working directory and in the index.  Instead of declaring a specific commit, you would run git reset –hard on its own.  This still repoints Git HEAD to where it’s already checked out and discards any changes to the index and working directory that had not been committed.
While this does still carry some danger, it’s extremely useful if you realize that you’ve added code you most certainly do not want to add to your Git history and just want a quick reset option to get you back to the initial state.  

Other Platforms

How to Git Reset in the CLI
Before performing any Git reset actions, you will need to first see your recent history.  You can run a git log here to see the entire history and full commit SHAs. However, for this example, we only care about the last few commits and only need the short SHAs to reference those commits. 

To see just the last ten commits and the shortened commit SHAs, you can run: 

git log -10 –oneline



Now that you can see which commits you can reference, you can proceed with Git reset actions.  

Git Reset Soft in the CLI
To perform a Git reset with the soft option, use the command:

git reset –soft <commit> 

Here, <commit> should be replaced with a commit SHA, specifying a commit earlier in your Git history that you want to reset to.  

After running a Git reset, it’s a good idea to run a Git status, as we do in the example below. This is a very safe operation that will help you confirm that things went as expected.  





Git Reset Mixed in the CLI
To perform a Git reset with the mixed option, use the command:

git reset –mixed <commit> 

Alternatively, since --mixed is the default for Git reset, you could achieve the same result by using:

git reset <commit> 

The term <commit> should be replaced with a commit SHA, specifying a commit earlier in your Git history you want to reset to. Again in this example, you can see the result after running a Git status.



Git Reset Hard in the CLI
We will caution you to use this command only on your local branches and only when you are sure you want to discard all the changes.  There is no way to undo a Git reset hard, and all your changes will be permanently destroyed. 

To perform a Git reset with the hard option in the CLI, you can run:

git reset –hard <commit> 

Replace <commit>  with the commit SHA to specify which commit earlier in your Git history you want to reset to. You can see the result after running Git status, as shown below.
