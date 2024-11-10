{
	// Place your snippets for cpp here. Each snippet is defined under a snippet name and has a prefix, body and 
	// description. The prefix is what is used to trigger the snippet and the body will be expanded and inserted. Possible variables are:
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. Placeholders with the 
	// same ids are connected.
	// Example:
	"boilerplate": {
		"prefix": "boilerplate code",
		"body": [
            " ",
			"/*                                             सम्भवामि युगे युगे ॥                                      */\n",

            "#include<bits/stdc++.h>",
            "using namespace std;",

            "#define ll long long",
            "#define ld long double",
            "#define inf std::numeric_limits<int>::max();",
            "#define yup cout<<\"YES\"<<endl;",
            "#define nope cout<<\"NO\"<<endl;",   
            
            "const int MOD = 1e9+7;",
            "ll binaryExpo(ll base, ll e)",
            "{",
                "\tll res=1;",
                "\twhile (e)",
                "\t{",
                    "\t\tif(e&1) (res *= base)%=MOD;",
                    "\t\t(base *= base)%=MOD; e/=2;",
                "\t} return res;",
            "}",
            
            "\nvoid solutioN()",
            "{",
				"\t$1",
            "}",
            
            "\nvoid solve_mul()",
            "{ ll test; cin>>test; while (test--) {solutioN();} }",

            "\nvoid solve_single(){solutioN();}",

            "\nint main()",
            "{", 
                "\tios_base::sync_with_stdio(false);",
                "\tsolve_mul();",
                "\t//solve_single();",
            "}",





            "\n\n\n\n\n\n/*                                Ⓒ All rights reserved to Prnc                              */"

		],
		"description": "This is a boilerplate"
	}
}
