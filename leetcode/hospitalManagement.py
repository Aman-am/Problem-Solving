class Doctor:
    def __init__ (self, doctorId, doctorName, specialization, consultationFee):
        self.doctorId=doctorId
        self.doctorName= doctorName
        self.specialization=specialization
        self.consultationFee=consultationFee

class Hospital:
    def __init__ (self, doctorDB):
        self.doctorDB=doctorDB
    def searchByDoctorName(self,doctorName):
        res = []
        obj = doctorDB.values()
        for v in obj:
            if v.doctorName == doctorName:
                res.append(v)
                
        if len(res) == 0:
            return None
        return res

if __name__ == '__main__':
    doctorDB={}
    doctorId = int(input('id'))
    doctorName = input('name')
    specialization = input('specialization')
    consultationFee = int(input('fee'))

    doc = Doctor(doctorId,doctorName,specialization,consultationFee)
    doctorDB[1] = doc

    hosp = Hospital(doctorDB)
    res = hosp.searchByDoctorName('2')
    if res == None:
        print("No Doctor exists with given DoctorName")
    else:
        print(res[0].doctorId)