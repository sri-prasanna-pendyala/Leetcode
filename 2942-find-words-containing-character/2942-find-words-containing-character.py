class Solution:
    def findWordsContaining(self, words: List[str], x: str) -> List[int]:
        index=[]
        for i in words:
            if x in i:
                index.append(words.index(i))
        return index

        