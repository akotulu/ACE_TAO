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

#include "ImplicitActivationPolicyC.h"
#include "tao/Typecode.h"
#include "tao/CDR.h"
#include "tao/Any.h"
#include "tao/Any_Impl_T.h"
#include "tao/Any_Basic_Impl_T.h"

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

#if (TAO_HAS_MINIMUM_POA == 0)

static const CORBA::Long _oc_PortableServer_ImplicitActivationPolicyValue[] =
{
  TAO_ENCAP_BYTE_ORDER, // byte order
  61,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x506f7274), 
  ACE_NTOHL (0x61626c65), 
  ACE_NTOHL (0x53657276), 
  ACE_NTOHL (0x65722f49), 
  ACE_NTOHL (0x6d706c69), 
  ACE_NTOHL (0x63697441), 
  ACE_NTOHL (0x63746976), 
  ACE_NTOHL (0x6174696f), 
  ACE_NTOHL (0x6e506f6c), 
  ACE_NTOHL (0x69637956), 
  ACE_NTOHL (0x616c7565), 
  ACE_NTOHL (0x3a322e33), 
  ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/PortableServer/ImplicitActivationPolicyValue:2.3
  30,
  ACE_NTOHL (0x496d706c), 
  ACE_NTOHL (0x69636974), 
  ACE_NTOHL (0x41637469), 
  ACE_NTOHL (0x76617469), 
  ACE_NTOHL (0x6f6e506f), 
  ACE_NTOHL (0x6c696379), 
  ACE_NTOHL (0x56616c75), 
  ACE_NTOHL (0x65000000),  // name = ImplicitActivationPolicyValue
  2, // member count
  20,
  ACE_NTOHL (0x494d504c), 
  ACE_NTOHL (0x49434954), 
  ACE_NTOHL (0x5f414354), 
  ACE_NTOHL (0x49564154), 
  ACE_NTOHL (0x494f4e00),  // name = IMPLICIT_ACTIVATION
  23,
  ACE_NTOHL (0x4e4f5f49), 
  ACE_NTOHL (0x4d504c49), 
  ACE_NTOHL (0x4349545f), 
  ACE_NTOHL (0x41435449), 
  ACE_NTOHL (0x56415449), 
  ACE_NTOHL (0x4f4e0000),  // name = NO_IMPLICIT_ACTIVATION
  };

static CORBA::TypeCode _tc_TAO_tc_PortableServer_ImplicitActivationPolicyValue (
    CORBA::tk_enum,
    sizeof (_oc_PortableServer_ImplicitActivationPolicyValue),
    (char *) &_oc_PortableServer_ImplicitActivationPolicyValue,
    0,
    0
  );

namespace PortableServer
{
  ::CORBA::TypeCode_ptr const _tc_ImplicitActivationPolicyValue =
    &_tc_TAO_tc_PortableServer_ImplicitActivationPolicyValue;
}

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_PortableServer_ImplicitActivationPolicy[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  56,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x506f7274), 
  ACE_NTOHL (0x61626c65), 
  ACE_NTOHL (0x53657276), 
  ACE_NTOHL (0x65722f49), 
  ACE_NTOHL (0x6d706c69), 
  ACE_NTOHL (0x63697441), 
  ACE_NTOHL (0x63746976), 
  ACE_NTOHL (0x6174696f), 
  ACE_NTOHL (0x6e506f6c), 
  ACE_NTOHL (0x6963793a), 
  ACE_NTOHL (0x322e3300),  // repository ID = IDL:omg.org/PortableServer/ImplicitActivationPolicy:2.3
    25,
  ACE_NTOHL (0x496d706c), 
  ACE_NTOHL (0x69636974), 
  ACE_NTOHL (0x41637469), 
  ACE_NTOHL (0x76617469), 
  ACE_NTOHL (0x6f6e506f), 
  ACE_NTOHL (0x6c696379), 
  ACE_NTOHL (0x0),  // name = ImplicitActivationPolicy
  };

static CORBA::TypeCode _tc_TAO_tc_PortableServer_ImplicitActivationPolicy (
    CORBA::tk_objref,
    sizeof (_oc_PortableServer_ImplicitActivationPolicy),
    (char *) &_oc_PortableServer_ImplicitActivationPolicy,
    0,
    0
  );

namespace PortableServer
{
  ::CORBA::TypeCode_ptr const _tc_ImplicitActivationPolicy =
    &_tc_TAO_tc_PortableServer_ImplicitActivationPolicy;
}

// TAO_IDL - Generated from
// be\be_visitor_enum/any_op_cs.cpp:52

void operator<<= (
    CORBA::Any &_tao_any,
    PortableServer::ImplicitActivationPolicyValue _tao_elem
  )
{
  TAO::Any_Basic_Impl_T<PortableServer::ImplicitActivationPolicyValue>::insert (
      _tao_any,
      PortableServer::_tc_ImplicitActivationPolicyValue,
      _tao_elem
    );
}

CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    PortableServer::ImplicitActivationPolicyValue &_tao_elem
  )
{
  return
    TAO::Any_Basic_Impl_T<PortableServer::ImplicitActivationPolicyValue>::extract (
        _tao_any,
        PortableServer::_tc_ImplicitActivationPolicyValue,
        _tao_elem 
      );
}

// TAO_IDL - Generated from
// be\be_visitor_interface/any_op_cs.cpp:50

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<PortableServer::ImplicitActivationPolicy>::to_object (
    CORBA::Object_ptr &_tao_elem
  ) const
{
  _tao_elem = CORBA::Object::_duplicate (this->value_);
  return 1;
}

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<PortableServer::ImplicitActivationPolicy>::marshal_value (TAO_OutputCDR &)
{
  return false;
}

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<PortableServer::ImplicitActivationPolicy>::demarshal_value (TAO_InputCDR &)
{
  return false;
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    PortableServer::ImplicitActivationPolicy_ptr _tao_elem
  )
{
  PortableServer::ImplicitActivationPolicy_ptr _tao_objptr =
    PortableServer::ImplicitActivationPolicy::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    PortableServer::ImplicitActivationPolicy_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<PortableServer::ImplicitActivationPolicy>::insert (
      _tao_any,
      PortableServer::ImplicitActivationPolicy::_tao_any_destructor,
      PortableServer::_tc_ImplicitActivationPolicy,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    PortableServer::ImplicitActivationPolicy_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<PortableServer::ImplicitActivationPolicy>::extract (
        _tao_any,
        PortableServer::ImplicitActivationPolicy::_tao_any_destructor,
        PortableServer::_tc_ImplicitActivationPolicy,
        _tao_elem
      );
}

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

  template class
    TAO::Any_Basic_Impl_T<
        PortableServer::ImplicitActivationPolicyValue
      >;

  template class
    TAO::Any_Impl_T<
        PortableServer::ImplicitActivationPolicy
      >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
    TAO::Any_Basic_Impl_T< \
        PortableServer::ImplicitActivationPolicyValue \
      >

# pragma instantiate \
    TAO::Any_Impl_T< \
        PortableServer::ImplicitActivationPolicy \
      >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 

#endif /* TAO_HAS_MINIMUM_CORBA == 0 */
