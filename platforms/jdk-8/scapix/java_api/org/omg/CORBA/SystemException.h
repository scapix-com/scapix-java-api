// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_CORBA_SYSTEMEXCEPTION_FWD
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_SYSTEMEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CORBA { class SystemException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CORBA::SystemException>
{
	static constexpr fixed_string class_name = "org/omg/CORBA/SystemException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_SYSTEMEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_CORBA_SYSTEMEXCEPTION)
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_SYSTEMEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/CompletionStatus.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CORBA::SystemException : public jni::object_base<"org/omg/CORBA/SystemException",
	java::lang::RuntimeException>
{
public:

	jint minor() { return get_field<"minor", jint>(); }
	void minor(jint v) { set_field<"minor", jint>(v); }
	jni::ref<org::omg::CORBA::CompletionStatus> completed() { return get_field<"completed", jni::ref<org::omg::CORBA::CompletionStatus>>(); }
	void completed(jni::ref<org::omg::CORBA::CompletionStatus> v) { set_field<"completed", jni::ref<org::omg::CORBA::CompletionStatus>>(v); }

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	SystemException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_SYSTEMEXCEPTION