class Solution:
    def spellchecker(self, wordlist: List[str], queries: List[str]) -> List[str]:
        output=[]
        dic={}
        replacements = str.maketrans({"a": "-", "e": "-", "o":"-","i":"-","u":"-"})
        for i in wordlist:
            a=i.lower()
            if a in dic:
                dic[a].append(i)
                continue
            dic[a]=[i]
            if a.translate(replacements) in dic:
                dic[a.translate(replacements)].append(a)
                continue
            dic[a.translate(replacements)]=[a]
        for i in queries:
            if i in wordlist:
                output.append(i)
                continue
            if i.lower() in dic:
                output.append(dic[i.lower()][0])
                continue
            x=i.lower()
            if x.translate(replacements) in dic:
                y=dic[x.translate(replacements)][0]
                z=dic[y][0]            
                output.append(z)
                continue
            output.append("")
        return output    




