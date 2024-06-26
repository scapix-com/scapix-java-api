// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/IOException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_ACTIVATION_UNSUPPORTEDDATATYPEEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_ACTIVATION_UNSUPPORTEDDATATYPEEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::activation { class UnsupportedDataTypeException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::activation::UnsupportedDataTypeException>
{
	static constexpr fixed_string class_name = "javax/activation/UnsupportedDataTypeException";
	using base_classes = std::tuple<scapix::java_api::java::io::IOException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACTIVATION_UNSUPPORTEDDATATYPEEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_ACTIVATION_UNSUPPORTEDDATATYPEEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_ACTIVATION_UNSUPPORTEDDATATYPEEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::activation::UnsupportedDataTypeException : public jni::object_base<"javax/activation/UnsupportedDataTypeException",
	java::io::IOException>
{
public:

	static jni::ref<javax::activation::UnsupportedDataTypeException> new_object() { return base_::new_object(); }
	static jni::ref<javax::activation::UnsupportedDataTypeException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	UnsupportedDataTypeException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACTIVATION_UNSUPPORTEDDATATYPEEXCEPTION
