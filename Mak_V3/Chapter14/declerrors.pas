PROGRAM DeclErrors;

CONST
    ten = 10;
    epsilon = 1.0E-6;
    delta = epsilon/2;
    pi = pi;

TYPE
    typp = typp;
    range1 = 0..tenn;
    range3 = 0..10.0;
    range5 = 'q'..'p';
    range6 = foo..bar;

    enum1 = (a, b, c, d, e)
    range3 = e..c;

    ar1 = ARRAY [integer] OF integer;
    ar4 = ARRAY [(foo, bar, baz)] OF (foo, bar);

    rec1 = RECORD
               i : integer;
               r : real;
               i : boolean;
           END;

    ar5 = ARRAY [range2] RECORD
                             rec : RECORD;
                         END;

VAR
    var2 : range2;
    var4 : ten..5;
    var5 : (fee, fye, foe, FYE, fum);

BEGIN
END.
