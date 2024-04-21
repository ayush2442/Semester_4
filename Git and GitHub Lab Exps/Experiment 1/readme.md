Experiment-1.1: Install Git and creating repository


Steps For Installing Git for Windows

Installing Git prompts you to select a text editor. If you don’t have one, we strongly advise you to install prior to installing Git. Our roundup of the best text editors for coding may help you decide.

Note: If you are new to Git, refer to our post How Does Git Work to learn more about Git workflow and Git functions.

Download Git for Windows

1. Browse to the official Git website: https://git-scm.com/downloads
2. Click the download link for Windows and allow the download to complete.


Extract and Launch Git Installer

3. Browse to the download location (or use the download shortcut in your browser). Double-click the file to extract and launch the installer.


4. Allow the app to make changes to your device by clicking Yes on the User Account Control dialog that opens.


5. Review the GNU General Public License, and when you’re ready to install, click Next.


6. The installer will ask you for an installation location. Leave the default, unless you have reason to change it, and click Next.


7. A component selection screen will appear. Leave the defaults unless you have a specific need to change them and click Next.


8. The installer will offer to create a start menu folder. Simply click Next.


9. Select a text editor you’d like to use with Git. Use the drop-down menu to select Notepad++ (or whichever text editor you prefer) and click Next.


10. The next step allows you to choose a different name for your initial branch. The default is 'master.' Unless you're working in a team that requires a different name, leave the default option and click Next.


11. This installation step allows you to change the PATH environment. The PATH is the default set of directories included when you run a command from the command line. Leave this on the middle (recommended) selection and click Next.


Server Certificates, Line Endings and Terminal Emulators

12. The installer now asks which SSH client you want Git to use. Git already comes with its own SSH client, so if you don't need a specific one, leave the default option and click Next.


Note: Check out our comparison of SSH and HTTPS for Git and which one you should use.

13. The next option relates to server certificates. Most users should use the default. If you’re working in an Active Directory environment, you may need to switch to Windows Store certificates. Click Next.


14. The next selection converts line endings. It is recommended that you leave the default selection. This relates to the way data is formatted and changing this option may cause problems. Click Next.


15. Choose the terminal emulator you want to use. The default MinTTY is recommended, for its features. Click Next.


16. The installer now asks what the git pull command should do. The default option is recommended unless you specifically need to change its behavior. Click Next to continue with the installation.


17. Next you should choose which credential helper to use. Git uses credential helpers to fetch or save credentials. Leave the default option as it is the most stable one, and click Next.


Additional Customization Options

18. The default options are recommended, however this step allows you to decide which extra option you would like to enable. If you use symbolic links, which are like shortcuts for the command line, tick the box. Click Next.


19. Depending on the version of Git you’re installing, it may offer to install experimental features. At the time this article was written, the options to include support for pseudo controls and a built-in file system monitor were offered. Unless you are feeling adventurous, leave them unchecked and click Install.


Complete Git Installation Process

20. Once the installation is complete, tick the boxes to view the Release Notes or Launch Git Bash, then click Finish.


Note: Learn the differences between CLI and GUI.

How to Launch Git in Windows

Git has two modes of use – a bash scripting shell (or command line) and a graphical user interface (GUI).

Launch Git Bash Shell

To launch Git Bash open the Windows Start menu, type git bash and press Enter (or click the application icon).


Launch Git GUI

To launch Git GUI open the Windows Start menu, type git gui and press Enter (or click the application icon).


Connecting to a Remote Repository

You need a GitHub username and password for this next step.

Create a Test Directory

Open a Windows PowerShell interface by pressing Windows Key + x, and then i once the menu appears.

Create a new test directory (folder) by entering the following:

mkdir git_test

An example of the PowerShell output.


Change your location to the newly created directory:

cd git_test

Note: If you already have a GitHub repository, use the name of that project instead of git_test.

Configure GitHub Credentials

Configure your local Git installation to use your GitHub credentials by entering the following:

git config --global user.name "github_username"

git config --global user.email "email_address"

Note: Replace github_username and email_address with your GitHub credentials.

Clone a GitHub Repository

Go to your repository on GitHub. In the top right above the list of files, open the Clone or download drop-down menu. Copy the URL for cloning over HTTPS.


Switch to your PowerShell window, and enter the following:

git clone repository_url

Important: In the example above, the command will clone the repository over HTTPS. Another option is cloning with SSH URLs. For that option to work, you must generate an SSH key pair on your Windows workstation and assign the public key to your GitHub account.

List Remote Repositories

Your working directory should now have a copy of the repository from GitHub. It should contain a directory with the name of the project. Change to the directory:

cd git_project

Note: Replace git_project with the actual name of the repository you downloaded. If it’s not working, you can list the contents of the current directory with the ls command. This is helpful if you don’t know the exact name or need to check your spelling.

Once you’re in the sub-directory, list the remote repositories:

git remote -v

Pushing Local Files to the Remote Repository

Once you’ve done some work on the project, you may want to submit those changes to the remote project on GitHub.

1. For example, create a new text file by entering the following into your PowerShell window:

new-item text.txt

2. Confirmation that the new file is created.


3. Now check the status of your new Git branch and untracked files:

git status

4. Add your new file to the local project:

git add text.txt

5. Run git status again to make sure the text.txt file has been added. Next, commit the changes to the local project:

git commit -m "Sample 1"

6. Finally, push the changes to the remote GitHub repository:

git push

You may need to enter your username and password for GitHub.

 

 

Install Git on CentOS 7 With Yum or Latest Repository

Prerequisites

A Linux-based system with a CentOS 7 installed
A non-root user account with sudo privileges
Default package installer, Yum
CentOS development tools and default repositories
Option 1: Install Git with Yum

The easiest, fastest way to install Git is with Yum (Yellowdog Updater, Modified), CentOS’s package manager.
Follow these steps to install the latest version of Git on your CentOS 7 server.
1. Find and install the latest version with the command:

               yum install git

 Let the system finish installing Git.

2. Verify the installation using the command:

           git --version

The output should display the version number of Git that you have installed successfully.
For example:  git version 2.21.0
Based on the output above, you have successfully installed Git version 2.21.0 on CentOS.

 

Option 2: Install Latest Version of Git from IUS Repository

If you are seeking a custom range of options, you may prefer to install Git from IUS, a community-run source of quality packages stored in the .rpm file format (RPM packages).
Inline with Upstream Stable (IUS) provides updated versions of the key software for CentOS and Red Hat Enterprise Linux (RHEL).
Note:  You can’t directly upgrade from stock packages to IUS packages.

Step 1: Install Development Tools

Go to your default repositories provided in CentOS, and retrieve the necessary tools to build a binary for the version of Git you plan to install.

Enter:

sudo yum groupinstall "Development Tools"

Then run this command:

sudo yum install gettext-devel openssl-devel perl-CPAN perl-devel zlib-devel

Step 2: Installation From Source

Install CentOS 7 repo from IUS using the command:

sudo yum install https://centos7.iuscommunity.org/ius-release.rpm

Then:

sudo yum install git2u-all

Step 3: Verify Installation

Now, you should have the latest version.

Perform a version check for Git on your CentOS 7 server with the command:

git --version 

This ensures you have successfully installed the desired version of Git onto the CentOS 7 server.

For example: git version 2.21.0

Based on the output above, you have successfully installed Git version 2.21.0 on CentOS 7.

Remove Previous Git version with Yum

To remove an old version of Git, use this command:

sudo yum remove git


 

Creating Repository step by step without command:

step 1: After successfully setting up GitHub account login to your account. You will see the screen as below.

step 2: Click on the new repository option.

Step 3: After clicking new repository option, we will have to initialize some things like, naming our project, choosing the visibility etc. After performing these steps click Create Repository button.


Step 4: After clicking the button, we will be directed to below page. Right now the only file we have is a readme file.


Step 5: Now click on the “Upload files” button.


Step 5: Follow the steps mentioned in the Picture below and click “commit changes”

step 6: Now you will see that all of our files uploaded in our github


Hosting GitHub repository: GitHub Pages are designed to host your personal, organization, or project pages from a GitHub repository. As we already have the repository, we only have to activate our pages.

Go to settings and scroll down to github pages section. Change disable option to master branch option. Now github will do some behind the scenes work and going to publish the repository.


Now we are done and our project can be accessed worldwide.


Note: We can also add an existing project to GitHub by using the command line.
