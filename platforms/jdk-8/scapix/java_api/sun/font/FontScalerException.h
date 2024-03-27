// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_FONTSCALEREXCEPTION_FWD
#define SCAPIX_JAVA_API_SUN_FONT_FONTSCALEREXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class FontScalerException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::FontScalerException>
{
	static constexpr fixed_string class_name = "sun/font/FontScalerException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_FONTSCALEREXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_FONTSCALEREXCEPTION)
#define SCAPIX_JAVA_API_SUN_FONT_FONTSCALEREXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::font::FontScalerException : public jni::object_base<"sun/font/FontScalerException",
	java::lang::Exception>
{
public:

	static jni::ref<sun::font::FontScalerException> new_object() { return base_::new_object(); }
	static jni::ref<sun::font::FontScalerException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	FontScalerException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_FONTSCALEREXCEPTION