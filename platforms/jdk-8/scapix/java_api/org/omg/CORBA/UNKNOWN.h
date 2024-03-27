// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/omg/CORBA/SystemException.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_CORBA_UNKNOWN_FWD
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_UNKNOWN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CORBA { class UNKNOWN; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CORBA::UNKNOWN>
{
	static constexpr fixed_string class_name = "org/omg/CORBA/UNKNOWN";
	using base_classes = std::tuple<scapix::java_api::org::omg::CORBA::SystemException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_UNKNOWN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_CORBA_UNKNOWN)
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_UNKNOWN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/CompletionStatus.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CORBA::UNKNOWN : public jni::object_base<"org/omg/CORBA/UNKNOWN",
	org::omg::CORBA::SystemException>
{
public:

	static jni::ref<org::omg::CORBA::UNKNOWN> new_object() { return base_::new_object(); }
	static jni::ref<org::omg::CORBA::UNKNOWN> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<org::omg::CORBA::UNKNOWN> new_object(jint p1, jni::ref<org::omg::CORBA::CompletionStatus> p2) { return base_::new_object(p1, p2); }
	static jni::ref<org::omg::CORBA::UNKNOWN> new_object(jni::ref<java::lang::String> p1, jint p2, jni::ref<org::omg::CORBA::CompletionStatus> p3) { return base_::new_object(p1, p2, p3); }

protected:

	UNKNOWN(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_UNKNOWN
