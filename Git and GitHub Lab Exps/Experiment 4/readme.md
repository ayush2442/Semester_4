Experiment-2.1: Editing a file and committing changes on GitHub

GitHub Desktop tracks all changes to all files as you edit them. You can decide how to group the changes to create meaningful commits.

 About commits

Similar to saving a file that's been edited, a commit records changes to one or more files in your branch. Git assigns each commit a unique ID, called a SHA or hash, that identifies:

The specific changes
When the changes were made
Who created the changes
When you make a commit, you must include a commit message that briefly describes the changes. You can also add a co-author on any commits you collaborate on.

If the commits you make in GitHub Desktop are associated with the wrong account on GitHub, update the email address in your Git configuration using GitHub Desktop.

Repository administrators can enable rulesets for a branch to enforce specific conventions when committing. For example, a ruleset can require a commit to be signed, or for an issue number to be referenced at the start of a commit message. GitHub Desktop will display a warning and prevent committing if a commit does not follow the rulesets.

Choosing a branch and making changes
1.     Create a new branch, or select an existing branch by clicking  Current Branch on the toolbar and selecting the branch from the list.



2.     Using your favorite text editor, such as Visual Studio Code, make the necessary changes to files in your project.

Choosing how to display diffs
You can change the way diffs are displayed in GitHub Desktop to suit your reviewing needs.

To change how you view diffs, in the top-right corner of the diff view, click shy211.224l-.29 1.106c-.168.646-.715 1.196-1.458 1.26a8.006 8.006 0 0 1-1.402 0c-.743-.064-1.289-.614-1.458-1.26l-.289-1.106c-.01shy066-.079-.15shy212-.224a5.738 5.738 0 0 1-.66shy386c-.123-.082-.233-.09-.299-.071l-1.103.303c-.644.176-1.392-.021-1.82-.63a8.12 8.12 0 0 1-.704-1.218c-.315-.675-.111-1.422.363-1.891l.815-.806c.05-.048.09shy147.08shy294a6.214 6.214 0 0 1 0-.772c.01-.147-.03shy246-.08shy294l-.815-.806C.635 6.045.431 5.298.746 4.623a7.92 7.92 0 0 1 .704-1.217c.42shy61 1.176-.807 1.82-.63l1.102.302c.067.019.177.011.3-.071.214-.143.437-.272.66shy386.133-.066.194-.158.211-.224l.29-1.106C6.009.645 6.556.095 7.299.03 7.53.01 7.764 0 8 0Zm-.571 1.525c-.036.003-.108.036-.137.146l-.289 1.105c-.147.561-.549.967-.998 1.189-.173.086-.34.183-.5.29-.417.27shy97.423-1.529.27l-1.103-.303c-.109-.03-.175.016-.195.045-.22.312-.412.644-.573.99-.014.031-.021.11.059.19l.815.806c.411.406.562.957.53 1.456a4.709 4.709 0 0 0 0 .582c.032.499-.119 1.05-.53 1.456l-.815.806c-.081.0shy073.159-.059.19.162.346.353.677.573.989.02.03.085.076.195.046l1.102-.303c.56-.153 1.113-.008 1.53.27.161.107.328.204.501.29.447.222.85.629.997 1.189l.289 1.105c.029.109.101.143.137.146a6.6 6.6 0 0 0 1.142 0c.036-.003.10shy036.137-.146l.289-1.105c.147-.561.549-.967.998-1.189.173-.086.34-.183.5-.29.417-.278.97-.423 1.529-.27l1.103.303c.109.029.175-.016.195-.045.22-.313.411-.644.573-.99.014-.031.021-.11-.059-.19l-.815-.806c-.411-.406-.562-.957-.53-1.456a4.709 4.709 0 0 0 0-.582c-.032-.499.119-1.05.53-1.456l.815-.806c.081-.08.073-.159.059-.19a6.464 6.464 0 0 0-.573-.989c-.02-.03-.085-.076-.195-.046l-1.102.303c-.56.153-1.113.008-1.53-.27a4.44 4.44 0 0 0-.501-.29c-.447-.222-.85-.629-.997-1.189l-.289-1.105c-.029-.11-.101-.143-.137-.146a6.6 6.6 0 0 0-1.142 0ZM11 8a3 3 0 1 1-6 0 3 3 0 0 1 6 0ZM9.5 8a1.5 1.5 0 1 0-3.001.001A1.5 1.5 0 0 0 9.5 8Z">.

To change how the entire diff is displayed, under "Diff display", select Unified or Split. The Unified view shows changes linearly, while the Split view shows old content on the left side and new content on the right side.
To hide whitespace changes so you can focus on more substantive changes, select Hide Whitespace Changes.


If you need to see more of the file than GitHub Desktop shows by default, you can expand the diff.

To see the next few lines above or below the highlighted changes, click the arrow above or below the line numbers.
To see the entire file, right-click in the diff view and click Expand Whole File.


Selecting changes to include in a commit
As you make changes to files in your text editor and save them locally, you will also see the changes in GitHub Desktop.

In the "Changes" tab in the left sidebar:

·        The red  icon indicates removed files.

·        The yellow  icon indicates modified files.

·        The green  icon indicates added files.

·        To access stashed changes, click Stashed Changes.

·        To add all changes in all files to a single commit, keep the checkbox at the top of the list selected.



·        To add all changes in one or more files to a single commit, unselect the checkboxes next to the files you don't want included, leaving only the files you want in the commit. You can toggle the checkbox with the Spacebar or Enter keys after selecting a file.

Creating a partial commit
If one file contains multiple changes, but you only want some of those changes to be included in a commit, you can create a partial commit. The rest of your changes will remain intact, so that you can make additional modifications and commits. This allows you to make separate, meaningful commits, such as keeping line break changes in a commit separate from code or prose changes.

To exclude changed lines from your commit, click one or more changed lines so the blue disappears. The lines that are still highlighted in blue will be included in the commit.



Discarding changes
If you have uncommitted changes that you don't want to keep, you can discard the changes. This will remove the changes from the files on your computer. You can discard all uncommitted changes in one or more files, or you can discard specific lines you added.

Discarded changes are saved in a dated file in the Trash. You can recover discarded changes until the Trash is emptied.

Discarding changes in one or more files
1.     In the list of changed files, select the files where you want to discard the changes since the last commit. To select multiple files, click shift and click on the range of files you want to discard changes from.

2.     Click Discard Changes or Discard Selected Changes to discard changes to one or more files, or Discard All Changes to discard changes to all files since the last commit.



3.     To confirm the changes, in the "Confirm Discard Changes" window, review the files affected and click Discard Changes.

Discarding changes in one or more lines
You can discard one or more changed lines that are uncommitted.

Note: Discarding single lines is disabled in a group of changes that adds and removes lines.

To discard one added line, in the list of changed lines, right-click the line number of the line you want to discard, then select Discard Added Line.



To discard a group of changed lines, right-click the vertical bar to the right of the line numbers for the lines you want to discard, then select Discard added lines.



Write a commit message and push your changes
Once you're satisfied with the changes you've chosen to include in your commit, write your commit message and push your changes. If you've collaborated on a commit, you can also attribute a commit to more than one author.

Note: By default, GitHub Desktop will push the tag that you create to your repository with the associated commit.

1.     At the bottom of the list of changes, in the Summary field, type a short, meaningful commit message. Optionally, you can add more information about the change in the Description field.




2.     Optionally, to attribute a commit to another author, click the add co-authors icon and type the username(s) you want to include.



3.     Under the Description field, click Commit to BRANCH.

4.     If the branch you're trying to commit to is protected, Desktop will warn you.

To move your changes, click switch branches.
To commit your changes to the protected branch, click Commit to BRANCH.
5.     To push your local changes to the remote repository, in the repository bar, click Push origin.



6.     If you have a pull request based off the branch you are working on, GitHub Desktop will display the status of the checks that have run for the pull request next to the "Current Branch" section of the repository bar.

If a pull request has not been created for the current branch, GitHub Desktop will give you the option to preview the changes and create one.



Managing your commit history
If you need to undo a commit or revise your commit history (to make it easier for a reviewer to follow your changes), GitHub Desktop provides a number of options for managing your commit history.
