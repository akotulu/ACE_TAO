// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

#include "ObjectIdListC.h"
#include "tao/Typecode.h"

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_CORBA_ORB_ObjectId[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  35,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x434f5242), 
  ACE_NTOHL (0x412f4f52), 
  ACE_NTOHL (0x425f4f62), 
  ACE_NTOHL (0x6a656374), 
  ACE_NTOHL (0x49643a31), 
  ACE_NTOHL (0x2e300000),  // repository ID = IDL:omg.org/CORBA/ORB_ObjectId:1.0
    13,
  ACE_NTOHL (0x4f52425f), 
  ACE_NTOHL (0x4f626a65), 
  ACE_NTOHL (0x63744964), 
  ACE_NTOHL (0x0),  // name = ORB_ObjectId
    CORBA::tk_string, 
  0U, // string length
};

static CORBA::TypeCode _tc_TAO_tc_CORBA_ORB_ObjectId (
    CORBA::tk_alias,
    sizeof (_oc_CORBA_ORB_ObjectId),
    (char *) &_oc_CORBA_ORB_ObjectId,
    0,
    0
  );

namespace CORBA
{
  ::CORBA::TypeCode_ptr const _tc_ORB_ObjectId =
    &_tc_TAO_tc_CORBA_ORB_ObjectId;
}

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_CORBA_ORB_ObjectIdList[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  39,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x434f5242), 
  ACE_NTOHL (0x412f4f52), 
  ACE_NTOHL (0x425f4f62), 
  ACE_NTOHL (0x6a656374), 
  ACE_NTOHL (0x49644c69), 
  ACE_NTOHL (0x73743a31), 
  ACE_NTOHL (0x2e300000),  // repository ID = IDL:omg.org/CORBA/ORB_ObjectIdList:1.0
    17,
  ACE_NTOHL (0x4f52425f), 
  ACE_NTOHL (0x4f626a65), 
  ACE_NTOHL (0x63744964), 
  ACE_NTOHL (0x4c697374), 
  ACE_NTOHL (0x0),  // name = ORB_ObjectIdList
    CORBA::tk_sequence, // typecode kind
  88, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    CORBA::tk_alias, // typecode kind for typedefs
    72, // encapsulation length
      TAO_ENCAP_BYTE_ORDER, // byte order
      35,
      ACE_NTOHL (0x49444c3a), 
      ACE_NTOHL (0x6f6d672e), 
      ACE_NTOHL (0x6f72672f), 
      ACE_NTOHL (0x434f5242), 
      ACE_NTOHL (0x412f4f52), 
      ACE_NTOHL (0x425f4f62), 
      ACE_NTOHL (0x6a656374), 
      ACE_NTOHL (0x49643a31), 
      ACE_NTOHL (0x2e300000),  // repository ID = IDL:omg.org/CORBA/ORB_ObjectId:1.0
            13,
      ACE_NTOHL (0x4f52425f), 
      ACE_NTOHL (0x4f626a65), 
      ACE_NTOHL (0x63744964), 
      ACE_NTOHL (0x0),  // name = ORB_ObjectId
            CORBA::tk_string, 
      0U, // string length

    0U,

};

static CORBA::TypeCode _tc_TAO_tc_CORBA_ORB_ObjectIdList (
    CORBA::tk_alias,
    sizeof (_oc_CORBA_ORB_ObjectIdList),
    (char *) &_oc_CORBA_ORB_ObjectIdList,
    0,
    0
  );

namespace CORBA
{
  ::CORBA::TypeCode_ptr const _tc_ORB_ObjectIdList =
    &_tc_TAO_tc_CORBA_ORB_ObjectIdList;
}

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 
