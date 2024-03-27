// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_INVALIDJARINDEXEXCEPTION_FWD
#define SCAPIX_JAVA_API_SUN_MISC_INVALIDJARINDEXEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class InvalidJarIndexException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::InvalidJarIndexException>
{
	static constexpr fixed_string class_name = "sun/misc/InvalidJarIndexException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_INVALIDJARINDEXEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_INVALIDJARINDEXEXCEPTION)
#define SCAPIX_JAVA_API_SUN_MISC_INVALIDJARINDEXEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::InvalidJarIndexException : public jni::object_base<"sun/misc/InvalidJarIndexException",
	java::lang::RuntimeException>
{
public:

	static jni::ref<sun::misc::InvalidJarIndexException> new_object() { return base_::new_object(); }
	static jni::ref<sun::misc::InvalidJarIndexException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	InvalidJarIndexException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_INVALIDJARINDEXEXCEPTION
