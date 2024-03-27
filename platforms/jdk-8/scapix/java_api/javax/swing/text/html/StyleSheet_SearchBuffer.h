// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_STYLESHEET_SEARCHBUFFER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_STYLESHEET_SEARCHBUFFER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class StyleSheet_SearchBuffer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::StyleSheet_SearchBuffer>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/StyleSheet$SearchBuffer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_STYLESHEET_SEARCHBUFFER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_STYLESHEET_SEARCHBUFFER)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_STYLESHEET_SEARCHBUFFER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::html::StyleSheet_SearchBuffer : public jni::object_base<"javax/swing/text/html/StyleSheet$SearchBuffer",
	java::lang::Object>
{
public:


protected:

	StyleSheet_SearchBuffer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_STYLESHEET_SEARCHBUFFER