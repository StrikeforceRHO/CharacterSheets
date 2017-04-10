# Character Sheets
This is where all your character sheets will be.


# Git installation tutorial

First download and install <a href=https://git-for-windows.github.io/>Git for Windows</a>.
Use all the default options during the installation unless you, surprisingly, know what you're doing.
After Git for Windows is installed, run Git Bash from your Start Menu.
Once Git Bash is running, copy and paste each command below (commands are only on lines with a $, do not copy the $).
To paste, right click and click "Paste" on the dropdown menu.
Typing CTRL+v means something different in this stripped-down Linux environment than it does in Windows.
Hit ENTER after copying each command, modifying any obvious section such as: "my_github_username" to use your own username.

I have included comments before each command to give you some insight into what it does.

<pre>
user@machine MINGW64 ~
#Clone the character sheets repository.
#This downloads the whole repository to your computer.
#In this example, we are downloading the character sheets repository into
#the directory "jeese_campaign" which you can rename to anything you like.
#Please don't use spaces in the directory name if you decide to change it.
#git will not like you if you do.
$ git clone https://github.com/StrikeforceRHO/CharacterSheets.git ./jeese_campaign                                                                                                                                                                                           gn
Cloning into './jeese_campaign'...
remote: Counting objects: 56, done.
remote: Compressing objects: 100% (39/39), done.
remote: Total 56 (delta 27), reused 36 (delta 13), pack-reused 0
Unpacking objects: 100% (56/56), done.

user@machine MINGW64 ~
#cd stands for "change directory" which is used to move around the filesystem.
$ cd ./jeese_campaign/

user@machine MINGW64 ~
#We configure git to use our GitHub username.
#Include the quotes.
$ git config --global user.name "my_github_username"

user@machine MINGW64 ~
#We configure git to use our GitHub email address.
#Again, include the quotes.
$ git config --global user.email "my_email_i_used_for_github@site.com"

user@machine MINGW64 ~
#We configure git to keep track of our GitHub credentials
#so we don't have to keep logging in all the time.
#You can skip this step if you'd rather have git ask you
#to login every time you push your changes.
$ git config --global credential.helper wincred

user@machine MINGW64 ~/jeese_campaign (master)
#We are pulling the latest changes to our local version
#of the repository.
#There should not be anything new since you last checked
#when we intially cloned it.
#That's why we get the message "Already up-to-date."
$ git pull origin master
From https://github.com/StrikeforceRHO/CharacterSheets
 * branch            master     -> FETCH_HEAD
Already up-to-date.

user@machine MINGW64 ~/jeese_campaign (master)
#Use Perl to execute our Perl script to automagically
#update the character sheet old_man.pdf.
#This process adds all the changes we've made (none in
#this case), commits them to our local repository, pulls
#the latest from the GitHub repository online in case
#someone else's changes were pushed before you got the
#chance, then pushes our changes to the online repository
#for all to pull when they get the chance.
#When making changes to your own sheet, change the name
#of the file old_man.pdf to your own sheet.
#Remember to include the .pdf extension, and you can
#change the name of your file to something else
#but please don't use spaces.
#I don't like file names with spaces.
$ perl commit.pl old_man.pdf
On branch master
Your branch is up-to-date with 'origin/master'.
nothing to commit, working tree clean
From https://github.com/StrikeforceRHO/CharacterSheets
 * branch            master     -> FETCH_HEAD
Already up-to-date.
Everything up-to-date
Changes to old_man.pdf committed successfully.

user@machine MINGW64 ~/jeese_campaign (master)
#We check our status to make sure there are no
#outstanding changes that didn't get pushed to
#the online repository on GitHub.
#If everything worked correctly, you should get
#a similar message to this.
$ git status
On branch master
Your branch is up-to-date with 'origin/master'.
nothing to commit, working tree clean
</pre>
