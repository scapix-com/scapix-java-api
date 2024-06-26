// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/IncompatibleClassChangeError.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_NOSUCHFIELDERROR_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_NOSUCHFIELDERROR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class NoSuchFieldError; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::NoSuchFieldError>
{
	static constexpr fixed_string class_name = "java/lang/NoSuchFieldError";
	using base_classes = std::tuple<scapix::java_api::java::lang::IncompatibleClassChangeError>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_NOSUCHFIELDERROR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_NOSUCHFIELDERROR)
#define SCAPIX_JAVA_API_JAVA_LANG_NOSUCHFIELDERROR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::NoSuchFieldError : public jni::object_base<"java/lang/NoSuchFieldError",
	java::lang::IncompatibleClassChangeError>
{
public:

	static jni::ref<java::lang::NoSuchFieldError> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::NoSuchFieldError> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	NoSuchFieldError(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_NOSUCHFIELDERROR
