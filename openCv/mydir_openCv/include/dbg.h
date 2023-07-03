// fANSI way of coloring debugPrints by Lucas Schmirl
#ifndef DBG_H
#define DBG_H

/*  HOW TO USE
    To use this header file, #include "dbg.h" and #define DBG at top of file.cpp
    for all debug prints in cpp file use log(input, Color::...) or p() or pR(), pG(), pB()
    
    color codes are made with:    c = makeCoCo(int TYPE, int GROUND, int COLOR)
    and run: log("Hallo", cc); other functions explained beneath
*/

// The p functions can be used like this:
/*
    use as many args with any datatype as you like!
    pR(1, ':', " Hello", ',', " ", "World!");           // prints in Red
    pG(1.5, ':', " Hello", ',', " ", "World!", "\n");   // prints in Green
    pB(true, ':', " Hello", ',', " ", "World!", "\n");  // prints in Blue

    // prints normal or with specific color code e.g. color code is <b> and <r> and <off>, 
    p(b, true, ':', r, " Hello", ',', " ", off, "World!", "\n");
*/


// these are to define the different combinations of a color code
enum type   {regular, bold, underline = 4};
enum ground {foreGround = 30, backGround = 40, fghighIntensity = 90, bgHighIntensity= 100};
enum color  {Black, Red, Green, Yellow, Blue, Purple, Cyan, White};


// to print greek letters
namespace Greek
{
    // big letters
    char Alpha[3]       = "\u0391";
    char Beta[3]        = "\u0392";
    char Gamma[3]       = "\u0393";
    char Delta[3]       = "\u0394";
    char Epsilon[3]     = "\u0395";
    char Zeta[3]        = "\u0396";
    char Eta[3]         = "\u0397";
    char Theta[3]       = "\u0398";
    char Iota[3]        = "\u0399";
    char Kappa[3]       = "\u039A";
    char Lambda[3]      = "\u039B";
    char Mu[3]          = "\u039C";
    char Nu[3]          = "\u039D";
    char Xi[3]          = "\u039E";
    char Omicron[3]     = "\u039F";
    char Pi[3]          = "\u03A0";
    char Rho[3]         = "\u03A1";
    char Sigma[3]       = "\u03A3";
    char Tau[3]         = "\u03A4";
    char Upsilon[3]     = "\u03A5";
    char Phi[3]         = "\u03A6";
    char Chi[3]         = "\u03A7";
    char Psi[3]         = "\u03A8";
    char Omega[3]       = "\u03A9";


    // small letter
    char alpha[3]       = "\u03B1";
    char beta[3]        = "\u03B2";
    char gamma[3]       = "\u03B3";
    char delta[3]       = "\u03B4";
    char epsilon[3]     = "\u03B5";
    char zeta[3]        = "\u03B6";
    char eta[3]         = "\u03B7";
    char theta[3]       = "\u03B8";
    char iota[3]        = "\u03B9";
    char kappa[3]       = "\u03BA";
    char lambda[3]      = "\u03BB";
    char mu[3]          = "\u03BC";
    char nu[3]          = "\u03BD";
    char xi[3]          = "\u03BE";
    char omicron[3]     = "\u03BF";
    char pi[3]          = "\u03C0";
    char rho[3]         = "\u03C1";
    char sigma[3]       = "\u03C3";
    char tau[3]         = "\u03C4";
    char upsilon[3]     = "\u03C5";
    char phi[3]         = "\u03C6";
    char chi[3]         = "\u03C7";
    char psi[3]         = "\u03C8";
    char omega[3]       = "\u03C9";
}



// all colors in own namespace
namespace Color // fANSI way of coloring text
{
    const char  * Color_Off         = "\033[0m";       // Reset color

    namespace Regular
    {
        const char  * Black         = "\033[0;30m";      
        const char  * Red           = "\033[0;31m";
        const char  * Green         = "\033[0;32m";
        const char  * Yellow        = "\033[0;33m";
        const char  * Blue          = "\033[0;34m";   
        const char  * Purple        = "\033[0;35m"; 
        const char  * Cyan          = "\033[0;36m";     
        const char  * White         = "\033[0;37m";    
    }
    namespace Bold
    {
        const char  * Black         = "\033[1;30m";  
        const char  * Red           = "\033[1;31m";  
        const char  * Green         = "\033[1;32m";    
        const char  * Yellow        = "\033[1;33m";  
        const char  * Blue          = "\033[1;34m";     
        const char  * Purple        = "\033[1;35m";   
        const char  * Cyan          = "\033[1;36m";     
        const char  * White         = "\033[1;37m";    
    }
    namespace Underline
    {
        const char  * Black         =  "\033[4;30m";
        const char  * Red           =  "\033[4;31m";
        const char  * Green         =  "\033[4;32m";
        const char  * Yellow        =  "\033[4;33m";
        const char  * Blue          =  "\033[4;34m";
        const char  * Purple        =  "\033[4;35m";
        const char  * Cyan          =  "\033[4;36m";
        const char  * White         =  "\033[4;37m";
    }
    namespace Background
    {
        const char  * Black         =  "\033[40m";
        const char  * Red           =  "\033[41m";
        const char  * Green         =  "\033[42m";
        const char  * Yellow        =  "\033[43m";
        const char  * Blue          =  "\033[44m";
        const char  * Purple        =  "\033[45m";
        const char  * Cyan          =  "\033[46m";
        const char  * White         =  "\033[47m";
    }
    namespace HighIntensity
    {
        const char  * Black         =  "\033[0;90m";
        const char  * Red           =  "\033[0;91m";
        const char  * Green         =  "\033[0;92m";
        const char  * Yellow        =  "\033[0;93m";
        const char  * Blue          =  "\033[0;94m";
        const char  * Purple        =  "\033[0;95m";
        const char  * Cyan          =  "\033[0;96m";
        const char  * White         =  "\033[0;97m";
    }
    namespace BoldHighIntensity
    {
        const char  * Black         =  "\033[1;90m";
        const char  * Red           =  "\033[1;91m";
        const char  * Green         =  "\033[1;92m";
        const char  * Yellow        =  "\033[1;93m";
        const char  * Blue          =  "\033[1;94m";
        const char  * Purple        =  "\033[1;95m";
        const char  * Cyan          =  "\033[1;96m";
        const char  * White         =  "\033[1;97m";
    }
    namespace HighIntensityBackground
    {
        const char  * Black         =  "\033[0;100m";
        const char  * Red           =  "\033[0;101m";
        const char  * Green         =  "\033[0;102m";
        const char  * Yellow        =  "\033[0;103m";
        const char  * Blue          =  "\033[0;104m";
        const char  * Purple        =  "\033[0;105m";
        const char  * Cyan          =  "\033[0;106m";
        const char  * White         =  "\033[0;107m";
    }
}




#ifdef DBG // IF "DBG" is defined in the cpp file this function does stuff
    template <typename T>
    void log(T input, std::string color = Color::Regular::Red)
    {
        std::cout << Color::HighIntensity::Red << "DEBUG INFO: " << color << input << Color::Color_Off << std::endl;
    }    

    template<typename... Args>
    void p(Args... args)
    {
        (std::cout << ... << args) << Color::Color_Off << std::endl;
    }
    
    #else   // if "DBG" is not defined in cpp file -> Debug mode is Off.
    #define log(input, color)   // makes sure "log()" calls don't raise an error.
    #define p(args...)
    #define pR(args...)
    #define pG(args...)
    #define pB(args...)        
    #endif 
#endif

// ansi color table: [https://gist.github.com/JBlond/2fea43a3049b38287e5e9cefc87b2124] // use \033 instead of \033 (gcc only)