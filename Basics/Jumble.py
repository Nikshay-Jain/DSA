import random
def words():
    word=["nikshay","darshiel","karishma","prashant"]
    pick=random.choice(word)
    print(pick)
    name="".join(random.sample(pick,len(pick)))
    print(name)