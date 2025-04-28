# def pas() :
#     print('pass')
#     return 'semester done'

class Student :
    id = 394
    cgpa = 3.98
    name = 'Mahmud'
    activity = ['sleep','eat','play']
    
    def pas(self):
        print('pass all sunjects')
    
    def result(self,sub,mark):
        text = f'subject : {sub} mark : {mark}'
        return text
    
s1 = Student()
print(s1)
print(s1.name)
s1.pas()
a = s1.result('english',98)
print(a)