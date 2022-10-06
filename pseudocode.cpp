Module main()
	Declare Real totalBungaDeposito, totalInvestment
	Call getInput()
	Call calculateTotalBunga(totalBungaDeposito)
	Call deduction()
	Call netInvestment(totalInvestment)
End Module

getInput()
	Declare Real depositoInput, bungaInput
	Declare Integer tenorInput, yearInput
	Call getdeposito(depositoInput)
	Call getTenor(tenorInput, bungaInput)
	Call getYear(yearInput)
End Module

getDeposito(Real Ref deposito)
	Display "Enter the Deposito."
	Input deposito
	
	While deposito < 100 ORdeposito > 10.000
		Display "The Deposito cannot be less than USD $100 or greater than USD $ 10.000"
		Input deposito
	End While
End Module

getTenor(Integer Ref tenor, Real Ref bungaPertahun)
	Declare menuSelection

	Display "1. 1 Month  = 3.4%"
	Display "2. 3 Month  = 3.6%"
	Display "3. 6 Month  = 3.75%"
	Display "4. 12 Month = 4.2%"
	
	Display "Enter your Selection"
	
	Input menuSelection
	
	While menuSelection < 1 OR menuSelection > 4
		Display "That is an invalid selection"
		Input menuSelection
	End While
	
	Select menuSelection
	
		Case 1:
			tenor = 3 
			bungaPerTahun = 0.034
		
		Case 2: 
			tenor = 6
			bungaPerTahun = 0.036
		
		Case 3: 
			tenor= 6
			bungaPerTahun = 0.0375
			
		Case 4: 
			tenor= 12
			bungaPerTahun = 0.042
	End Selection
End Module

Module getYear(Integer Ref year)
	Display "Enter the year."
	input year	
	
	While year < 1 OR year > 10
		Display "The Year cannot be less than 1 Year or greater than 10 Year"
		Input deposito
	End While
End Module

Module calculateTotalBunga(Integer tenor, Integer year, Real deposito, Real bungaPertahun, Ral Ref totalBunga )
	Declare Real bunga, depositoTotal
 	Declare Integer repetition, i = 0
 	Set repetition = (12/tenor) * year
 	FOR i < repetition
 		Set bunga = deposito * bungaPerTahun/12 * tenor
 		Set depositoTotal = deposito + bunga
		Set  totalBunga = Deposito Total- Deposito Awal
		deposito = depositoTotal
	End For
 	
 	Display "Total Bunga Deposito is ", totalBunga
End Module

Module deduction()
	Declare Real intExpenses, inTax
	Call interestExpenses(intExpenses)
	Call incomeTax(inTax)
End Module 

Module interestExpenses(Real totalBunga, Real Ref expenses)
 	Set expenses = totalBunga * 0.01
 	Display "The Interest Expenses is ",expenses
 End Module
 
 Module incomeTax(Real deposito, Real totalBunga, Real Ref tax)
 	If deposito > 1000 THEN
 		Set tax = totalBunga * 0.2
 	Else
 		Set tax = 0 
 	End If
 	
 	Display "The Tax is ", tax
End Module

Module netInvestment(Real deposito, Real totalBunga, Real expenses, Real tax, Real Ref investment)
	Set investment = deposito + (totalBunga - expenses - tax)
	
	Display "Total Set invesment is ", investment
End Module

 
  	
