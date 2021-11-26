# hangman小游戏【Python】

```python
import random

# 单词库文件名，请注意words.txt文件中的单词全部为小写格式
WORDLIST_FILENAME = "words.txt"


def load_words():
    """
    返回值：一个由有效单词(string类型)构成的列表(list)
    
    根据单词列表的长度，该函数的执行可能需要消耗一定时间。
    """
    print("Loading word list from file...")
    # inFile：file
    inFile = open(WORDLIST_FILENAME, 'r')
    # line：string
    line = inFile.readline()
    # wordlist：list of strings
    wordlist = line.split()
    print("  ", len(wordlist), "words loaded.")
    return wordlist



def choose_word(wordlist):
    """
    wordlist：一个由有效单词(string类型)构成的列表(list)
    
    返回值：从wordlist中随机选取的一个单词
    """
    return random.choice(wordlist)

# 调用load_words()函数，将words.txt中的单词读取至变量wordlist中，
# 后续代码将可以直接从wordlist变量中读取任意单词
wordlist = load_words()
def is_word_guessed(secret_word, letters_guessed):
    '''
    secret_word：string类型，谜底单词，用户正在猜的单词，该单词全部由小写字母构成
    letters_guessed：字母构成的list，其中包含用户已经猜中的字母，字母全部为小写
    
    返回值：boolean类型，如果secret_word的所有字母都已存在于letters_guessed中，
    返回True；否则返回False
    '''
    # 请将以下"pass"删除，然后补充函数的实现代码
    # pass
    count_1 = 0 #用count_1计数，计算secret_word中的单词在letters_guessed中的个数
    for i in secret_word: # 遍历secret_word中每一个单词
        if i in letters_guessed:
            count_1 += 1
    if count_1 == len(secret_word):
        return True
    else:
        return False
    
def get_guessed_word(secret_word, letters_guessed):
    '''
    secret_word：string类型，谜底单词，即用户正在猜的单词
    letters_guessed：字母构成的list，其中包含用户已经猜中的字母，字母全部为小写
    
    返回值：string类型，由用户已经猜中的字母，以及尚未猜中的字母(以*表示)组成。该string的
    字母排列顺序与谜底单词保持一致，如：谜底单词为study，猜测过程中的返回值的可能形式为s*u*y
    '''
    # 请将以下"pass"删除，然后补充函数的实现代码
    # pass
    secret_word = list(secret_word) # 字符串转化成列表，再改变列表
    for i in range(len(secret_word)):
        if secret_word[i] not in letters_guessed:
            secret_word[i] = '*'
    secret_word = ''.join(secret_word) # 用join函数将列表转化成字符串
    return secret_word

def get_available_letters(letters_guessed):
    '''
    letters_guessed：字母构成的list，其中包含用户已经猜中的字母，字母全部为小写
    
    返回值：string类型，由用户尚未猜中的字母组成
    '''
    # 请将以下"pass"删除，然后补充函数的实现代码
    # pass
    import string
    all_letter = string.ascii_lowercase # 所有小写字母
    # list_2 = list_1[:]  列表复制方法    
    all_letter_list = list(all_letter) # 列表化all_letter_list
    all_letter_list_copy = all_letter_list[:]
    for i in all_letter_list:
        if i in letters_guessed:
            all_letter_list_copy.remove(i) # x.remove(x[i])
    return ','.join(all_letter_list_copy) # 转化为str 

def is_guessed_it(recive_get_guessed_word,secret_word):
    num_guessed_right = 0
    for i in secret_word:
        if i in recive_get_guessed_word:
            num_guessed_right += 1
    return num_guessed_right

def hangman(secret_word):
    '''
    secret_word：string类型，谜底单词，即用户正在猜的单词
    
    该函数实现Hangman游戏的交互功能。主要包含以下功能点：
    
    - 游戏开始时，提示用户谜底单词包含多少个字母，以及用户一共有几次猜测机会。
      
    - 在游戏开始时，为用户提供6次猜测机会（当然也可以提供更多，取决于你的设计）。

    - 在每个猜词回合开始之前，提示用户还剩多少次猜测机会，以及谜底单词还有哪些字母没有被猜出。
    
    - 请求用户在每个回合输入【一个字母】作为猜测值，同时确保用户输入的内容不为空。
    
    - 在用户完成每一次猜测之后，需要立即提示用户，当前猜测字母是否存在于谜底单词中。

    - 在每次猜词之后，提示用户，哪些字母已经被正确猜出，哪些字母还未被猜出。
    
    其他具体要求请参照本次实践练习的指导手册.
    '''
    # 请将以下"pass"删除，然后补充函数的实现代码
    # pass
    print("欢迎来玩这个游戏呀(*^▽^*), Hangman!")
    # print("您要猜的单词有"+str(len(secret_word))+"个字母\n""您共有6次猜测机会")
    rascal = 0
    alphabet = "abcdefghijklmnopqrstuvwxyz" # 因为判断单词用的get_guessed_word这个函数无法判断重复，故创建这个做判断重复
    num_guess = 6
    num_guessed_right_last = 0
    letters_guessed = [] # 建立空列表，再往里面放东西
    available_letters = []
    available_letters.append(get_available_letters(letters_guessed)) # 建立可供使用的单词防止其他情况
    print("您现在有" + str(num_guess) + "次失败的机会\n"+ "提示：该单词有"+str(len(secret_word))+ "个字母")
    while(True):
        if is_word_guessed(secret_word, letters_guessed): # 判断是否猜完
            print("恭喜你，猜对了O(∩_∩)O~ 答案是：" + secret_word)
            break
        if rascal == 3:
            print("不好好玩是吧，再见！Σ(☉▽☉")
            break
        #print("您现在有" + num_guess+ "次猜词机会\n"+ "提示：该单词有"+str(len(secret_word))+ "个字母")
        print("=============================")
        print("您现在有" + str(num_guess)+ "次猜词机会\n" + "可供选择的单词有: " + get_available_letters(letters_guessed))
        recive_word = input("请您输入一个单词٩( 'ω' )و ：")
        
        if len(recive_word) == 1:
            if recive_word in get_available_letters(letters_guessed):
                letters_guessed.append(recive_word)
                if is_word_guessed(secret_word, letters_guessed): # 判断是否猜完
                    print("恭喜你，猜对了O(∩_∩)O~ 答案是：" + secret_word)
                    break
                else:
                    recive_get_guessed_word = get_guessed_word(secret_word, letters_guessed)
                    # 我想知道recive_get_guessed_word中的‘*’号个数
                    num_guessed_right = is_guessed_it(recive_get_guessed_word,secret_word)
                    # num_guessed_right_last = 0 # 接受上一次的num_guessed_right的个数，用于比较
                    if num_guessed_right > num_guessed_right_last:
                        num_guessed_right_last = num_guessed_right # 要求每次进来"*"数要比之前多！
                        print("猜对了呀！\n" + recive_get_guessed_word)
                    else:
                        print("猜错了(づ￣3￣)づ╭❤～\n" +recive_get_guessed_word)
                        num_guess -= 1
                        if num_guess == 0:
                            print("糟糕，你失败了呢ε=(´ο｀*)))答案是："+ secret_word)
                            break
            else:
                rascal += 1
                if recive_word in alphabet:
                    print("不要重复单词！！[○･｀Д´･ ○]")
                elif recive_word.lower() in get_available_letters(letters_guessed):
                    print("请输入小写[○･｀Д´･ ○]")
                else:
                    print("不要输入别的什么东西[○･｀Д´･ ○]")
        else:
            print("是一个，是一个呀╭(╯^╰)╮,请重来")
            rascal += 1
                            
 if __name__ == "__main__":   
    secret_word = choose_word(wordlist)
    hangman(secret_word)
```

