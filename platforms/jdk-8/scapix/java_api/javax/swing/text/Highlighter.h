// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HIGHLIGHTER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HIGHLIGHTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class Highlighter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::Highlighter>
{
	static constexpr fixed_string class_name = "javax/swing/text/Highlighter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HIGHLIGHTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HIGHLIGHTER)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HIGHLIGHTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/javax/swing/text/Highlighter_Highlight.h>
#include <scapix/java_api/javax/swing/text/Highlighter_HighlightPainter.h>
#include <scapix/java_api/javax/swing/text/JTextComponent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::Highlighter : public jni::object_base<"javax/swing/text/Highlighter",
	java::lang::Object>
{
public:

	using HighlightPainter = Highlighter_HighlightPainter;
	using Highlight = Highlighter_Highlight;

	void install(jni::ref<javax::swing::text::JTextComponent> p1) { return call_method<"install", void>(p1); }
	void deinstall(jni::ref<javax::swing::text::JTextComponent> p1) { return call_method<"deinstall", void>(p1); }
	void paint(jni::ref<java::awt::Graphics> p1) { return call_method<"paint", void>(p1); }
	jni::ref<java::lang::Object> addHighlight(jint p1, jint p2, jni::ref<javax::swing::text::Highlighter_HighlightPainter> p3) { return call_method<"addHighlight", jni::ref<java::lang::Object>>(p1, p2, p3); }
	void removeHighlight(jni::ref<java::lang::Object> p1) { return call_method<"removeHighlight", void>(p1); }
	void removeAllHighlights() { return call_method<"removeAllHighlights", void>(); }
	void changeHighlight(jni::ref<java::lang::Object> p1, jint p2, jint p3) { return call_method<"changeHighlight", void>(p1, p2, p3); }
	jni::ref<jni::array<javax::swing::text::Highlighter_Highlight>> getHighlights() { return call_method<"getHighlights", jni::ref<jni::array<javax::swing::text::Highlighter_Highlight>>>(); }

protected:

	Highlighter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HIGHLIGHTER
