print("Oh no! Your squad is being fired at")
print("What do you do?")
print("keep on firing, scream, surrender, roll over and play dead, start talking about orbital mechanics".lower)
print("just copy the thing that you want and paste it")
do=input(">").lower()
if do== "keep on firing":
    print("You ran out of thing to fire")
    print("what do you want to do?")
    print("whack with the end of the firing tool, surrender, commit seppuku, beg to open peace talks".lower)
    do=input(">").lower()
    if do=="whack with the end of the firing tool":
        print("ouch! they all get a concussion")
        print("what do you do?")
        print("use the bazooka, banzai charge, run around in circles".lower)
        do=input(">").lower()
        if do=="use the bazooka":
            print("you held the bazooka backwards and you blew yourself up")
            print("BAZOOKA ENDING")
        elif do=="banzai charge":
            print("You banzai charge with bombs")
            print("You blow the enemy up, but you die in the process")
            print("BOOM ENDING")
        elif do=="run around in circles":
            print("you run around circles")
            print("You slip because the ground is wet because the fight was with water guns.")
            print("you slip and split open your head")
            print("CRACKED-OPEN-HEAD ENDING")
        else:
            print("That wasn't an option!! Your were hit")
            print("NOT AN OPTION ENDING")
    elif do=="surrender":
        print("They take you prisoner")
        print("PRISONER ENDING")
    elif do=="commit seppuku":
        print("You commit seppuku. Eveyone else in your squad follows you")
        print("DEATH ENDING")
    elif do=="beg to open peace talks":
        print("they open peace talks, but they break down and they continue firing")
        print("NO PEACE ENDING")
    else:
        print("That wasn't an option!! Your were hit")
        print("NOT AN OPTION ENDING")
elif do=="scream":
    print("You scream. Everyone looks at you. It gets very awkward")
    print("what do you want to do?")
    print("sing the ussr national anthem, sneeze, scream more".lower)
    do=input(">").lower()
    if do=="sing the ussr national anthem":
        print("Everyone hate you because your a communist even thought your not")
        print("what do you do?")
        print("start talking bad about the ussr,start talking good about the ussr".lower)
        do=input(">").lower()
        if do=="start talking bad about the ussr":
            print("Everyone forgives you, but they still think your sus")
            print("what do you do?")
            print("be the sus, don't be the sus, say hi".lower)
            do=input(">").lower()
            if do=="be the sus":
                print("You be the sus. Everyone vote to eject you")
                print("EJECTED ENDING")
            elif do=="don't be the sus":
                print("you are not sus anymore. They don't eject you.")
                print("what do you do?")
                print("accuse red, say sus".lower)
                do=input(">").lower()
                if do=="accuse red":
                    print("everyone agrees. red was an imposter")
                    print("what do you want to do?")
                    print("accuse black, accuse green".lower)
                    do=input(">").lower()
                    if do=="accuse black":
                        print("black is accused. He was ejected and he was an imposter. You win")
                        print("VICTORY ENDING")
                    elif do=="accuse green":
                        print("You were wrong. They ejected you instead. You are mad-sad")
                        print("MAD-SAD ENDING")
                    else:
                        print("That wasn't an option!! Your were hit")
                        print("NOT AN OPTION ENDING")
                elif do=="say sus":
                    print("everyone looks at YOU until you faint because of awkardness")
                    print("FAINT OF AWKWARDNESS ENDING")
                else:
                    print("That wasn't an option!! Your were hit")
                    print("NOT AN OPTION ENDING")
            elif do=="say hi":
                print("Everyone says hi back")
                print("what do you do?")
                print("say hello, say bye".lower)
                do=input(">").lower()
                if do=="say hello":
                    print("everyone says hello back")
                elif do=="say bye":
                    print("NOW THAT IS SUS. You are ejected even though you weren't an imposter")
                    print("NON-IMPOSTER EJECTED ENDING")
                else:
                    print("That wasn't an option!! Your were hit")
                    print("NOT AN OPTION ENDING")
            else:
                print("That wasn't an option!! Your were hit")
                print("NOT AN OPTION ENDING")
        elif do==("start talking good about the ussr"):
            print("everyone hates you now. They burn you alive")
            print("BURNT COMMUNIST ENDING")
        else:
            print("That wasn't an option!! Your were hit")
            print("NOT AN OPTION ENDING")
    elif do=="sneeze":
        print("Everyone runs away because they think you have Covid-19")
        print("What do you do?")
        print("follow them ,stay where you are, wander into the forest".lower)
        do=input(">").lower()
        if do=="follow them":
            print("you follow them. you pass Covid-19 to everyone.")
            print("COVID-19 ENDING")
        elif("stay where you are"):
            print("An emergency Covid-19 response team arrives and takes you away")
            print("C19RT ENDING")
        else:
            print("That wasn't an option!! Your were hit")
            print("NOT AN OPTION ENDING")
    elif do=="scream more":
        print("everyone writhes in agony on the floor beacuse your screaming.")
        print("what do you do?")
        print("laugh, say sorry, keep screaming".lower)
        do=input(">").lower()
        if do=="laugh":
            print("everyone thinks that your insane. You yourself think that your insane. Your sanity drains out of you bit by bit.")
            print("INSANITY ENDING")
        elif do=="say sorry":
            print("everone forgives you")
            print("FORGIVENESS ENDING")
        elif do=="keep screaming":
            print("everyones eardrums rupture and everyones ears start to bleed. They all die of infection.")
            print("BLOODY EAR ENDING")
        else:
            print("That wasn't an option!! Your were hit")
            print("NOT AN OPTION ENDING")
    else:
        print("That wasn't an option!! Your were hit")
        print("NOT AN OPTION ENDING")
elif do=="surrender":
    print("You surrender. Everyone is sad because it is no longer fun.")
    print("what do you want to do?")
    print("call cuboid, be sad with everyone else, fart loudly".lower)
    do=input(">").lower()
    if do=="call cuboid":
        print("The great cuboid arrives. He starts to ramble on about VSC and everyone has a good laugh")
        print("VSC CAUSES LAUGHS ENDING")
    elif do=="be sad woth everyone else":
        print("Everyone become depressed")
        print("DEPRESSED ENDING")
    elif do=="fart loudly":
        print("You fart. Everyone farts with you. The atmosphere is replace by farts. Everyone dies because of this.")
        print("FART ENDING")
    else:
        print("That wasn't an option!! Your were hit")
        print("NOT AN OPTION ENDING")
elif do=="roll over and play dead":
    print("everyone panics.")
    print("what do you want to do?")
    print("ambush people, keep on playing dead".lower)
    do=input(">").lower()
    if do=="ambush people":
        print("You ambush someone. You are discovered and you are captured")
        print("FAILED AMBUSH ENDING")
    elif do=="keep on playing dead":
        print("everyone holds a funeral for you")
        print("FUNERAL ENDING")
    else:
        print("That wasn't an option!! Your were hit")
        print("NOT AN OPTION ENDING")
elif do=="start talking about orbital mechanics":
    print("everone is bored out of there minds")
    print("what do you want to do?")
    print("call the great lawrence, start a nasa fan club".lower)
    do=input(">").lower()
    if do=="call the great lawrence":
        print("lawrence hears you talking about orbital mechanics and feels right at home")
        print("however, he feels lonely")
        print("what do you do?")
        print("call cuboid, call enackerboi, call foolishmortal".lower)
        do=input(">").lower()
        if do=="call cuboid":
            print("you call cuboid. Lawrence is sort of happy")
            print("SORT OF HAPPY ENDING")
        elif do=="call enackerboi":
            print("You call enackerboi and lawrence is okay with it.")
            print("OK WITH IT ENDING")
        elif do=="call foolishmortal":
            print("you call foolishmortal and lawrence gets mad. They start fighting.")
            print("what do you do?")
            print("stop the fight, let the fight happened".lower)
            do=input(">").lower()
            if do=="stop the fight":
                print("lawrence and foolishmortal get angry about your interruption. they swell to 100 times there normal size and they step on you")
                print("STOMPED ENDING")
            elif do=="let the fight happen":
                print("it was an epic fight that lasted 4.827 hours.")
                print("foolishmortal and lawrence are both injured")
                print("what do you do?")
                print("help foolishmortal, help lawrence")
                do=input(">").lower()
                if do=="help foolishmortal":
                    print("you help foolishmortal. lawrence is offended. he launches rockets at you.")
                    print("ROCKETS ENDING")
                elif do=="help lawrence":
                    print("you help lawrence. foolishmortal is offended. he makes you to foolish to exist")
                    print("FOOLISH ENDING")
                else:
                    print("That wasn't an option!! Your were hit")
                    print("NOT AN OPTION ENDING")
            else:
                print("That wasn't an option!! Your were hit")
                print("NOT AN OPTION ENDING")
        else:
            print("That wasn't an option!! Your were hit")
            print("NOT AN OPTION ENDING")
    elif do=="start a nasa fan club":
        print("Everyone dies at the sacrilege that is starting a nasa fan club")
        print("SACRILEGE ENDING")
    else:
        print("That wasn't an option!! Your were hit")
        print("NOT AN OPTION ENDING")
else:
    print("That wasn't an option!! Your were hit")
    print("NOT AN OPTION ENDING")
while 1:0