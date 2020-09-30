# COMPETITIVE_PROGRAMMING...

This repository is for people who are already into CP or want to begin with it.
Here I have collected some precious codes/algorithm implementations most of which are my implementations of the algorithms as I understand it but some of them are also very similar to Ashish Gupta's codes or cp-algorithms codes because hey, we all have to learn from somewhere right?

I'll keep adding more quality content into this repo as I come across them.

First of all, Let's start with the very basic: Setting up the environment

What I prefer for CP is Visual Studio Code with C++, so here is how to install and set up VS Code.  
[Video Tutorial of Rachit Jain for setting up VS Code](https://www.youtube.com/watch?v=Y-_3rXgrRAY).

After installing VS Code and setting it up, also install Code Runner Extension from the extensions section, and in its settings.json file, edit the cpp setting and set it to something like this  
"cpp": "cd $dir && g++ $fileName -o $fileNameWithoutExt && Get-Content input.txt | $dir$fileNameWithoutExt | Out-File output.txt -Encoding Default",  
this will allow you to take input from input.txt and output to output.txt file.  
Now all you need is a template.  

At present, I prefer to keep it simple and use things only when the problem/question requires it.
So my template:

#include <bits/stdc++.h>  
using namespace std;

#define endl '\n'  
#define int long long

int32_t main()  
{  

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	//Code From Here

	return 0;  
}  

Okay now you are good to go. Let's get you some problems. 
For that, sign up on any online judge. (Codeforces is my personal favorite)  
A nice starting point would be to start from beginning, solve some easy problems. 

For that, start from Div 2A ladder from [a2oj](https://a2oj.com/ladders).  

According to your progress and liking, move ahead by solving Div 2B and then Div 2C ladders.  

In the journey, you are going to learn many algorithms, tricks, and techniques.  
Keep Coding, Read good codes from some very awesome coders(Ashish Gupta is one of them, his codeforces profile is [here](https://codeforces.com/profile/Ashishgup)).  
When stuck on a problem, think until you run out of ideas or stop making progress in that problem, then try peeking into the editorial, think again and then finally solve the problem(you can see the editorial if you have no idea on how to approach the problem, maybe there is something you are unaware of).  

Now a few of the resources to help you in your starting journey are here:  
[CP Handbook](https://cses.fi/book/book.pdf)  
Learn [Standard Templates Library of C++](https://www.topcoder.com/community/competitive-programming/tutorials/power-up-c-with-the-standard-template-library-part-1/)  
Learn Algorithms and their implementations from [cp-algorithms](https://cp-algorithms.com/)  
An awesome list of a lot of [good blogs/resources](https://github.com/lnishan/awesome-competitive-programming)  
Ashish Gupta's Github Repository of [Codes/Algorithm Implementations](https://github.com/Ashishgup1/Competitive-Coding)  

As you grow, you will learn many new things and come across different valuable resources. (Try to share here as well, as it will be helpful for others as well).

That's all for now.  
Happy Coding... ;)
