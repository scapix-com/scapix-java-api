// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_FONT_LINEBREAKMEASURER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_FONT_LINEBREAKMEASURER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::font { class LineBreakMeasurer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::font::LineBreakMeasurer>
{
	static constexpr fixed_string class_name = "java/awt/font/LineBreakMeasurer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_FONT_LINEBREAKMEASURER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_FONT_LINEBREAKMEASURER)
#define SCAPIX_JAVA_API_JAVA_AWT_FONT_LINEBREAKMEASURER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/font/FontRenderContext.h>
#include <scapix/java_api/java/awt/font/TextLayout.h>
#include <scapix/java_api/java/text/AttributedCharacterIterator.h>
#include <scapix/java_api/java/text/BreakIterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::font::LineBreakMeasurer : public jni::object_base<"java/awt/font/LineBreakMeasurer",
	java::lang::Object>
{
public:

	static jni::ref<java::awt::font::LineBreakMeasurer> new_object(jni::ref<java::text::AttributedCharacterIterator> p1, jni::ref<java::awt::font::FontRenderContext> p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::awt::font::LineBreakMeasurer> new_object(jni::ref<java::text::AttributedCharacterIterator> p1, jni::ref<java::text::BreakIterator> p2, jni::ref<java::awt::font::FontRenderContext> p3) { return base_::new_object(p1, p2, p3); }
	jint nextOffset(jfloat p1) { return call_method<"nextOffset", jint>(p1); }
	jint nextOffset(jfloat p1, jint p2, jboolean p3) { return call_method<"nextOffset", jint>(p1, p2, p3); }
	jni::ref<java::awt::font::TextLayout> nextLayout(jfloat p1) { return call_method<"nextLayout", jni::ref<java::awt::font::TextLayout>>(p1); }
	jni::ref<java::awt::font::TextLayout> nextLayout(jfloat p1, jint p2, jboolean p3) { return call_method<"nextLayout", jni::ref<java::awt::font::TextLayout>>(p1, p2, p3); }
	jint getPosition() { return call_method<"getPosition", jint>(); }
	void setPosition(jint p1) { return call_method<"setPosition", void>(p1); }
	void insertChar(jni::ref<java::text::AttributedCharacterIterator> p1, jint p2) { return call_method<"insertChar", void>(p1, p2); }
	void deleteChar(jni::ref<java::text::AttributedCharacterIterator> p1, jint p2) { return call_method<"deleteChar", void>(p1, p2); }

protected:

	LineBreakMeasurer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_FONT_LINEBREAKMEASURER
