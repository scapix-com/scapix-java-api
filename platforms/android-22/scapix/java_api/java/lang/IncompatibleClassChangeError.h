// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/LinkageError.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INCOMPATIBLECLASSCHANGEERROR_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INCOMPATIBLECLASSCHANGEERROR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class IncompatibleClassChangeError; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::IncompatibleClassChangeError>
{
	static constexpr fixed_string class_name = "java/lang/IncompatibleClassChangeError";
	using base_classes = std::tuple<scapix::java_api::java::lang::LinkageError>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INCOMPATIBLECLASSCHANGEERROR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INCOMPATIBLECLASSCHANGEERROR)
#define SCAPIX_JAVA_API_JAVA_LANG_INCOMPATIBLECLASSCHANGEERROR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::IncompatibleClassChangeError : public jni::object_base<"java/lang/IncompatibleClassChangeError",
	java::lang::LinkageError>
{
public:

	static jni::ref<java::lang::IncompatibleClassChangeError> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::IncompatibleClassChangeError> new_object(jni::ref<java::lang::String> detailMessage) { return base_::new_object(detailMessage); }

protected:

	IncompatibleClassChangeError(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INCOMPATIBLECLASSCHANGEERROR
