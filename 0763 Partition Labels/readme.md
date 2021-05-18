# Nots
* use greedy method
* find the index of last apperance of each char 
* go through each char and set right pointer to it's last apperance 
* when the char is at right pointer, all char between left and right only appear in this substring
* move left pointer to right by 1, and look for next substring.
* Time complexity: _O(n)_, n for finding index, n for going through the string
* Space complexity _O(1)_, store last index of each char in string using `vector <int> vec(26,0)`.
