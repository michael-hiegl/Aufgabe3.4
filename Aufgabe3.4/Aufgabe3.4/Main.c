//**************************************************************************
//**************************************************************************
//**
//**	Projekt: Aufgabe3.4	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 23.11.2021 18:07:00
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>
#include <string.h>
//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************


int main(void)
{
	//Variables
	int i_ZeichenVorname = 0;


		//Code
		i_ZeichenVorname = strlen("Michael");
		printf("Mein Vorname hat %i Buchstaben", i_ZeichenVorname);

	getchar();
	fflush(stdin);
	getchar();
	return 0;
}