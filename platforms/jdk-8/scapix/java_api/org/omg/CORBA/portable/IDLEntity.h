// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_IDLENTITY_FWD
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_IDLENTITY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CORBA::portable { class IDLEntity; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CORBA::portable::IDLEntity>
{
	static constexpr fixed_string class_name = "org/omg/CORBA/portable/IDLEntity";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_IDLENTITY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_IDLENTITY)
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_IDLENTITY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CORBA::portable::IDLEntity : public jni::object_base<"org/omg/CORBA/portable/IDLEntity",
	java::lang::Object,
	java::io::Serializable>
{
public:


protected:

	IDLEntity(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_IDLENTITY
