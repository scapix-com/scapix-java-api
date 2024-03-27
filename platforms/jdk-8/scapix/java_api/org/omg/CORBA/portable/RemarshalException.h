// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_REMARSHALEXCEPTION_FWD
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_REMARSHALEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CORBA::portable { class RemarshalException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CORBA::portable::RemarshalException>
{
	static constexpr fixed_string class_name = "org/omg/CORBA/portable/RemarshalException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_REMARSHALEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_REMARSHALEXCEPTION)
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_REMARSHALEXCEPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CORBA::portable::RemarshalException : public jni::object_base<"org/omg/CORBA/portable/RemarshalException",
	java::lang::Exception>
{
public:

	static jni::ref<org::omg::CORBA::portable::RemarshalException> new_object() { return base_::new_object(); }

protected:

	RemarshalException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_REMARSHALEXCEPTION
