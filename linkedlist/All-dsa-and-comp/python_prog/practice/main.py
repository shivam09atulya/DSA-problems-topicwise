class Number:
    company="Bharat Gas"
    salary=2600
    salarybonus=400

    @property
    def totalSalary(self,val):
        return self.salary+self.salarybonus
    
    @totalSalary.getter
    def totalSalary(self,val):
        self.salarybonus=val-self.salary

n1=Number()
n1.salary=700
print(n1.totalSalary(200))


