// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/font/FontAccess.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_FONT_FONTACCESSIMPL_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_FONT_FONTACCESSIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class Font_FontAccessImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::Font_FontAccessImpl>
{
	static constexpr fixed_string class_name = "java/awt/Font$FontAccessImpl";
	using base_classes = std::tuple<scapix::java_api::sun::font::FontAccess>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_FONT_FONTACCESSIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_FONT_FONTACCESSIMPL)
#define SCAPIX_JAVA_API_JAVA_AWT_FONT_FONTACCESSIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Font.h>
#include <scapix/java_api/sun/font/Font2D.h>
#include <scapix/java_api/sun/font/Font2DHandle.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::awt::Font_FontAccessImpl : public jni::object_base<"java/awt/Font$FontAccessImpl",
	sun::font::FontAccess>
{
public:

	jni::ref<sun::font::Font2D> getFont2D(jni::ref<java::awt::Font> p1) { return call_method<"getFont2D", jni::ref<sun::font::Font2D>>(p1); }
	void setFont2D(jni::ref<java::awt::Font> p1, jni::ref<sun::font::Font2DHandle> p2) { return call_method<"setFont2D", void>(p1, p2); }
	void setCreatedFont(jni::ref<java::awt::Font> p1) { return call_method<"setCreatedFont", void>(p1); }
	jboolean isCreatedFont(jni::ref<java::awt::Font> p1) { return call_method<"isCreatedFont", jboolean>(p1); }

protected:

	Font_FontAccessImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_FONT_FONTACCESSIMPL
