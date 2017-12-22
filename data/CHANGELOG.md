##
##
Changelogs
use up and down to scroll through sections
the latest will always be on top
Entrys with #### are private builds
Entrys with ### are public builds
Entrys with ##### are notes
Entrys with ###### are file changes

#####
Pre Releases are uncompiled

#####Hello! If your bored why not join my Discord
server? https://discord.gg/H3Mkktq

#####Expected time for 1.4.4.9-E
23/12/17 ~12-20:00
^total guess for most likely time^
^can be done anytime before      ^
^also may be later than that date^

###Changelog for 1.4.4.8.1-E
*Fixed discord link, someone revoked old one -_-
*Bootloader message thing
*Simplified stuff for EIXMODE and SALTMODE
*Key displays being wrong should be fixed permanetly
*Improvement to system stability and convenience

###Changelog for 1.4.4.8-E
*Major bugfix
*Auto load EixMode9 if no payload is found
*Improvement to system stability and convenience

##Changelog for 1.4.4.7-E
*Minor fixes
*Improvement to system stability and convenience

###Changelog for 1.4.4.6-E
*Fixed splash again
*Removed several build flags
*Moved stuff into vram
*Improvement to system stability and convenience

##Changelog for 1.4.4.5-E
*Fix splash?
*Improvement to system stability and convenience

##Changelog for 1.4.4.4-E
*Rebased, some stuff may be missing
*Improvement to system stability and convenience

##Changelog for 1.4.4.3-E
*Fixed nags, i think
*Improvement to system stability and convenience

##Changelog for 1.4.4.2-E
*Fixed a minor derp
*New buildflags
*Replace some stuff
*Added NicoAICPs splash screen :)
*Improvement to system stability and convenience

######
SALTYEIX will build a salt mode eix mode build that works
TEST just changes some text cuz im lazy

##
Changelog for 1.4.4.1-E
*Fixed nags?
*Improvement to system stability and convenience

##
Changelog for 1.4.4.0-E
*Backups
*Bonus drive stuff
*Reduced splash time
*Something else but i fell asleep -_-
*Improvement to system stability and convenience

###
Changelog for 1.4.3.16-E
*Fixed a bug found by SirNapkin1334
*Non EIXMODE builds only have half support for issues i
will try to fix issues with those builds but this is
mainly focused on EIXMODE
*Added a vram0.img
*Added SOME of the new stuff thats in GodMode9
*EIXMODE now loads boot.firm and Eix.firm from any drive
*Improvement to system stability and convenience

######
vram0.img
*Thanks.txt
*ReiSix.firm or Rei-Six.firm, both are the same
*rei folder with the patches and firmware.bin

###
Changelog for 1.4.3.15-E
*Reordered the HOMEMore...Menu
*Fixed bootmenu saying GodMode9
*Cleaned vram0.img a little bit
*All builds will now contain SALT AL3X10 and EIX builds
*Improvement to system stability and convenience

######
Files changed
*source/godmode.c
*data/vram0.img
*data/CHANGELOG.md

###
Changelog for 1.4.3.14-E
*Scraped the 1.4.3.11-E stuff
*Added the cool new entrypoint detector
*Cleaned up CHANGELOG.md a little
*Improvement to system stability and convenience

######
Files changed
*source/godmode.c
*source/common/entrypoints.h
*source/godmode.h
*source/main.c
*source/start.s
*source/nand/nand.c
*source/nand/nand.h
*source/utils/scripting.c
*data/CHANGELOG.md

###
Changelog for 1.4.3.13-E
*Battery colors
*New colors
*Improvement to system stability and convenience

###
Changelog for 1.4.3.12-E
*Added some flashy battery colors
*synced some stuff
*Improvement to system stability and convenience

######
Files changed
*data/vram0.img
*source/godmode.c

####
Changelog for 1.4.3.11-E
*Added write perms for read only places to get rid of the
annoying nag, these are nonfunctional
*Got a new tester!
*added some experimental stuff
*Improvement to system stability and convenience

#####
Tester
SSQ

###
Changelog for 1.4.3.10-E
*Fixed a minor fuck up in the spelling
*Improvement to system stability and convenience

###
Changelog for 1.4.3.9-E
*Fixed a PERM lock
*Improvement to system stability and convenience

###
Changelog for 1.4.3.8-E
*This is that last public build before i rebase
*Removed undocumented feature (8) due to ntrboot errors,
sorry but even though it was useful it was too dangerous
*All 0 testers and anyone on my server will get a copy of
this build with a fully hardcoded aeskeydb.bin
*Modded battery bar - my be inaccurate
*All public builds after and including this one will be in
EIXMODE because it looks sexier, if you want a different
mode then either ask me nicely or build it yourself
*Improvement to system stability and convenience

####
Changelog for 1.4.3.7-E
*removed giant vram0.img (M:/vram.mem) because it wouldnt
mount :/
*Improvement to system stability and convenience

######
Files changed
*data/CHANGLOG.md
*data/INFOBOX.md

####
Changelog for 1.4.3.6-E
*Thanks to VinsCool i added a undocumented feature (8)
*Added stuff to the vram0.img (M:/vram.mem)
*Temporarily lost my main tester and only tester, i need new
testers!
*Refurbished the CHANGELOG.md
*Added gm9 script scanning for (0:)
*Added gm9 scripts for booting from more drives
*You can now drag&drop gm9 scripts to the root of the sd and
load them from the scripts menu
*updated INFOBOX.md
*Added back the offical readme
*Improvement to system stability and convenience

#####
New scripts
*boot from sys twln (2:).gm9
*boot from sys twlp (3:).gm9
*boot from sys sd (A:).gm9
*boot from emu twln (5:).gm9
*boot from emu twlp (6:).gm9
*boot from emu sd (B:).gm9
*boot from ramdrive (9:).gm9 - why do i need this? Because
my o3ds doesnt clear ram on boot
*boot from cartridge (C:).gm9 - just incase

#####
Lost tester
Ronan - coming back after November

####
Changelog for 1.4.3.5-E
*All private builds now have aeskeydb.bin hardcoded idk if i
would be allowed to do this with public builds so its
private builds only
*Changed all future private builds to
" TESTVER: [version number]"
*Added all boot paths for -DEIXMODE
*Added a load boot menu?
*Improvement to system stability and convenience

###
Changelog for 1.4.3.4-E
*Set splash time back to 1500ms
*Improvement to system stability and convenience

###
Changelog for 1.4.3.3-E
*Fixed BootLoader, its safe to install now
*Improvement to system stability and convenience

####
Changelog for 1.4.3.2-E
*Removed HomeMore...Menu2 for compatibility issues :/
*Hopefully fixed bootloader
*Improvement to system stability and convenience

####
Changelog for 1.4.3.1-E
*Honestly only built this one so i can have it display
OwO
as the splash message
*improved HomeMore...Menu 2
*copied the bootmenu stuff from older build (1.4.2.6-E)
plz work
*Improvement to system stability and convenience

####
Changelog for 1.4.3.0-E
*Added a HomeMore...Menu2
*Improvement to system stability and convenience

#####
HomeMore...Menu2
*Contains all 3 restores

###
Changelog for 1.4.3-E
*Fixed an issue with build errors -_-
*First Public Public Release!
*Added my crappy reedme back in and set it to hardcode
*Updated changelog format, now should look better on the 3ds
screen
*Or worse...
*Set Splash time to 1500ms
*Renamed "Show GodMode9 ReadMe" to "Show EixMode9 ReadMe"
*Improvement to system stability and convenience

####
Changelog for 1.4.2.12-E
*Added AR Games restore
*Added HomeMenu inject and restore
*Added offical README.md
*Removed my crappy readme
*Added a -DEIXMODE flag in MakeFile
*Fixed a few bugs - caused some more - then fixed while
compiling
*Now using version strings in godmode.c, doing it from the
terminal was causing some problems
*Updated MakeFile
*Cleaned up changelog some more :P
*Improvement to system stability and convenience

#####
-DEIXMODE
*Boot key is now X
*boot.firm paths are
0:/Eix.firm 1:/Eix.firm 4:/Eix.firm 8:Eix.firm
*(planned) Add all drives excluding 9: Z: M: X: G: and
mounted stuff for booting
*(planned) passcode protected boot? (X X X X A)
*Changed bar color to COLOR_DARKGREY?

####
Changelog for 1.4.2.11-E
*Set splash time to be o3ds speed on n3ds (3000ms)
*Set 10 panes
*Added h&s + AR Games Inject side by side
*Added a all caps message "IF YOU SEE THIS THEN REBOOT" i
need to know what was done to see this so i can prevent it
*Improvement to system stability and convenience

####
Changelog for 1.4.2.10-E
*Extended line (ocd kicked in)
*Fixed version not displaying correctly in 1.4.2.9-E
*Cleaned up changelog
*Found a way to compile without drowning out errors with
gibberish!
*Fixed Version moving the start position of the line, was
introduced in 1.4.2.9-E
*Cleaned unused files from source
*Fixed some screwups in the ReadMe
*Improvement to system stability and convenience

#####
Line Fix 1
EixMode9 Version 1.4.2.10-E
--------------------------
Now
EixMode9 Version 1.4.2.10-E
---------------------------

#####
Line Fix 2
EixMode9 Version 1.4.2.10-E
          --------------------------
Now
EixMode9 Version 1.4.2.10-E
--------------------------
idk when i added 10 extra spaces in front of the line :/

####
Changelog for 1.4.2.9-E
*Small bug fixes (readme changelog and infobox)
*Small bug fixes in makefile
*Improvement to system stability and convenience

####
Changelog for 1.4.2.8-E
*Cleaned up changelog even more
*Fixed AR Games Inject (again -_-)
*Set panes to 5 because 4 isnt enough, 5 is just right for my
normal useage
*Finally seperated README.md CHANGELOG.md and INFOBOX.md, now
i can wright a readme... yay...
*Added a readme file -_-
*Improvement to system stability and convenience

####
Changelog for 1.4.2.7-E
*Cleaned up the changelog
*Added 2 more panes
*Removed any possibility of a PERM lock
*Changed instructions panel version string to
"EixMode9 Version: "
*Fixed CrimsonMaples AR Games Inject to work properly
*Removed dupe refrences from gameutil.c
*Got a Main Tester! Ronan!
*Improvement to system stability and convenience

####
Changelog for 1.4.2.6-E
*Removed some unused code from gameutil.c
*Switched SALTMODE to START again -_-
*Improvement to system stability and convenience

####
Changelog for 1.4.2.5-E
*Changed SALTMODE start up key from START to R (broken thumb)
*Added .gm9 scripts to boot firm files from certain locations
*Improvement to system stability and convenience

#####
Scripts
boot from 8:
boot from 4:
boot from 1:
boot from 0:

Payloads must be named Eix.firm

####
Changelog for 1.4.2.4-E
*Fixed a problem with the Channelog scrolling
*1.4.2.3-E - 1.4.2.0-E had a bug with perms being reset in
xorpads gamecarts and game images, its fixed now
*Improvement to system stability and convenience

####
Changelog for 1.4.2.3-E
*Added a "Special Thanks" list to M:/vram.mem (vram0.img)
*Improvement to system stability and convenience

#####
vram0.img

Special Thanks:
CrimsonMaple   
d0k3           
Kazuma77       
Ronan          
Braiam         
VinsCool       


Follows a 15 byte line so it looks good in hexeditor

####
Changelog for 1.4.2.2-E
*Fixed bootloader displaying R+Left for menu, now says R for
menu
*Changed default SDCard/MicroSDCard lable from GM9SD to EIXSD
*Improvement to system stability and convenience

####
Changelog for 1.4.2.1-E
*Fixed the perms being able to be locked on root
*Changed PERM_ORANGE to display PERM_BULE colors so that it
doesnt look bad
*Changed the bootloader keys from R1+left to R1, i have a
broken left thumb so this is just to help me out
*Changed the order of entrys in the bootloader so that you
can shutdown faster on a accidental boot
*Changed the battery refresh rate to prevent over use, now
refreshes every 5 mins instead of every 2 mins
*Chnaged the HARDCODE_README to hardcode a changelog for
reasons
*Added loading boot.firm from the bonus drive (8:/Eix.firm)
this is untested so idk what will or will not load properly
*The Bonus Drive is only on certain systems, not every system
has one, please dont boot from it if you dont have it
*Improvement to system stability and convenience

#####
BootMenu
Resume bootloader
GodMode9
Payloads...
Scripts...
Reboot
Shutdown

####
Changelog for 1.4.2.0-E
*Modified the perms system, starts with all perms
*Improvement to system stability and convenience
