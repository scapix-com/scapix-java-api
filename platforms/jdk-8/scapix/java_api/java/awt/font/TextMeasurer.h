// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_FONT_TEXTMEASURER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_FONT_TEXTMEASURER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::font { class TextMeasurer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::font::TextMeasurer>
{
	static constexpr fixed_string class_name = "java/awt/font/TextMeasurer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_FONT_TEXTMEASURER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_FONT_TEXTMEASURER)
#define SCAPIX_JAVA_API_JAVA_AWT_FONT_TEXTMEASURER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/font/FontRenderContext.h>
#include <scapix/java_api/java/awt/font/TextLayout.h>
#include <scapix/java_api/java/text/AttributedCharacterIterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::font::TextMeasurer : public jni::object_base<"java/awt/font/TextMeasurer",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	static jni::ref<java::awt::font::TextMeasurer> new_object(jni::ref<java::text::AttributedCharacterIterator> p1, jni::ref<java::awt::font::FontRenderContext> p2) { return base_::new_object(p1, p2); }
	jint getLineBreakIndex(jint p1, jfloat p2) { return call_method<"getLineBreakIndex", jint>(p1, p2); }
	jfloat getAdvanceBetween(jint p1, jint p2) { return call_method<"getAdvanceBetween", jfloat>(p1, p2); }
	jni::ref<java::awt::font::TextLayout> getLayout(jint p1, jint p2) { return call_method<"getLayout", jni::ref<java::awt::font::TextLayout>>(p1, p2); }
	void insertChar(jni::ref<java::text::AttributedCharacterIterator> p1, jint p2) { return call_method<"insertChar", void>(p1, p2); }
	void deleteChar(jni::ref<java::text::AttributedCharacterIterator> p1, jint p2) { return call_method<"deleteChar", void>(p1, p2); }

protected:

	TextMeasurer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_FONT_TEXTMEASURER
