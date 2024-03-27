// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/NoSuchElementException.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_INPUTMISMATCHEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_INPUTMISMATCHEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class InputMismatchException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::InputMismatchException>
{
	static constexpr fixed_string class_name = "java/util/InputMismatchException";
	using base_classes = std::tuple<scapix::java_api::java::util::NoSuchElementException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_INPUTMISMATCHEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_INPUTMISMATCHEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_UTIL_INPUTMISMATCHEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::InputMismatchException : public jni::object_base<"java/util/InputMismatchException",
	java::util::NoSuchElementException>
{
public:

	static jni::ref<java::util::InputMismatchException> new_object() { return base_::new_object(); }
	static jni::ref<java::util::InputMismatchException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	InputMismatchException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_INPUTMISMATCHEXCEPTION
