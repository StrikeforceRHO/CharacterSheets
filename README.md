# CharacterSheets
This is where all your character sheets will be.


user@machine MINGW64 ~
$ git clone https://github.com/StrikeforceRHO/CharacterSheets.git ./jeese_campaign                                                                                                                                                                                           gn
Cloning into './jeese_campaign'...
remote: Counting objects: 56, done.
remote: Compressing objects: 100% (39/39), done.
remote: Total 56 (delta 27), reused 36 (delta 13), pack-reused 0
Unpacking objects: 100% (56/56), done.

user@machine MINGW64 ~
$ cd ./jeese_campaign/

user@machine MINGW64 ~
$ git config --global user.name "my_github_username"

user@machine MINGW64 ~
$ git config --global user.email "my_email_i_used_for_github@site.com"

user@machine MINGW64 ~
$ git config --global credential.helper wincred

user@machine MINGW64 ~
$ cd ./jeese_campaign/

user@machine MINGW64 ~/jeese_campaign (master)
$ git pull origin master
From https://github.com/StrikeforceRHO/CharacterSheets
 * branch            master     -> FETCH_HEAD
Already up-to-date.

user@machine MINGW64 ~/jeese_campaign (master)
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
$ git status
On branch master
Your branch is up-to-date with 'origin/master'.
nothing to commit, working tree clean
