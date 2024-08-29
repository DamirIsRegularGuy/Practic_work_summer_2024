USE Practic_work

/*
CREATE TABLE Prepods(
    id INT PRIMARY KEY,
    First_name VARCHAR(50) NOT NULL,
    Name VARCHAR(30) NOT NULL,
    Last_name VARCHAR(50) NOT NULL,
	Faculty VARCHAR(100) NOT NULL,
	Kaphedra INT NOT NULL,
	Position VARCHAR(100) NOT NULL,
	Adress VARCHAR(200) NOT NULL,
	Phone VARCHAR(30) NOT NULL,
	Email VARCHAR(50) NOT NULL
);
*/

CREATE TABLE Dist(
    id INT PRIMARY KEY,
	Name_Dist VARCHAR(50) NOT NULL,
	Semestr INT NOT NULL,
	Cours INT NOT NULL,
	Speciality_Id INT NOT NULL,
	Prepod_Id INT NOT NULL,
	General_Hours INT NOT NULL,
	In_Audience INT,
	Lecture_Hours INT,
	Practice_Hours INT,
	Lab_Hours INT,
	Semenars INT,
	Independent_Hours INT,
	Form_Of_Control INT
);	
