//  *************************************************************
//  *                                                           *
//  *   B A C K E N D  (Header)                                 *
//  *                                                           *
//  *   CLASSES: TBackend                                       *
//  *                                                           *
//  *   FILE:    prog10-1/backend.h                             *
//  *                                                           *
//  *   MODULE:  Back end                                       *
//  *                                                           *
//  *   Copyright (c) 1996 by Ronald Mak                        *
//  *   For instructional purposes only.  No warranties.        *
//  *                                                           *
//  *************************************************************

#ifndef backend_h
#define backend_h

#include "misc.h"
#include "symtab.h"
#include "token.h"
#include "icode.h"

//--------------------------------------------------------------
//  TBackend            Abstract back end class.
//--------------------------------------------------------------

class TBackend {

protected:
    TToken      *pToken;  // ptr to the current token
    TTokenCode   token;   // code of current token
    TIcode      *pIcode;  // ptr to current icode
    TSymtabNode *pNode;   // ptr to symtab node

    void GetToken(void)
    {
	pToken = pIcode->Get();
	token  = pToken->Code();
	pNode  = pIcode->SymtabNode();
    }

    void GoTo(int location) { pIcode->GoTo(location); }

    int CurrentLocation(void) const {
	return pIcode->CurrentLocation();
    }

    int GetLocationMarker(void) { return pIcode->GetLocationMarker(); }

    void GetCaseItem(int &value, int &location)
    {
	pIcode->GetCaseItem(value, location);
    }

public:
    virtual ~TBackend(void) {}

    virtual void Go(const TSymtabNode *pRoutineId) = 0;
};

#endif

