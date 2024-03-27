// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/text/Highlighter_Highlight.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTHIGHLIGHTER_HIGHLIGHTINFO_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTHIGHLIGHTER_HIGHLIGHTINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class DefaultHighlighter_HighlightInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::DefaultHighlighter_HighlightInfo>
{
	static constexpr fixed_string class_name = "javax/swing/text/DefaultHighlighter$HighlightInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::text::Highlighter_Highlight>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTHIGHLIGHTER_HIGHLIGHTINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTHIGHLIGHTER_HIGHLIGHTINFO)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTHIGHLIGHTER_HIGHLIGHTINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/text/Highlighter_HighlightPainter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::DefaultHighlighter_HighlightInfo : public jni::object_base<"javax/swing/text/DefaultHighlighter$HighlightInfo",
	java::lang::Object,
	javax::swing::text::Highlighter_Highlight>
{
public:

	jint getStartOffset() { return call_method<"getStartOffset", jint>(); }
	jint getEndOffset() { return call_method<"getEndOffset", jint>(); }
	jni::ref<javax::swing::text::Highlighter_HighlightPainter> getPainter() { return call_method<"getPainter", jni::ref<javax::swing::text::Highlighter_HighlightPainter>>(); }

protected:

	DefaultHighlighter_HighlightInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTHIGHLIGHTER_HIGHLIGHTINFO
