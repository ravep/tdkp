// ------------------------------------------------------------
//
// This file is part of tdkp, a simulation tool for nanostrutctures
// of optoelectronics developed at ETH Zurich
//
// (C) 2005-2009 Ratko G. Veprek, ETH Zurich, veprek@iis.ee.ethz.ch
//
// 1) As of 18.6.2009 this code is property of ETH Zurich and must not be
// transferred, modified or used by third parties without appropriate
// licenses issued by authorized agents of ETH Zurich.
//
// 2) Violation of this will result in judicial action according to civil
// and penal law.
//
// 3) Any claim of authorship other than by the author himself is
// strictly forbidden.
//
// 4) The source code must retain the copyright notice, this list
// of conditions and the following disclaimer.
//
// THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS
// BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
// BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
// WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
// OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
// IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// ------------------------------------------------------------

#ifndef KP8X83D_H_
#define KP8X83D_H_

#include "tdkp/probdefs/KPBase3D.h"

namespace tdkp {
	
/** zincblende kp 8x8 hamiltonian for 3D problems */
class KP8x83D : public KPBase3D {
public:
	KP8x83D(const Geometry& geometry_, MaterialDatabase& material_database_);
	virtual ~KP8x83D();
	EigenProblemType get_problem_type() const {	return indefinite; }
	virtual string get_unique_identifier() const { return string("KP8x83D"); }		
protected:
	
	virtual KPMatrixBase* get_matrix() const;		
	
	
};

/** wurtzite kp 8x8 hamiltonian for 3D problems */
class KP8x83DWZ : public KPBase3D {
public:
	KP8x83DWZ(const Geometry& geometry_, MaterialDatabase& material_database_);
	virtual ~KP8x83DWZ();
	EigenProblemType get_problem_type() const {	return indefinite; }
	virtual string get_unique_identifier() const { return string("KP8x83DWZ"); }			
protected:	
	virtual KPMatrixBase* get_matrix() const;		
	
	
};

}

#endif /*KP8X83D_H_*/
