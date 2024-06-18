// Said Neder
// NEDSD2302
// CMPT125 - Yonas T. Weldeselassie
#include <iostream>
#include <ctime>
using namespace std;

// Let us define a type def for char* to make our code more readable
typedef char *charPointer;

int cstrlen(const charPointer &s)
{
    /*
    returns the number of printable characters in s
    This function is implemented for you by the instructor.
    Please note that this function will work perfectly fine
    for cstrings represented with static or dynamic arrays
    */
    int i = 0, len = 0;
    while (s[i++] != '\0')
        len++;
    return len;
}

int countChars(const charPointer &s, const char &ch)
{
    // returns the number of times the character ch is found in the cstring s
    int count = 0;
    const int length = cstrlen(s);
    for (int i = 0; i <= length; i++)
    {
        if (s[i] == ch) // if character at index i is equal to ch, increase count
        {
            count++;
        }
    }
    return count;
}

int findChar(const charPointer &s, const char &ch)
{
    /*
    returns the smallest index where the character ch is found in the cstring s
    If ch is not found in s in the given interval, the the function must return -1

    For example,
    The function call findChar("racecar", 'c') must return 2.
    The function call findChar("racecar", 't') must return -1.
    */
    const int length = cstrlen(s);
    for (int i = 0; i < length; i++) // Remember that cstrlen returns the printable chars in s
    {
        if (s[i] == ch) // if the character of s at index i is equal to ch, return it's index
        {
            return i;
        }
    }
    return -1;
}

charPointer getCopy(const charPointer &s)
{
    /*
    returns a new cstring that is a copy of the cstring s.
    That is a new cstring with enough memory is created
    and then all the characters of s including the null
    char are copied into it.
    */
    const int length = cstrlen(s) + 1;
    charPointer copy_cstring = new char[length];
    for (int i = 0; i < length; i++) // Remember that cstrlen returns the printable chars in s
    {
        copy_cstring[i] = s[i]; // copy every character of s into copy_cstring as the loop moves forward
    }
    return copy_cstring;
}

void rotateStringLeft(const charPointer &s, const int &r)
{
    const int length = cstrlen(s);
    charPointer temp_cstring = new char[length + 1]; // create temp empty c-string to copy rotated string
    int rotation = r;                                // r will be modified
    int j = 0;                                       // useful for indexing in multiple loops
    if (rotation > length)                           // working within bounds
    {
        rotation -= length;
    }
    for (int i = rotation; i < length; i++) // start copying each char starting from the rotation position to the temp cstring
    {
        temp_cstring[j] = s[i];
        j++;
    }
    for (int i = 0; i < rotation; i++) // start copying each char from the start until the rotation position to the temp cstring
    {
        temp_cstring[j] = s[i];
        j++;
    }
    for (int i = 0; i < length; i++) // copy temp cstring to original cstring
    {
        s[i] = temp_cstring[i];
    }
}
void rotateStringRight(const charPointer &s, const int &r)
{
    const int length = cstrlen(s);
    charPointer temp_cstring = new char[length + 1]; // create temp empty c-string to copy rotated string
    int rotation = -1 * r;                           // r will be modified to positive value
    int shift;                                       // start position to copy
    int j = 0;                                       // useful for indexing in multiple loops
    if (rotation > length)                           // working within bounds
    {
        rotation -= length;
    }
    shift = length - rotation;           // The start position is the following character to start copying, while the rotation is the last item to be copied, hence shifted right
    for (int i = shift; i < length; i++) // start copying each char starting from the shift position to the temp cstring
    {
        temp_cstring[j] = s[i];
        j++;
    }
    for (int i = 0; i < shift; i++) // start copying each char from the start until the shift position to the temp cstring
    {
        temp_cstring[j] = s[i];
        j++;
    }
    for (int i = 0; i < length; i++) // copy temp cstring to original cstring
    {
        s[i] = temp_cstring[i];
    }
}

void rotateString(const charPointer &s, const int &r)
{
    /*
    Rotates the printable characters of the cstring s by r units
        If r > 0, rotate the characters of s to the left
        If r < 0, rotate the characters of s to the right
        Please note the value of r can be any integer even larger than the length of s
        For example,
            "asmara" rotated to the left by 0 becomes "asmara"
            "asmara" rotated to the left by 1 becomes "smaraa"
            "asmara" rotated to the left by 2 becomes "maraas"
            "asmara" rotated to the left by 3 becomes "araasm"
            "asmara" rotated to the left by 4 becomes "raasma"
            "asmara" rotated to the left by 5 becomes "aasmar"
            "asmara" rotated to the left by 6 becomes "asmara"
            "asmara" rotated to the left by 7 becomes "smaraa"
            "asmara" rotated to the left by 8 becomes "maraas"

        similarly
            "asmara" rotated to the right by 0 becomes "asmara"
            "asmara" rotated to the right by 1 becomes "aasmar"
            "asmara" rotated to the right by 2 becomes "raasma"
            "asmara" rotated to the right by 3 becomes "araasm"
            "asmara" rotated to the right by 4 becomes "maraas"
            "asmara" rotated to the right by 5 becomes "smaraa"
            "asmara" rotated to the right by 6 becomes "asmara"
            "asmara" rotated to the right by 7 becomes "aasmar"
            "asmara" rotated to the right by 8 becomes "raasma"

            and etc…
    */
    if (r > 0)
    {
        rotateStringLeft(s, r);
    }
    else if (r < 0)
    {
        rotateStringRight(s, r);
    }
    else // if the shift is 0
        return;
}
void empty(charPointer &s)
{
    /*
    Empties the cstring s so that s is modified to an empty cstring.
    That is the memory allocated for s is deleted and a new memory is
    allocated so that s will only have a null character in it.
    */
    int length = cstrlen(s);
    for (int i = 0; i < length; i++)
    {
        s[i] = 0; // every character is null, because if left empty will raise error: empty character constant
    }
}
void append(charPointer &s, const char &ch)
{
    /*
    Appends the character ch to the cstring s.
        That is ch is added to the end of s making sure the resulting s is a valid cstring
        The parameter s is assumed to be a dynamic array (NOT a static array)
    This function is implemented for you by the instructor.
    */
    int len = cstrlen(s);
    int newLen = len + 1;
    charPointer C = new char[newLen + 1];
    for (int i = 0; i < len; i++)
        C[i] = s[i];
    C[len] = ch;
    C[newLen] = '\0';
    delete[] s;
    s = C;
    return;
}

void append(charPointer &s1, const charPointer &s2)
{
    /*
    Appends all the characters of the cstring s2 to the cstring s1
        The parameter s1 is assumed to be a dynamic array (NOT a static array)
    Hint: Use the append(charPointer& s, const char& ch) function above.
    */
    int len2 = cstrlen(s2);
    for (int i = 0; i < len2; i++)
    {
        append(s1, s2[i]); // use Yonas's append function for every character
    }
}

bool removeChar(charPointer &s, const char &ch)
{
    /*
    Removes the first character found in the cstring s that is equal to ch.
    If a character is found and removed then the function returns true.
    If no character is found that is equal to ch then the function does nothing
    and returns false.
        The parameter s is assumed to be a dynamic array (NOT a static array)
    This function is implemented for you by the instructor.
    */
    int len = cstrlen(s);
    int index = findChar(s, ch);
    if (index == -1)
        return false;
    else
    {
        int newLen = len - 1;
        charPointer C = new char[newLen + 1];
        int k = 0;
        for (int i = 0; i < index; i++)
            C[k++] = s[i];
        for (int i = index + 1; i < len; i++)
            C[k++] = s[i];
        C[k] = '\0';
        delete[] s;
        s = C;
        return true;
    }
}
void removeCharAll(charPointer &s, const char &ch)
{
    /*
    Removes all the occurrences of the character ch from the cstring s
        The parameter s is assumed to be a dynamic array (NOT a static array)
    Hint: Use the removeChar(charPointer &s, const char ch) function above.
    */
    int count = countChars(s, ch);
    for (int i = 0; i < count; i++)
    {
        removeChar(s, ch); // use Yonas's removeChar function
    }
}

bool isEqual(const charPointer &s1, const charPointer &s2)
{
    /*
    returns true if the cstring s1 is equal to the cstring s2
        Definition: Two c-strings s1 and s2 are equal if they have the same length
        and characters of s1 and s2 at corresponding indexes are the same.
    */
    int len1 = cstrlen(s1), len2 = cstrlen(s2);
    if (len1 != len2) // if they are not the same length, they are not equal
        return false;
    for (int i = 0; i < len1; i++)
    {
        if (s1[i] != s2[i]) // if the character at index i in s1 is not equal to the character at index i of s2, return false
            return false;
    }
    return true;
}

bool isAnagram(const charPointer &s1, const charPointer &s2)
{
    /*
    returns true if the cstrings s1 and s2 contain same distinct characters appearing same number of
    times in both s1 and s2; otherwise returns false
        That is, this function returns true if s1 and s2 are permutations (re-arrangements) of each other.
        For example "TEST" and "STET" are anagrams but "CPMT" and "CMPTM" are not anagrams
    */
    int current_ch_index, len1 = cstrlen(s1), len2 = cstrlen(s2);
    char current_ch, current_ch_s2;
    if (isEqual(s1, s2)) // edge case, if they are equal they are anagrams
    {
        return true;
    }
    else if (len1 != len2) // edge case, if they are not of the same length, they are not anagrams
    {
        return false;
    }
    for (int i = 0; i < len1; i++)
    {
        current_ch = s1[i];
        current_ch_index = findChar(s2, current_ch);
        current_ch_s2 = s2[current_ch_index];
        if (countChars(s1, current_ch) != countChars(s2, current_ch_s2)) // check if there's the same amount of the same character in both strings, if there not the same quantity return false
        {
            return false;
        }
    }
    return true;
}

charPointer zigzagMerge(const charPointer &s1, const charPointer &s2)
{
    /*
    Creates and returns a new cstring by merging (combining) the cstrings s1 and s2 in a zigzag form.
        That is
            first character of the new cstring is the first character of s1
            second character of the new cstring is the first character of s2
            third character of the new cstring is the second character of s1
            fourth character of the new cstring is the second character of s2
            fifth character of the new cstring is the third character of s1
            sixth character of the new cstring is the third character of s2
            etc
        When either s1 or s2 reaches to its end, the remaining characters of the other are
        appended to the new cstring
        For example, the zigzagMerge of "abc" and "defgh" will be "adbecfgh"
    */
    int len1 = cstrlen(s1);
    int len2 = cstrlen(s2);
    int len3 = len1 + len2 + 1; // length of s1 + length of s2 + delimiter (1)
    charPointer zigzag_string = new char[len3];
    int i = 0, j = 0, k = 0;     // i = index of s1; j = index of s2; k = index of zigzag_string
    while (i < len1 && j < len2) // append function defined by Yonas gave errors like overflowing, using normal indexing
    {
        zigzag_string[k] = s1[i];
        i++;
        k++;
        zigzag_string[k] = s2[j];
        j++;
        k++;
    }

    while (i < len1)
    {
        zigzag_string[k] = s1[i];
        i++;
        k++;
    }

    while (j < len2)
    {
        zigzag_string[k] = s1[i];
        i++;
        j++;
    }
    zigzag_string[k] = '\0'; // add delimiter
    return zigzag_string;
}

charPointer getSubString(const charPointer &s, const int &startIndex, const int &len)
{
    /*
    returns a substring of the cstring s consisting of len characters starting from startIndex.
        If s has fewer characters starting from the startIndex upto its last character,
        then this function must return a substring consisting of only the available
        characters starting from the startIndex upto its last character in which case,
        the returned substring will have less than len characters.
    */
    int cstring_len = cstrlen(s);
    int substring_len;
    int j = 0; // useful for indexing substring
    charPointer substring;
    if (cstring_len - startIndex < len) // if s has fewer characters starting from startIndex up to its last character, cut the substring length
    {
        substring_len = cstring_len - startIndex + 1; // + delimiter
        substring = new char[substring_len];
    }
    else // create cstring of the len given
    {
        substring_len = len + 1; // + delimiter
        substring = new char[substring_len];
    }
    for (int i = startIndex; j < substring_len - 1; i++) // copy values starting from startIndex, all the way to substring_len - 1, leave space for delimiter
    {
        substring[j] = s[i];
        j++;
    }
    substring[j] = '\0';
    return substring;
}

bool isSubString(const charPointer &s1, const charPointer &s2)
{
    /*
    returns true is the cstring s1 is a substring of the cstring s2 otherwise returns false
        Definition: s1 is a substring of s2 if s1 is found in s2.
        That is all characters of s1 are found TOGETHER in s2 in the SAME ORDER as they appear in s1
        Example "set" is a substring of "massachussettes" But "ets" is not substring of "massachussettes"
    Hint: Use the getSubString(const charPointer& s, const int& startIndex, const int& len) function above.
    */
    int len1 = cstrlen(s1), len2 = cstrlen(s2);
    int start_index = findChar(s2, s1[0]);
    // Edge cases
    if (len1 <= 1) // if s1 is empty or has a null character, return true
    {
        return true;
    }
    if (start_index == -1) // if the first character of the substring can't be found in s2, return false
    {
        return false;
    }
    if (len1 > len2) // if the substring is bigger than s2, return false
    {
        return false;
    }
    // check every character of s2 and if it matches with the first character in s1, create a substring of length of s1 and check if it's equal
    for (int i = 0; i < len2; i++)
    {
        if (s2[i] == s1[0])
        {
            charPointer tempsub = getSubString(s2, i, len1);
            if (isEqual(tempsub, s1))
                return true;
        }
    }
    return false;
}

int countWords(const charPointer &s)
{
    /*
    Given a cstring that contains some words separated by spaces, this function
    returns the number of words in the cstring.
        Here, a word means some characters with no spaces between them.
        Example: If the cstring parameter is "What    a     nice           problem ".
        Then you see that there are FOUR words in this cstring, namely
             1. What      2. a       3. nice      4. problem
        Your function then must 1 return 4

        For simplicity,
        1. Assume that there are no spaces at the beginning or at the end of the cstring
        2. But a word can be separated from another word by one or more spaces
        3. Assume there is no any tab space in the cstring
        4. Assume there is no any punctuation mark in the cstring.
    */
    // Assuming words consist of alphabet letters only
    int count = 0;
    bool insideWord = false; // if you check a letter, increase the count but turn true not to double count, turn false when faced an space
    int length = cstrlen(s);
    for (int i = 0; i < length; i++)
    {
        if (s[i] != ' ')
        {
            if (!insideWord)
            {
                count++;
                insideWord = true; // we are not going to count words again until we find a character that is a space again
            }
        }
        else
        {
            insideWord = false;
        }
    }
    return count;
}

int main()
{
    /*
    This main program is designed to test the functions you need to implement.
    You should NOT remove any line of code from this main program.
    But you may add more test code in the main program if you like.
    */
    cout << "This program is designed to help you test your functions." << endl;

    // In order to get the same random numbers in Microsoft Visual C++ 2010 IDE
    // Let us seed the random number generator with a fixed unsigned integer value
    unsigned int seed = 0;
    srand(seed);

    // Test cstrlen function
    cout << endl
         << "Testing cstrlen function";
    cout << endl
         << "------------------------" << endl;
    char s1[] = "irregular";
    charPointer s1_dynamic_array = new char[5];
    for (int i = 0; i < 4; i++)
        s1_dynamic_array[i] = 'a' + i;
    s1_dynamic_array[4] = '\0';

    cout << "The length of s1_static_array=\"" << s1 << "\" is " << cstrlen(s1) << endl;
    cout << "The length of s1_dynamic_array=\"" << s1_dynamic_array << "\" is " << cstrlen(s1_dynamic_array) << endl;
    cout << "Moreover, the length of \"\" is " << cstrlen("") << endl;

    // Test countChars functions
    cout << endl
         << "Testing countChars function";
    cout << endl
         << "---------------------------" << endl;
    char ch = 'r';
    int count = countChars(s1, ch);
    cout << "ch='" << ch << "' is found in s1=\"" << s1 << "\" " << count << " times." << endl;

    // Test findChar functions
    cout << endl
         << "Testing findChar function";
    cout << endl
         << "-------------------------" << endl;
    ch = 'r';
    int index = findChar(s1, ch);
    cout << "ch='" << ch << "' is found in s1=\"" << s1 << "\" at index " << index << endl;
    ch = 'R';
    index = findChar(s1, ch);
    cout << "ch='" << ch << "' is found in s1=\"" << s1 << "\" at index " << index << endl;

    // Test getCopy function
    cout << endl
         << "Testing getCopy function";
    cout << endl
         << "------------------------" << endl;
    charPointer s2 = getCopy("irregular");
    cout << "A copy of \"irregular\" is s2=\"" << s2 << "\"" << endl;
    charPointer s3 = getCopy(s2);
    cout << "A copy of s2=\"" << s2 << "\" is s3=\"" << s3 << "\"" << endl;
    delete[] s2;
    s2 = new char('\0'); // This will allocate only one memory space and put '\0' in it
    cout << "s2 is modified to s2=\"" << s2 << "\" but s3 is still s3=\"" << s3 << "\"" << endl;
    delete[] s3;
    s3 = getCopy(s2);
    cout << "A copy of s2=\"" << s2 << "\" is s3=\"" << s3 << "\"" << endl;

    // Test rotateString function
    cout << endl
         << "Testing rotateString function";
    cout << endl
         << "-----------------------------" << endl;
    char s4[] = "asmara";
    for (int i = 0; i < 10; i++)
    {
        int r = rand() % 21 - 10;
        if (r > 0)
            cout << "s4=\"" << s4 << "\" rotated " << r << " times to the left becomes ";
        else
            cout << "s4=\"" << s4 << "\" rotated " << -r << " times to the right becomes ";
        rotateString(s4, r);
        cout << "\"" << s4 << "\"" << endl;
    }

    // Test empty function
    cout << endl
         << "Testing empty function";
    cout << endl
         << "----------------------" << endl;
    delete[] s2;
    s2 = getCopy("irregular");
    cout << "Emptying s2=\"" << s2 << "\" gives s2=\"";
    empty(s2);
    cout << s2 << "\"" << endl;

    // Test append function
    cout << endl
         << "Testing append function";
    cout << endl
         << "----------------------" << endl;
    for (int i = 0; i < 20; i++)
    {
        ch = rand() % 26 + 97;
        cout << "Appending ch='" << ch << "' to s2=\"" << s2 << "\" gives s2=\"";
        append(s2, ch); // This function is already implemented for you by the instructor
        cout << s2 << "\"" << endl;
    }

    // Test append function
    cout << endl
         << "Testing append function";
    cout << endl
         << "----------------------" << endl;
    cout << "Appending s2=\"" << s2 << "\" to s3=\"" << s3 << "\" gives s3=\"";
    append(s3, s2);
    cout << s3 << "\"" << endl;

    // Test removeChar function
    cout << endl
         << "Testing removeChar function";
    cout << endl
         << "---------------------------" << endl;
    for (int i = 0; i < 20; i++)
    {
        ch = rand() % 26 + 97;
        cout << "Removing ch='" << ch << "' from s2=\"" << s2 << "\" gives s2=\"";
        removeChar(s2, ch); // This function is already implemented for you by the instructor
        cout << s2 << "\"" << endl;
    }

    // Test removeCharAll function
    cout << endl
         << "Testing removeCharAll function";
    cout << endl
         << "------------------------------" << endl;
    ch = rand() % 26 + 97;
    cout << "Removing all occurences of ch='" << ch << "' from s3=\"" << s3 << "\" (length = " << cstrlen(s3) << ") gives s3=\"";
    removeCharAll(s3, ch);
    cout << s3 << "\" (length = " << cstrlen(s3) << ")" << endl;

    // Test isEqual function
    cout << endl
         << "Testing isEqual function";
    cout << endl
         << "------------------------" << endl;
    if (isEqual(s2, s3))
        cout << "s2=\"" << s2 << "\" and s3=\"" << s3 << "\" are equal" << endl;
    else
        cout << "s2=\"" << s2 << "\" and s3=\"" << s3 << "\" are not equal" << endl;
    delete[] s3;
    s3 = getCopy(s2);
    if (isEqual(s2, s3))
        cout << "s2=\"" << s2 << "\" and s3=\"" << s3 << "\" are equal" << endl;
    else
        cout << "s2=\"" << s2 << "\" and s3=\"" << s3 << "\" are not equal" << endl;

    // Test isAnagram function
    cout << endl
         << "Testing isAnagram function";
    cout << endl
         << "--------------------------" << endl;
    if (isAnagram(s2, s3) == true)
        cout << "s2=\"" << s2 << "\" and s3=\"" << s3 << "\" are anagrams" << endl;
    else
        cout << "s2=\"" << s2 << "\" and s3=\"" << s3 << "\" are not anagrams" << endl;
    rotateString(s2, rand() % 21 - 10);
    if (isAnagram(s2, s3) == true)
        cout << "s2=\"" << s2 << "\" and s3=\"" << s3 << "\" are anagrams" << endl;
    else
        cout << "s2=\"" << s2 << "\" and s3=\"" << s3 << "\" are not anagrams" << endl;
    removeChar(s2, s2[rand() % cstrlen(s2)]);
    if (isAnagram(s2, s3) == true)
        cout << "s2=\"" << s2 << "\" and s3=\"" << s3 << "\" are anagrams" << endl;
    else
        cout << "s2=\"" << s2 << "\" and s3=\"" << s3 << "\" are not anagrams" << endl;

    // Test zigzagMerge function
    cout << endl
         << "Testing zigzagMerge function";
    cout << endl
         << "----------------------------" << endl;
    empty(s2);
    for (int i = 0; i < 20; i++)
        if (rand() % 3 == 0)
            append(s2, rand() % 26 + 97);
    empty(s3);
    for (int i = 0; i < 20; i++)
        if (rand() % 3 == 0)
            append(s3, rand() % 26 + 65);
    charPointer s5 = zigzagMerge(s2, s3);
    cout << "The zigzag merge of s2=\"" << s2 << "\" and s3=\"" << s3 << "\" is s5=\"" << s5 << "\"" << endl;

    // Test getSubString function
    cout << endl
         << "Testing getSubString function";
    cout << endl
         << "-----------------------------" << endl;
    for (int i = 0; i < 5; i++)
    {
        int index = rand() % cstrlen(s1);
        int len = rand() % cstrlen(s1) + 1;
        cout << "A substring of s1=\"" << s1 << "\" starting from index " << index << " with " << len << " characters is ";
        charPointer ans = getSubString(s1, index, len);
        cout << "\"" << ans << "\"" << endl;
        delete[] ans;
    }

    // Test isSubString function
    cout << endl
         << "Testing isSubString function";
    cout << endl
         << "----------------------------" << endl;
    if (isSubString(s2, s2))
        cout << "s2=\"" << s2 << "\" is a substring of s2=\"" << s2 << "\"" << endl;
    else
        cout << "s2=\"" << s2 << "\" is not a substring of s2=\"" << s2 << "\"" << endl;
    if (isSubString("", s2))
        cout << "\"\" is a substring of s2=\"" << s2 << "\"" << endl;
    else
        cout << "\"\" is not a substring of s2=\"" << s2 << "\"" << endl;
    if (isSubString(s2, ""))
        cout << "s2=\"" << s2 << "\" is a substring of \"\"" << endl;
    else
        cout << "s2=\"" << s2 << "\" is not a substring of \"\"" << endl;
    empty(s3);
    for (int i = 0; i < cstrlen(s2); i++)
        append(s3, s2[rand() % cstrlen(s2)]);
    if (isSubString(s2, s3))
        cout << "s2=\"" << s2 << "\" is a substring of s3=\"" << s3 << "\"" << endl;
    else
        cout << "s2=\"" << s2 << "\" is not a substring of s3=\"" << s3 << "\"" << endl;

    // Test countWords function
    cout << endl
         << "Testing countWords function";
    cout << endl
         << "---------------------------" << endl;
    empty(s5);
    append(s5, 'A');
    for (int i = 0; i < 30; i++)
    {
        if (rand() % 2 == 0)
            append(s5, ' ');
        else
            append(s5, rand() % 26 + 97);
    }
    cout << "There are " << countWords(s5) << " words in s5=\"" << s5 << "\"" << endl;

    // Delete dynamic arrays
    cout << endl
         << "Deleting heap memories";
    cout << endl
         << "----------------------" << endl;
    cout << "Deleting s1_dynamic_array.";
    delete[] s1_dynamic_array;
    cout << " Done!" << endl;
    cout << "Deleting s2.";
    delete[] s2;
    cout << " Done!" << endl;
    cout << "Deleting s3.";
    delete[] s3;
    cout << " Done!" << endl;
    cout << "Deleting s5.";
    delete[] s5;
    cout << " Done!" << endl;

    cout << endl;
    system("Pause");
    return 0;
}