// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_GUARD_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_GUARD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class Guard; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::Guard>
{
	static constexpr fixed_string class_name = "java/security/Guard";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_GUARD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_GUARD)
#define SCAPIX_JAVA_API_JAVA_SECURITY_GUARD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::Guard : public jni::object_base<"java/security/Guard",
	java::lang::Object>
{
public:

	void checkGuard(jni::ref<java::lang::Object> p1) { return call_method<"checkGuard", void>(p1); }

protected:

	Guard(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_GUARD
