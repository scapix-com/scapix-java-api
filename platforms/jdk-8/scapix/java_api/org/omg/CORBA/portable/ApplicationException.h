// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_APPLICATIONEXCEPTION_FWD
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_APPLICATIONEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CORBA::portable { class ApplicationException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CORBA::portable::ApplicationException>
{
	static constexpr fixed_string class_name = "org/omg/CORBA/portable/ApplicationException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_APPLICATIONEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_APPLICATIONEXCEPTION)
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_APPLICATIONEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/portable/InputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CORBA::portable::ApplicationException : public jni::object_base<"org/omg/CORBA/portable/ApplicationException",
	java::lang::Exception>
{
public:

	static jni::ref<org::omg::CORBA::portable::ApplicationException> new_object(jni::ref<java::lang::String> p1, jni::ref<org::omg::CORBA::portable::InputStream> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> getId() { return call_method<"getId", jni::ref<java::lang::String>>(); }
	jni::ref<org::omg::CORBA::portable::InputStream> getInputStream() { return call_method<"getInputStream", jni::ref<org::omg::CORBA::portable::InputStream>>(); }

protected:

	ApplicationException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_PORTABLE_APPLICATIONEXCEPTION
