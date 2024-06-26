// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_FONT_TEXTJUSTIFIER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_FONT_TEXTJUSTIFIER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::font { class TextJustifier; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::font::TextJustifier>
{
	static constexpr fixed_string class_name = "java/awt/font/TextJustifier";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_FONT_TEXTJUSTIFIER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_FONT_TEXTJUSTIFIER)
#define SCAPIX_JAVA_API_JAVA_AWT_FONT_TEXTJUSTIFIER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::awt::font::TextJustifier : public jni::object_base<"java/awt/font/TextJustifier",
	java::lang::Object>
{
public:

	static jint MAX_PRIORITY() { return get_static_field<"MAX_PRIORITY", jint>(); }

	jni::ref<jni::array<jfloat>> justify(jfloat p1) { return call_method<"justify", jni::ref<jni::array<jfloat>>>(p1); }

protected:

	TextJustifier(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_FONT_TEXTJUSTIFIER
