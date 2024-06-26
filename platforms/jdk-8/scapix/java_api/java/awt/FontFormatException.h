// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_FONTFORMATEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_FONTFORMATEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class FontFormatException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::FontFormatException>
{
	static constexpr fixed_string class_name = "java/awt/FontFormatException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_FONTFORMATEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_FONTFORMATEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_AWT_FONTFORMATEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::FontFormatException : public jni::object_base<"java/awt/FontFormatException",
	java::lang::Exception>
{
public:

	static jni::ref<java::awt::FontFormatException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	FontFormatException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_FONTFORMATEXCEPTION
