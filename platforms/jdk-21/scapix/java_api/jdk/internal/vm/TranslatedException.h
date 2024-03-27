// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_VM_TRANSLATEDEXCEPTION_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_VM_TRANSLATEDEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::vm { class TranslatedException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::vm::TranslatedException>
{
	static constexpr fixed_string class_name = "jdk/internal/vm/TranslatedException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_VM_TRANSLATEDEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_VM_TRANSLATEDEXCEPTION)
#define SCAPIX_JAVA_API_JDK_INTERNAL_VM_TRANSLATEDEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::vm::TranslatedException : public jni::object_base<"jdk/internal/vm/TranslatedException",
	java::lang::Exception>
{
public:

	jni::ref<java::lang::Throwable> fillInStackTrace() { return call_method<"fillInStackTrace", jni::ref<java::lang::Throwable>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	TranslatedException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_VM_TRANSLATEDEXCEPTION