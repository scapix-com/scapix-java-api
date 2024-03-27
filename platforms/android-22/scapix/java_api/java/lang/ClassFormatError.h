// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/LinkageError.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFORMATERROR_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFORMATERROR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class ClassFormatError; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ClassFormatError>
{
	static constexpr fixed_string class_name = "java/lang/ClassFormatError";
	using base_classes = std::tuple<scapix::java_api::java::lang::LinkageError>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFORMATERROR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFORMATERROR)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFORMATERROR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::ClassFormatError : public jni::object_base<"java/lang/ClassFormatError",
	java::lang::LinkageError>
{
public:

	static jni::ref<java::lang::ClassFormatError> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::ClassFormatError> new_object(jni::ref<java::lang::String> detailMessage) { return base_::new_object(detailMessage); }

protected:

	ClassFormatError(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFORMATERROR
